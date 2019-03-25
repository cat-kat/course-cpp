#ifndef HW7_FUNCTIONS_H
#define HW7_FUNCTIONS_H

#include "Array.h"
#include "ostream"

template<class Num>
bool less(Num a, Num b);

class Greater {
public:
    template<class Num>
    bool operator()(Num a, Num b) const;
};


template<class Num, class Comparator>
Num minimum(const Array<Num> &array, Comparator comp);

template<class Num>
void flatten(const Num &element, std::ostream &out);


template<class Num>
void flatten(const Array<Num> &array, std::ostream &out);

#endif
