#include <iostream>
#include <Eigen/Dense>
#include <cstdlib>
#include <chrono>

double geteigen(int n);

int main(int argc, char **argv)
{
    //Se obtiene tamaño de la matriz y numero de repeticiones desde la consola
    int N = std::atoi(argv[1]);
    int REPS = std::atoi(argv[2]);

    //Se calcula el promedio del tiempo en efectuar la operacion repetidas veces
    double t = 0.0;
    for(int ii = 0; ii < REPS; ii++){
       t += geteigen(N);
           }

    //Se imprime el promedio del tiempo
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    std::cout << t/REPS << std::endl;

    return 0;

}

double geteigen(int n){

    //Se genera una matriz aleatoria nxn
    Eigen::MatrixXd A(n,n);
    A = Eigen::MatrixXd::Random(n,n);

    //Se mide el tiempo en calcular autovectores y autovalores usando EigenSolver
    auto start = std::chrono::steady_clock::now();
    Eigen::EigenSolver<Eigen::MatrixXd> eigensolver(A);
    if (eigensolver.info() != Eigen::Success) abort();
    auto end = std::chrono::steady_clock::now();

    //Se registra el tiempo en segundos y se entrega
    double time = std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count()*1.0e-9;
    return time;
}


