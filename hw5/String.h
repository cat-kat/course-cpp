#pragma once

#include <cstddef>

struct String {

public:
    String();

    String(const char *temp = "");

    String(size_t n, char c);

    String(const String &other);

    ~String();


    String &operator=(const String &other);

    void append(const String &other);

    void print() const;

private:
    size_t mSize;
    char *mLetters;

    void swap(String &other);
};
