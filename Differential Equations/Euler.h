#include <iostream>
#include <vector>
#include "../tests/Functions.h"

class Euler {
private:
    double a, b, h;
    double **tw;
    int n;

public:
    Euler(double a, double b, double h){
        this-> a = a;
        this-> b = b;
        this-> h = h;
        n = (b - a) / h;
        tw = new double*[2];
        for (int i = 0; i < 2; i++){
            tw[i] = new double[n];
        }
    }

    double **approximate(){
        tw[0][0] = a;
        tw[1][0] = h;
        f3(tw[1][0], tw[0][0]);
        for (int i = 1; i <= n; i++){
            
            //w
            tw[1][i] = tw[1][i-1] + (h * f3(tw[1][i-1], tw[0][i-1]));
            // t
            tw[0][i] = a + (i * h);
            f3(tw[1][i], tw[0][i]);
        }

        return tw;
    }
};