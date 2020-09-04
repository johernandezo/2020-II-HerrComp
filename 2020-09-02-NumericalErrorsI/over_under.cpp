#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]){
  //argc: Contar el numero de argumentos en la linea de comandos
  //argv: Guardar esos argumeentos en un arreglo

  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
  
  double under = 1.0;
  double over = 1.0;
  int N = atoi(argv[1]);


  for(int i=0; i < N; i++){

    under /=2.0;
    over *=2.0;
    std::cout << i << "\t" << under << "\t" << over << "\n";



  }



}



