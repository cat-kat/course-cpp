#include "String.h"

#include <cstring>
#include <algorithm>
#include <iostream>


String::String() {
    mSize = 0;
    mLetters = new char[1];
    mLetters[0] = '\0';
}

String::String(const char *temp) {
    mSize = strlen(temp);
    mLetters = new char[mSize + 1];
    strcpy(mLetters, temp);
}

String::String(const String &other) {
    mSize = other.mSize;
    mLetters = new char[mSize + 1];
    strcpy(mLetters, other.mLetters);
}

String::String(size_t n, char c) : mSize(n) {
    mLetters = new char[mSize + 1];
    std::fill(mLetters, mLetters + n, c);
    mLetters[n] = '\0';
}

String::~String() {
    delete[] mLetters;
}

String &String::operator=(const String &other) {
    return *this;
}

void String::append(const String &other) {
    mSize += other.mSize;
    char *temp = new char[mSize + 1];
    strcpy(temp, mLetters);
    strcat(temp, other.mLetters);
    delete[] mLetters;
    mLetters = temp;
}

void String::print() const {
    std::cout << mLetters;
}

void String::swap(String &other) {
    std::swap(mSize, other.mSize);
    std::swap(mLetters, other.mLetters);
}
