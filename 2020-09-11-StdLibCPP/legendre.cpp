#include <iostream>
#include <cmath>

int main(){
  //Imprimir los valores de la función de Legendre orden 2, entre 0 y 10, en pasos de 0.1.

  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);

  double x = -1.0;

  int N = 5;

  for(int i = 0; i <= 200; i++){

    std::cout << x+(i*0.01) << "\t"
	      << std::legendre(N , x+(i*0.01)) << "\n";

  }

  return 0;


}
