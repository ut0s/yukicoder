#!/bin/bash
# @file yuki.sh
# @brief

set -ue

if [ "$(uname)" == 'Darwin' ]; then
  readonly open_browser="open /Applications/Google\ Chrome.app"
  export PATH="/Users/tagashira/Library/Python/3.9/bin:$PATH"
else
  readonly open_browser="google-chrome"
fi

readonly path_to_yukicoder="$HOME/yukicoder/"

readonly TLE="3" # second
readonly JOB=$(nproc) # parallel

function usage() {
  cat <<EOS
Usage:
  $0 COMMAND

  COMMAND      session, new, dl, test, sys|system, sub|submit, ci|commit, open, me, help
EOS
  echo ""
  cat ${path_to_yukicoder}/bin/yuki.sh | grep "@doc" |cut -d ' ' -f2- |tail -n +2 | awk -F'##' '{printf "%-30s %s\n",$1,$2}'

  exit 0
}


check_oj(){
  which oj > /dev/null || ${path_to_yukicoder}/bin/install-tools.sh
}


# @doc session ## check yukicoder login session
oj_session(){
  oj login --check https://yukicoder.me
}


# @doc new <contest_id> ## make new file(*.cpp), insert template, ans download testcase
oj_new(){
  local contest_id=$2

  setup_contest $contest_id
}

setup_contest(){
  cd $path_to_yukicoder/src # $HOME/yukicoder

  local contest_id=$1

  ln -fs ${path_to_yukicoder}/etc/Makefile .
  mkdir -p test/$(printf "%04d" $contest_id)

  url="https://yukicoder.me/problems/no/${contest_id}"
  local page=$(mktemp)
  wget -q -O- $url > $page
  title=$(cat $page | grep "title" | cut -d ">" -f2 | cut -d "<" -f1 | sed 's#^0*##g')
  file=$(printf "%04d" $contest_id).cpp

  error=$(cat $page | grep "小数誤差許容問題" | cut -d'$' -f2 )
  if [ -n "$error" ] ; then
    error=$(echo $error | sed 's#times##g') # 5 \times 10^{-4} -> 5 \ 10^{-4} or 10^{-4}
    local _error_coef=$(echo $error | cut -d'\\' -f1 | tr -d ' ')
    local error_coef="${_error_coef:-1}"
    local _error_base=$(echo $error | cut -d'^' -f1 | cut -d'\\' -f2 | tr -d ' ')
    local error_base="${_error_coef:-10}"
    local _error_idx=$(echo $error | cut -d'^' -f2 | cut -d'{' -f2 | cut -d'}' -f1 | tr -d ' ')
    local error_idx="${_error_idx:-0}"
  fi

  if [ -e $file ]
  then
    oj_download "command" $contest_id $url
  else
    touch $file
    cat <<EOS >> $file
/**
  @file $file
  @title $title
  @url $url
**/

EOS

    if [ -n "$error" ] ; then
      echo "/** @error $error_coef $error_base $error_idx **/" >> $file
      echo "" >> $file
    fi
    cat $path_to_yukicoder/etc/template.cpp >> $file
    oj_download "command" $contest_id $url
  fi
}


# @doc dl <contest_id> ## download testcase
oj_download(){
  local command=$1
  local contest_id=$2
  local url="https://yukicoder.me/problems/no/${contest_id}"
  echo "$contest_id"

  mkdir -p test/$(printf "%04d" $contest_id)
  oj download --silent -d test/$(printf "%04d" $contest_id) $url
}

# @doc dlsys <contest id> ## download system testcase
oj_download_sys(){
  local command=$1
  local contest_id=$2
  local url="https://yukicoder.me/problems/no/${contest_id}"
  echo "$contest_id"

  mkdir -p sys/$(printf "%04d" $contest_id)
  oj download -a --silent -d sys/$(printf "%04d" $contest_id) $url
}

get_error_info(){
  local contest_id=$1

  cat $contest_id.cpp | grep "@error" > /dev/null
  if [ "$?" -eq 0 ] ; then
    error_coef=$(cat $contest_id.cpp | grep "@error" | cut -d'@' -f2 | cut -d' ' -f2 )
    error_base=$(cat $contest_id.cpp | grep "@error" | cut -d'@' -f2 | cut -d' ' -f3 )
    error_idx=$(cat $contest_id.cpp | grep "@error" | cut -d'@' -f2 | cut -d' ' -f4 )
    echo "$error_coef"e"$error_idx"
  else
    echo "0"
  fi
}


# @doc test <level> ## test sample case
oj_test(){
  local command=$1
  local contest_id=$2

  local error=$(get_error_info $contest_id)
  if [ "$error" != "0" ] ; then
    echo "ERROR MODE"
  fi

  if [ ! -d test/$contest_id ]; then oj_download command $(echo $contest_id | sed 's#^0*##g') ;fi

  time make $contest_id &&\
  mv $contest_id exe/$contest_id &&\
  oj test --tle $TLE --jobs $JOB --error $error --print-input --print-memory -d test/$contest_id -c ./exe/$contest_id
}

# @doc sys|system <level> ## test all testcase
oj_system_test(){
  local command=$1
  local contest_id=$2

  local error=$(get_error_info $contest_id)
  if [ "$error" != "0" ] ; then
    echo "ERROR MODE"
  fi

  if [ ! -d sys/$contest_id ]; then oj_download_sys command $(echo $contest_id | sed 's#^0*##g') ;fi

  time make $contest_id &&\
  mv $contest_id exe/$contest_id &&\
  oj test --tle $TLE --jobs $JOB --error $error --print-input --print-memory -d sys/$contest_id -c ./exe/$contest_id
}


# @doc sub|submit <level> ## submit code
oj_submit(){
  local command=$1
  local contest_id=$2

  local url="https://yukicoder.me/problems/no/${contest_id}"

  tmplog=$(mktemp)
  # oj submit --language cpp14 --no-guess --wait 0 --guess-cxx-compiler gcc --no-open $url $contest_id.cpp |& tee $tmplog
  oj submit --language cpp14 --no-guess --wait 0 --guess-cxx-compiler gcc --no-open $url $contest_id.cpp
  readonly submitted_url=$(cat $tmplog | grep "success: result:" |cut -d ' ' -f4)
  # echo $submitted_url
  rm -f $tmplog
}

oj_submit_force(){
  local command=$1
  local contest_id=$2

  local url="https://yukicoder.me/problems/no/${contest_id}"

  oj submit --language cpp14 --no-guess --wait 0 --guess-cxx-compiler gcc --no-open --yes $url $contest_id.cpp
}


commit_submission(){
  local command=$1
  local contest_id=$(echo $2 | sed 's/0*\([0-9]*[0-9]$\)/\1/g')

  local file=$(printf "%04d" $contest_id ).cpp

  local submission_me="https://yukicoder.me/problems/no/$contest_id/submissions?submitter=8576&status=AC"
  local title=$(cat $file | grep "@title" | cut -d ' ' -f3- )

  local tmpfile=$(mktemp)
  wget -q -O- $submission_me | grep -A5 -B5 "No.$contest_id" > $tmpfile

  local submission_num=$(cat $tmpfile | grep "submission" | cut -d'<' -f3 | cut -d'>' -f2 | tr -d ' ' | tr -d '\n' )
  local submission_url="https://yukicoder.me/submissions/$submission_num"

  git add $file &&\
    git commit -m "add: $title | (AC) $submission_url"

  rm $tmpfile
}


# @doc open <level> ## open yukicoder task page
open_problem_page(){
  local command=$1
  local contest_id=$2

  local url="https://yukicoder.me/problems/no/${contest_id}"

  $open_browser $url
}


# @doc me <level> ## open yukicoder submission me page
open_submission_page(){
  local command=$1
  local submission_me="https://yukicoder.me/submissions?lang_id=&status=&my_submission=enabled"

  $open_browser $submission_me
}


function main() {
  check_oj

  if [[ $# -lt 1 ]]; then
    echo "command is empty!!!"
    echo ""
    usage
  fi

  local COMMAND=$1

  case "$COMMAND" in
    "session" ) oj_session ;;
    "new" ) oj_new $@ ;;
    "dl" ) oj_download $@ ;;
    "dlsys" ) oj_download_sys $@ ;;
    "test" ) oj_test $@ ;;
    "sys" ) oj_system_test $@ ;;
    "system" ) oj_system_test $@ ;;
    "sub" ) oj_submit $@ && $open_browser $submitted_url ;;
    "submit" ) oj_submit $@ && $open_browser $submitted_url ;;
    "subforce" ) oj_submit_force $@ ;;
    "ci" ) commit_submission $@ ;;
    "commit" ) commit_submission $@ ;;
    "open" ) open_problem_page $@ ;;
    "me" ) open_submission_page $@ ;;
    "help" ) usage ;;
    * ) echo "something wrong" ;;
  esac
}

main $@
