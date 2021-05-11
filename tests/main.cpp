#include <iostream>
#include <vector>
#include "../Differential Equations/Euler.h"
#include "../Interpolation/Lagrange.h"
#include "../Extras/plot.h"

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

    draw(t, w, "Euler's Method", "t", "w");

    std::cout << "----- Lagrange Interpolation Test -----" << std::endl;
    
    int size = 4;

    std::vector<double> x(size);
    std::vector<double> y(size);
    std::vector<double> xT(size);
    std::vector<double> yPn(size);
    double *xTest = new double[size];

    for (int i = 0; i < size; i++){
        xTest[i] = i+1;
    }

    Lagrange lgrn(size);
    
    std::cout << "Enter x values: ";
    lgrn.setX();
    std::cout << "Enter y values: ";
    lgrn.setY();
    double* result = lgrn.approximate(xTest);
    // std::cout << "Pn: " << result << std::endl;

    std::cout << "Result: ";
    for (int i = 0; i < size; ++i){
        x[i] = lgrn.getX()[i];
        y[i] = lgrn.getY()[i];
        xT[i] = xTest[i];
        yPn[i] = result[i];

        std::cout << result[i] << ", ";
    }
    std::cout << std::endl;

    drawDouble(x, y, xT, yPn, "Lagrange Method", "X", "Y");

    return 0;
}