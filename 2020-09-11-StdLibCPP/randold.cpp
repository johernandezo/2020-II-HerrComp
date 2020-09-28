#include <cstdlib>
#include <iostream>
#include <ctime>

int main(){
  std::srand(std::time(0)); //usar tiempo actual como semilla
  int random_variable = std::rand();
  std::cout << "Random value on [0, " << RAND_MAX << "] : "
	    << random_variable << "\n";

  std::cout << "SEED = " << std::time(0) << "\n";

  return 0;
}
