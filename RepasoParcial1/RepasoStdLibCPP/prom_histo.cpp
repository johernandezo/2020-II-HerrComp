#include <iostream>
#include <random>
#include <cstdlib>

int main(){
  int NH = 10; //Numero de histogramas
  int N=10000; //Numeron de numeros aleatorios por histograma
  int NBINS=20; //Numero de divisiones
  double xmin=0.0; 
  double xmax=1.0;
  double DX=(xmax-xmin)/20;

  double Histoproms[NBINS] = {0.0};


  for(int j = 0; j < NH; j++){
    double Histo[NBINS] = {0.0};
    std::mt19937 gen(j);
    std::uniform_real_distribution<double> dis(xmin,xmax);
  for(int i = 0; i < N; i++){
    double r = dis(gen);
    int p = int((r-xmin)/DX);
    Histo[p] ++;
    Histoproms[p] += 1.0/NH;

  }

  }
  


  for(int h = 0; h < NBINS; h++){

    std::cout << xmin +h*DX << "\t" << Histoproms[h] << "\n";

  }




  return 0;
}
