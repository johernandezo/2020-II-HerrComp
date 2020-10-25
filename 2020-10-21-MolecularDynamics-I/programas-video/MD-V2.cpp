#include <iostream>

/*
  Este programa simula un cuerpo que cae bajo la accion de la gravedad y
en el futuro va a rebotar contra el suelo y con otros cuerpos
*/


//Cuerpo
struct body{
  double mass;
  double r[3], v[3], f[3];

};

//Condiciones de simulacion

const int N = 1;
const double G = 9.81;

void initial_conditions(std::vector<body> & bodies);
void timestep(std::vector<body> & bodies, double dt);
void start_time_integration(std::vector<body> & bodies, double dt);
void compute_force(std::vector<body> & bodies);
void print_system(std::vector<body> & bodies, double time);


int main(void){

  body bodies;
  return 0;
}
