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

install_brew_gcc(){
  ln -fs /opt/homebrew/Cellar/gcc/11.1.0_1/bin/g++-11 /usr/local/bin/g++
  ln -fs /opt/homebrew/Cellar/gcc/11.1.0_1/bin/gcc-11 /usr/local/bin/gcc
}

main(){
  install_oj
  if [ "$(uname)" == 'Darwin' ]; then
    install_brew_gcc
  fi
}

main
