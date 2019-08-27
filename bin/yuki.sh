#!/bin/bash
# @date Time-stamp: <2019-08-27 11:06:07 tagashira>
# @file yuki.sh
# @brief

set -ue

readonly open_browser="google-chrome"
readonly path_to_yukicoder="$HOME/yukicoder/"

readonly TLE="3" # second
readonly JOB=$(nproc) # parallel

function usage() {
  cat <<EOS
Usage:
  $0 COMMAND

  COMMAND      session, new, dl, test, sys|system, sub|submit, open, me, help
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
  mkdir -p test/${contest_id}

  url="https://yukicoder.me/problems/no/${contest_id}"
  title=$(wget -q -O- $url | grep "title" | cut -d ">" -f2 | cut -d "<" -f1)

  if [ -e $contest_id.cpp ]
  then
    oj_download "command" $contest_id $url
  else
    touch $contest_id.cpp
    cat <<EOS >> $contest_id.cpp
/**
  @file $contest_id.cpp
  @title $title
  @url $url
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)


int main() {
  int i, j, k, l;

  string S;
  cin >> S;

  int N;
  cin >> N;

  cout << "" << endl;
  return 0;
}

EOS

    oj_download "command" $contest_id $url
  fi
}


# @doc dl <contest_id> ## download testcase
oj_download(){
  local command=$1
  local contest_id=$2
  local url="https://yukicoder.me/problems/no/${contest_id}"

  mkdir -p test/$contest_id
  oj download --silent -d test/$contest_id $url
}

# @doc dlsys <contest id> ## download system testcase
oj_download_sys(){
  local command=$1
  local contest_id=$2
  local url="https://yukicoder.me/problems/no/${contest_id}"

  mkdir -p sys/$contest_id
  oj download -a --silent -d sys/$contest_id $url
}


# @doc test <level> ## test sample case
oj_test(){
  local command=$1
  local contest_id=$2

  time make $contest_id &&\
  mv $contest_id exe/$contest_id
  if [ ! -d test/$contest_id ]; then oj_download command $contest_id ;fi
  oj test --tle $TLE --jobs $JOB --print-input --print-memory -d test/$contest_id -c ./exe/$contest_id
}

# @doc sys|system <level> ## test all testcase
oj_system_test(){
  local command=$1
  local contest_id=$2

  time make $contest_id &&\
  mv $contest_id exe/$contest_id
  if [ ! -d sys/$contest_id ]; then oj_download_sys command $contest_id ;fi
  oj test --tle $TLE --jobs $JOB --print-input --print-memory -d sys/$contest_id -c ./exe/$contest_id
}


# @doc sub|submit <level> ## submit code
oj_submit(){
  local command=$1
  local contest_id=$2

  local url="https://yukicoder.me/problems/no/${contest_id}"

  oj submit --language cpp14 --no-guess --wait 0 --guess-cxx-compiler gcc --no-open $url $contest_id.cpp |& tee tmp.log
  readonly submitted_url=$(cat tmp.log | grep "success: result:" |cut -d ' ' -f4)
  # echo $submitted_url
  rm -f tmp.log
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
    "open" ) open_problem_page $@ ;;
    "me" ) open_submission_page $@ ;;
    "help" ) usage ;;
    * ) echo "something wrong" ;;
  esac
}

main $@
