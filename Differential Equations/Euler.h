#include <iostream>
#include <vector>
#include "../tests/Functions.h"

class Euler {
private:
    double a, b, h, alpha;
    double **tw;
    int n;

public:
    Euler(double a, double b, double h, double alpha){
        this-> a = a;
        this-> b = b;
        this-> h = h;
        this->alpha = alpha;
        n = (b - a) / h;
        tw = new double*[2];
        for (int i = 0; i < 2; i++){
            tw[i] = new double[n];
        }
    }

    double **approximate(){
        tw[0][0] = a;
        tw[1][0] = alpha;
        f4(tw[1][0], tw[0][0]);
        for (int i = 1; i <= n; i++){
            
            //w
            tw[1][i] = tw[1][i-1] + (h * f4(tw[1][i-1], tw[0][i-1]));
            // t
            tw[0][i] = a + (i * h);
            f4(tw[1][i], tw[0][i]);
        }

        return tw;
    }
};