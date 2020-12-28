#!/bin/bash
# @file install-tools.sh
# @brief

DOTFILES="$HOME/dotfiles"

install_oj(){
  pip3 install -U online-judge-tools --user
  echo ""
  ln -sf $(cd $(dirname $0) && pwd)/yuki.sh $HOME/bin/yuki && which yuki
  ln -sf $HOME/yukicoder/etc/Makefile $HOME/yukicoder/src/Makefile
}

main(){
  install_oj
}

main
