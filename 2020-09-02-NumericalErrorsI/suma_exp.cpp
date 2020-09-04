#include <iostream>
#include <cstdlib>
#include <cmath>


double suma(double x, int Nmax);

int main(int argc, char *argv[]){

  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
  double xval = std::atof(argv[1]);
  int N  =std::atoi(argv[2]);


  std::cout << suma(xval, N) << "\n";


  return 0;
}

double suma(double x, int Nmax){
  double sum = 1.0;
  //a_n=((-x)^n)/n!
  //a_{n+1}=((-x)^{n+1})/(n+1)! = ((-x)*(-x)^{n})/(n+1)*n!= a_n*(-x)/(n+1)
  double term = 1.0;

  for(int i=2; i < Nmax; i++){
    term = (term*(-x))/(i+1);
    sum = sum + term;
  }

  return sum;
}


