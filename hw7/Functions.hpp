#ifndef HW7_FUNCTIONS_HPP
#define HW7_FUNCTIONS_HPP

#include "Functions.h"

template<class Num>
bool less(Num a, Num b) {
    return a < b;
}

template<class Num, class Comparator>
Num minimum(const Array<Num> &array, Comparator comp) {
    Num minimum = array[0];
    for (int i = 0; i < array.size(); ++i) {
        if (comp(array[i], minimum)) minimum = array[i];
    }
    return minimum;
}

template<class Num>
void flatten(const Num &element, std::ostream &out) {
    out << element << " ";
}

template<class Num>
void flatten(const Array<Num> &array, std::ostream &out) {
    for (int i = 0; i < array.size(); ++i) {
        flatten(array[i], out);
    }
}

template<class Num>
bool Greater::operator()(Num a, Num b) const {
    return a < b;
}

#endif
