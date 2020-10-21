#include "factorial.h" 
//Definicion de funcion

long factorial(long n){

  if(n < 0){

    std::cerr << "Cannot compute factorial for negative numbers. Received n= "
              << n << "\n";
    return 0;
    
  } else{
  
  return n <= 1 ? 1 : n*factorial(n-1); 
  }
}
