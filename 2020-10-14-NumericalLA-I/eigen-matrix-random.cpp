#include <iostream>
#include <Eigen/Dense>


int main(){
    srand(2);
    Eigen::MatrixXd m = Eigen::MatrixXd::Random(3,3);
    std::cout << m << std::endl;

    Eigen::Matrix2d m2;
    m2 << 1, 2,
          3, 5;

    std::cout << m2 << std::endl;

    m2.setRandom();
    std::cout << m2 << std::endl;
    return 0;
}
