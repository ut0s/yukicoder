#!/bin/bash
# @date Time-stamp: <2019-08-26 23:36:44 tagashira>
# @file install-tools.sh
# @brief

DOTFILES="$HOME/dotfiles"

install_oj(){
  porg -l -p online-judge-tools "pip3 install -U online-judge-tools --user"
  echo ""
  ln -sf $(cd $(dirname $0) && pwd)/yuki.sh $HOME/bin/yuki && which yuki
  ln -sf $HOME/yukicoder/etc/Makefile $HOME/yukicoder/src/Makefile
}



if [ $(which porg) ]; then
    echo 'porg command found'
    install_oj
else
    echo 'porg command not found ...'
    eval ${DOTFILES}/etc/init/00-install-porg.sh &&\
    install_oj
fi
