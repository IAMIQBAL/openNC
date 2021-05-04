#include <iostream>
#include "../Differential Equations/Euler.h"

int main(){

    Euler eu(0.0, 1.0, 0.25, 1.0);
    double **tw;
    tw = eu.approximate();

    int n = (1.0 - 0.0) / 0.25;

    std::cout << "i\t\t" << "t\t\t" << "w" << std::endl;

    for (int i = 1; i <= n; i++){
        // for (int j = 0; j < n; j++){
            std::cout << i << "\t\t" << tw[0][i] << "\t\t" << tw[1][i];
            std::cout << std::endl;
        // }
    }
    return 0;
}