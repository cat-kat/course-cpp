#include <iostream>
#include "Array.hpp"
#include "Functions.hpp"

int main() {
    Array<int> ints(3);
    ints[0] = 10;
    ints[1] = 2;
    ints[2] = 15;
    int min = minimum(ints, less<int>);
    int max = minimum(ints, Greater());
    std::cout << min << " " << max << "\n";

    Array<int> ints1(2, 0);
    ints1[0] = 10;
    ints1[1] = 20;
    flatten(ints1, std::cout);
    Array<Array<int>> array_of_ints(2, ints1);
    std::cout << "\n";
    flatten(array_of_ints, std::cout);
    std::cout << "\n";
    Array<double> doubles(10, 0.0);
    doubles[0] = 9.23;
    doubles[4] = 1;
    flatten(doubles, std::cout);
    return 0;
}