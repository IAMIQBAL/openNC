#include <iostream>
#include <vector>

class Euler {
private:
    double a, b, h;
    double **t, **w;

public:
    Euler(double a, double b, double h){
        this-> a = a;
        this-> b = b;
        this-> h = h;
    }

    std::vector<std::vector<double>> approximate(){
        
    }
};