#ifndef HW7_ARRAY_H
#define HW7_ARRAY_H


#include <cstdio>

template<class Type>
class Array {

public:

    Array();

    explicit Array(size_t size, const Type &value = Type());

    ~Array();

    Array &operator=(const Array &array);

    Array(const Array<Type> &array);

    size_t size() const { return mSize; }

    Type& operator[](size_t i);

    const Type &operator[](size_t i) const;

private :
    unsigned char* mData;
    size_t mSize{};
    void swap(Array& other);
};




#endif
