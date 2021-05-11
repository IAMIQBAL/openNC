#include <iostream>
#include <vector>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

template <typename T>
void draw(std::vector<T> x, std::vector<T> y, std::string plotTitle, std::string xLabel, std::string yLabel){
    plt::plot(x, y, "r-o");
    plt::title(plotTitle);
    plt::xlabel(xLabel);
    plt::ylabel(yLabel);
    plt::grid(1);
    plt::show();
}

template <typename T>
void drawDouble(std::vector<T> x, std::vector<T> y, std::vector<T> xT, std::vector<T> yT, std::string plotTitle, std::string xLabel, std::string yLabel){
    plt::plot(x, y, "r-o");
    plt::plot(xT, yT, "g-o");
    plt::title(plotTitle);
    plt::xlabel(xLabel);
    plt::ylabel(yLabel);
    plt::grid(1);
    plt::show();
}