#include <iostream>
#include <cmath>
#include <random>

int main(){

  int N = 100;
  int rand_number;
  for(int i = 0; i<N; i++){
    std::srand(i);
    rand_number = std::rand();
    std::cout << "Semilla = " << i << ", Numero aleatorio = " << rand_number << "\n";

  }

  return 0;

}
