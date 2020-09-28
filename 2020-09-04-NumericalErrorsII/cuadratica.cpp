#include <iostream>
#include <cmath>
#include <cstdlib>

//Se declaran las funciones normal y modificada, tomando el signo + y - 

double raizp(double argAp, double argBp, double argCp);
double raizm(double argAm, double argBm, double argCm);
double raizmodp(double argmAp, double argmBp, double argmCp);
double raizmodm(double argmAm, double argmBm, double argmCm);

int main(int argc, char *argv[]){

  //Cifras decimales y notación cientifica
  std::cout.precision(8);
  std::cout.setf(std::ios::scientific);
  
  //Coeficientes de la ecuación cuadratica
  double A = std::atoi(argv[1]);
  double B = std::atoi(argv[2]);
  double C = std::atoi(argv[3]);

  
  //Regresar raices con la formula normal y la formula modificada
  std::cout << "Formula normal: \n"
	    << "x1= " << raizp(A,B,C)
	    << "\t x2= " << raizm(A,B,C) << "\n"
	    << "Formula modificada: \n"
	    << "x1= " << raizmodp(A,B,C)
	    << "\t x2= " << raizmodm(A,B,C) << "\n";
   

  return 0;
}

//Formula normal, signo +
double raizp(double argAp, double argBp, double argCp){
  double x1;
  x1 = (-argBp + sqrt(argBp*argBp - 4*argAp*argCp))/(2*argAp);
  return x1;
}


//Formula normal, signo -
double raizm(double argAm, double argBm, double argCm){
  double x2;
  x2 = (-argBm - sqrt(argBm*argBm - 4*argAm*argCm))/(2*argAm);
  return x2;
}



//Formula modificada, signo +
double raizmodp(double argmAp, double argmBp, double argmCp){
  double x1m;
  x1m = (-2*argmCp)/(argmBp + sqrt(argmBp*argmBp - 4*argmAp*argmCp));
  return x1m;
}



//Formula modificada, signo -
double raizmodm(double argmAm, double argmBm, double argmCm){
  double x2m;
  x2m = (-2*argmCm)/(argmBm - sqrt(argmBm*argmBm - 4*argmAm*argmCm));
  return x2m;
}
