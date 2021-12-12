// Copyright by Margarita-creator

#include <header.hpp>
#include <iostream>


int main() {
  // path  менять в зависимости от системы
  std::string path("/home/user31/Documents/Labs/lab4/misc/ftp/");
  Filesystem test(path);
  std::cout << test;
}