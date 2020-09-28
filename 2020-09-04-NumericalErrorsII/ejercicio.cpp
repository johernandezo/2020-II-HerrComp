#include <iostream>
#include <cmath>

float fun(float argx1);
float funmod(float argx2);

int main(void){
  
  //Cifras decimales y notación cientifica
  std::cout.precision(8); 
  std::cout.setf(std::ios::scientific);

  //Titulos de las columnas
  std::cout << "x \t\t fun(x) \t funmod(x) \n";

  //Bucle for con la variable x, fun(x) y funmod(x)
  float x = 0.0;
  
  for(int i = 0; i <= 100; i++){
 
    std::cout << x+(i*0.01) << "\t"
	      << fun(x+(i*0.01)) << "\t"
	      << funmod(x+(i*0.01)) << "\n";

  }

  return 0;
}

//Funcion orginal.

float fun(float argx1){
  
  float ff1 = 5.0 - sqrtf(25.0 + argx1*argx1);
  return ff1;
}

//Funcion modificada con el conjugado.
float funmod(float argx2){

  float ff2 = -(argx2*argx2)/(5.0 + sqrtf(25.0 + argx2*argx2));  
  return ff2;
}



