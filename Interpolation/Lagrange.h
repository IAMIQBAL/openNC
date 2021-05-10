#include <iostream>

class Lagrange {
private:
    int n;
    double X, *x, *y, *l, ln, ld, Pn;

public:
    Lagrange(int n, double X){
        this->n = n;
        this->X = X;
        x = new double[n];
        y = new double[n];
        l = new double[n];
    }

    void setX(){
        for (int i = 0; i <= n; i++){
            std::cin >> x[i];
        }
    }

    void setY(){
        for (int i = 0; i <= n; i++){
            std::cin >> y[i];
        }
    }

    double* getX(){
        return x;
    }

    double* getY(){
        return y;
    }

    double approximate(){
        for (int i = 0; i <= n; i++){
            ln = 1;
            ld = 1;
            for (int j = 0; j <= n; j++){
                if (j != i){
                    ln *= (X - x[j]);
                    ld *= (x[i] - x[j]);
                }
            }
            l[i] = ln / ld;
        }

        for (int i = 0; i <= n; i++){
            Pn += (l[i] * y[i]);
        }

        return Pn;
    }
};