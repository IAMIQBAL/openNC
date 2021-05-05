#include <iostream>
#include <vector>
#include "matplotlibcpp.h"
#include "../Differential Equations/Euler.h"

namespace plt = matplotlibcpp;

int main(){

    Euler eu(0.0, 2.0, 0.2, 0.5);
    double **tw;
    tw = eu.approximate();

    int n = (2.0 - 0.0) / 0.2;

    std::vector<double> t(n);
    std::vector<double> w(n);

    std::cout << "i\t\t" << "t\t\t" << "w" << std::endl;

    for (int i = 1; i <= n; i++){
        std::cout << i << "\t\t" << tw[0][i] << "\t\t" << tw[1][i];
        std::cout << std::endl;
        t[i] = tw[0][i];
        w[i] = tw[1][i];
    }

    plt::xkcd();
    plt::plot(t, w);
    plt::title("Euler`s Method");
    plt::show();
    
    return 0;
}