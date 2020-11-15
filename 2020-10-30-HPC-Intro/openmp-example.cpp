#include <iostream>
#include <omp.h>


int main(int argc, char **argv){

    double x = 25; //global

#pragma omp parallel 
    {
        //std::cout << "Hello World! \n";
        int nth = omp_get_num_threads();
        int tid = omp_get_thread_num();
        double y = 4.7; //privada
        x = tid/4.7;
        //std::cout << "My tid: " << tid << std::endl;
        //std::cout << "&tid: " << &tid << std::endl;
        //std::cout << "num threads: " << nth << std::endl;
    }
    std::cout << "x: " << x << std::endl;
    
    return 0;
}
