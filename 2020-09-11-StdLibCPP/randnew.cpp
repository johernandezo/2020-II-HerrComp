#include <iostream>
#include <random>

int main(void){

  const int N = 10000;
  const int NBINS = 20;
  const int SEED = 1;
  const double XMIN = 0.0, XMAX = 1.0;
  const double DXHISTO = (XMAX - XMIN)/NBINS;

  double histo[NBINS] = {0.0};
  
  std::mt19937 gen(SEED); //Declarando el generador
  std::uniform_real_distribution<double> dis(XMIN,XMAX);


  for(int i = 0; i < N; i++){
    double r = dis(gen);
    int bin = int((r - XMIN)/DXHISTO);
    histo[bin] += 1;
  }

  for(int i = 0; i < NBINS; i++){

    std::cout << XMIN + i*DXHISTO << "\t" << histo[i] << "\n";

  }

  return 0;
}
