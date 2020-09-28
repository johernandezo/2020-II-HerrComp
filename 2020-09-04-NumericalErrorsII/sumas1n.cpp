#include <iostream>
#include <cmath>
#include <cstdlib>

//Se declaran las series up and down

double sumup(int Nmax);
double sumdown(int Nmax);

int main(int argc, char *argv[]){

  //Cifras decimales y notación cientifica
  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
  
  int nmax = std::atoi(argv[1]);

  //Regresar N, sumup(N), sumdown(N) y diferencia porcentual
  std::cout << "N \t Suma up \t \t Suma down \t \t  % \n";
  for(int ii=1.0; ii <= nmax; ii++){
    std::cout << ii << "\t"
	      << sumup(ii) << "\t"
	      << sumdown(ii) << "\t"
	      << (fabs(sumup(ii) - sumdown(ii))/fmax(sumdown(ii),sumup(ii)))*100.0 << "\n";
  }
   
  return 0;
}

//Suma hacia arriba
double sumup(int Nmax){
  double su = 0.0;
  for(int j=1 ; j<=Nmax; j++){
    su += (1.0/j);
  }
  return su;
}


//Suma hacia abajo
double sumdown(int Nmax){
  double sd = 0.0;
  for(int i=Nmax; i >= 1; i--){
    sd += (1.0/i);
  }
  return sd;
}

