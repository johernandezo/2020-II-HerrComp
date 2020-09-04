#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]){

  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  
  float eps = 1.0;
  float one = 1.0;
  int N = atoi(argv[1]);

  for(int i=0; i < N; i++){

    eps /=2.0;
    one = 1.0 + eps;
    
    std::cout << i << "\t" << one << "\t" << eps << "\n";

  }

}

  






