#include <iostream>
#include <math.h>

// y(0) = 0.5
// 0 <= t <= 2
// alpha = 0.5
double f0(double y, double t){
    return y - pow(t, 2) + 1;
}

// y(0) = 0, h = 0.5
// 0 <= t <= 1
double f1(double y, double t){
    return (t * exp(3 * t)) - 2 * y;
}

// y(2) = 1, h = 0.5
// 2 <= t <= 3
double f2(double y, double t){
    return 1 + (pow((t-y), 2));
}

// y(1) = 2, h = 0.25
// 1 <= t <= 2
double f3(double y, double t){
    return 1 + (y / t);
}

// y(0) = 1, h = 0.25
// 0 <= t <= 1
double f4(double y, double t){
    return cos(2 * t) + sin(3 * t);
}