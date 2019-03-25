#pragma once

#include <iostream>

struct Complex {
    Complex();

    Complex(double r);

    Complex(double r, double i);

    Complex(const Complex &c);

    ~Complex();

    double operator[](int n);

    Complex operator()(int a);

    Complex &operator+=(Complex &c);

    Complex &operator+=(double c);

    Complex &operator-=(Complex &c);

    Complex &operator-=(double c);

    Complex operator+(const Complex &c);

    Complex operator+(const double &c);

    Complex operator-(const Complex &c);

    Complex operator-(const double &c);


    Complex operator*(const Complex &c);


    Complex operator/(const Complex &c);

    Complex &operator*=(const Complex &c);

    Complex &operator/=(const Complex &c);

    Complex &operator%=(const Complex &c);

    const Complex operator+();

    const Complex operator-();

    const Complex &operator++();

    const Complex operator++(int);

    const Complex &operator--();


    const Complex operator--(int);

    const bool operator!=(const Complex &c);


    const bool operator>(const Complex &c);

    const bool operator<(const Complex &c);

    const bool operator<=(const Complex &c);

    const bool operator>=(const Complex &c);

    const bool operator==(const Complex &c);

    operator int() const;

    operator bool() const;

    bool operator!();

    bool operator&&(const Complex &c);

    bool operator||(const Complex &c);


    Complex operator~();

    Complex operator<<(const Complex &c);

    Complex operator>>(const Complex &c);


    Complex operator^(const Complex &c);

    Complex operator&(const Complex &c);

    Complex operator|(const Complex &c);

    Complex &operator&=(const Complex &c);

    Complex &operator|=(const Complex &c);

    Complex &operator^=(const Complex &c);

    Complex &operator<<=(const Complex &c);

    Complex &operator>>=(const Complex &c);

    Complex &operator*();

    Complex *operator&();

    friend std::ostream &operator<<(std::ostream &, const Complex &);

    friend std::istream &operator>>(std::istream &, Complex &);

    friend Complex operator+(const double &a, const Complex &c);

    friend Complex operator-(const double &a, const Complex &c);

private:
    Complex *operator->();

    double mRe, mIm;

};


Complex operator-(const double &a, const Complex &c);


std::ostream &operator<<(std::ostream &out, const Complex &c);

std::istream &operator>>(std::istream &in, Complex &c);
