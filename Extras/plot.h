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