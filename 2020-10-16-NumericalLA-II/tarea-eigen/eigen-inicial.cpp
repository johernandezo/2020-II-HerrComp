#include <iostream>
#include <Eigen/Dense>
 
int main()
{
  //Se declara e inicializa la matriz
  Eigen::Matrix2d A;
  A << 3, -2,
       4, -1;

  //Se imprime la matriz
  std::cout << "Here is the matrix A:\n" << A << std::endl << std::endl;


  //Se calcula los autovalores y autovectores de la matriz con Eigen solver
  Eigen::EigenSolver<Eigen::Matrix2d> eigensolver(A);
  if (eigensolver.info() != Eigen::Success) abort();

  
  //Se imprimen loss autovalores y autovectores de la matriz
  std::cout << "The eigenvalues of A are:\n" << eigensolver.eigenvalues() << std::endl << std::endl;
  std::cout << "Here's a matrix whose columns are eigenvectors of A \n"
            << "corresponding to these eigenvalues:\n"
            << eigensolver.eigenvectors() << std::endl;
}
