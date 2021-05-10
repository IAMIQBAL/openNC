#include <iostream>
#include <vector>
#include "matplotlibcpp.h"
#include "../Differential Equations/Euler.h"
#include "../Interpolation/Lagrange.h"

namespace plt = matplotlibcpp;

int main(){

    std::cout << "----- Euler D.E Test -----" << std::endl;
    Euler eu(0.0, 2.0, 0.1, 0.5);
    double **tw;
    tw = eu.approximate();

    int n = (2.0 - 0.0) / 0.1;

    std::vector<double> t(n+1);
    std::vector<double> w(n+1);

    std::cout << "i\t\t" << "t\t\t" << "w" << std::endl;

    for (int i = 0; i <= n; ++i){
        std::cout << i << "\t\t" << tw[0][i] << "\t\t" << tw[1][i];
        std::cout << std::endl;
        t[i] = tw[0][i];
        w[i] = tw[1][i];
    }

    // plt::plot(t, w, "r-o");
    // plt::title("Euler`s Method");
    // plt::xlabel("t");
    // plt::ylabel("w");
    // plt::grid(1);
    // plt::show();

    std::cout << "----- Lagrange Interpolation Test -----" << std::endl;
    
    Lagrange lgrn(10, 3.2);
    
    std::cout << "Enter x values: ";
    lgrn.setX();
    std::cout << "Enter y values: ";
    lgrn.setY();
    double result = lgrn.approximate();
    std::cout << "Pn: " << result << std::endl;

    return 0;
}