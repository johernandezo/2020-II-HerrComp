#include<iostream>
#include <cstdlib>
#include "./factorial.h"

//Main
int main(int argc, char **argv){

  int n = std::atoi(argv[1]);
  std::cout << "El factorial de " << n << " es: " << factorial(n);
  return 0;
}
