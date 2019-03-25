#include "Complex.h"


Complex::Complex() {};

Complex::Complex(double r) : mRe(r), mIm(0) {}

Complex::Complex(double r, double i) : mRe(r), mIm(i) {}

Complex::Complex(const Complex &c) : mRe(c.mRe), mIm(c.mIm) {}

Complex::~Complex() {}

double Complex::operator[](int n) {
    try {
        if (n < 3) {
            if (id == 0)
                return this->mRe;
            if (n == 1)
                return this->mIm;
        } else
            throw "trouble";
    }
    catch (const char *str) {
        std::cout << str << std::endl;
    }
    return NULL;
}

Complex Complex::operator()(int a) {
    return Complex(mRe + a, mIm + a);
}

Complex &Complex::operator+=(Complex &c) {
    mRe += c.mRe;
    mIm += c.mIm;
    return *this;
}

Complex &Complex::operator+=(double c) {
    mRe += c;
    mIm += c;
    return *this;
}

Complex &Complex::operator-=(Complex &c) {
    mRe -= c.mRe;
    mIm -= c.mIm;
    return *this;
}

Complex &Complex::operator-=(double c) {
    mRe -= c;
    mIm -= c;
    return *this;
}

Complex Complex::operator+(const Complex &c) {
    return Complex(mRe + c.mRe, mIm + c.mIm);
}

Complex Complex::operator+(const double &c) {
    return Complex(mRe + c, mIm);
}

Complex Complex::operator-(const Complex &c) {
    return Complex(mRe - c.mRe, mIm - c.mIm);
}

Complex Complex::operator-(const double &c) {
    return Complex(mRe - c, mIm);
}


Complex Complex::operator*(const Complex &c) {
    return Complex(mRe * c.mRe - mIm * c.mIm, mRe * c.mIm + mIm * c.mRe);
}


Complex Complex::operator/(const Complex &c) {
    Complex temp;

    double r = c.mRe * c.mRe + c.mIm * c.mIm;
    temp.mRe = (mRe * c.mRe + mIm * c.mIm) / r;
    temp.mIm = (mIm * c.mRe - mRe * c.mIm) / r;

    return temp;
}

Complex &Complex::operator*=(const Complex &c) {
    mRe = mRe * c.mRe - mIm * c.mIm;
    mIm = mRe * c.mIm + mIm * c.mRe;
    return *this;
}

Complex &Complex::operator/=(const Complex &c) {
    mRe = (mRe * c.mRe + mIm * c.mIm) / (c.mRe * c.mRe + c.mIm * c.mIm);
    mIm = (mIm * c.mRe - mRe * c.mIm) / (c.mRe * c.mRe + c.mIm * c.mIm);
    return *this;
}

Complex &Complex::operator%=(const Complex &c) {
    mRe = (int) mRe % (int) c.mRe;
    mIm = (int) mIm % (int) c.mIm;
    return *this;
}

const Complex Complex::operator+() {
    return *this;
}

const Complex Complex::operator-() {
    return Complex(-mRe, -mIm);
}

const Complex &Complex::operator++() {
    mRe++;
    mIm++;
    return *this;
}

const Complex Complex::operator++(int) {
    Complex oldValue(mRe, mIm);
    mRe++;
    mIm++;
    return oldValue;
}

const Complex &Complex::operator--() {
    mRe--;
    mIm++;
    return *this;
}

const Complex Complex::operator--(int) {
    Complex oldValue(mRe, mIm);
    mRe++;
    mIm++;
    return oldValue;
}

const bool Complex::operator!=(const Complex &c) {
    return !((c.mRe == mRe) && (c.mIm == mIm));
}


const bool Complex::operator>(const Complex &c) {
    return bool((c.mRe < mRe));
}

const bool Complex::operator<(const Complex &c) {
    return bool((c.mRe > mRe));
}

const bool Complex::operator<=(const Complex &c) {
    return bool((c.mRe >= mRe));
}

const bool Complex::operator>=(const Complex &c) {
    return bool((c.mRe <= mRe));
}

const bool Complex::operator==(const Complex &c) {
    return ((c.mRe == mRe) && (c.mIm == mIm));
}

Complex::operator int() const {
    return int(this->mRe);
}

Complex::operator bool() const {
    return *this != Complex(0, 0);
}

bool Complex::operator!() {
    return !(bool) *this;
}

bool Complex::operator&&(const Complex &c) {
    return (bool) *this && (bool) c;
}

bool Complex::operator||(const Complex &c) {
    return (bool) *this || (bool) c;
}


Complex Complex::operator~() {
    return Complex(~((int) mRe), ~((int) mIm));
}

Complex Complex::operator<<(const Complex &c) {
    return Complex((int) mRe << (int) c.mRe, (int) mIm << (int) c.mIm);
}

Complex Complex::operator>>(const Complex &c) {
    return Complex((int) mRe >> (int) c.mRe, (int) mIm >> (int) c.mIm);
}


Complex Complex::operator^(const Complex &c) {
    return Complex((int) mRe ^ (int) c.mRe, (int) mIm ^ (int) c.mIm);
}

Complex Complex::operator&(const Complex &c) {
    return Complex((int) mRe & (int) c.mRe, (int) mIm & (int) c.mIm);
}

Complex Complex::operator|(const Complex &c) {
    return Complex((int) mRe | (int) c.mRe, (int) mIm | (int) c.mIm);
}

Complex &Complex::operator&=(const Complex &c) {
    mRe = (int) mRe & (int) c.mRe;
    mIm = (int) mIm & (int) c.mIm;
    return *this;
}

Complex &Complex::operator|=(const Complex &c) {
    mRe = (int) mRe | (int) c.mRe;
    mIm = (int) mIm | (int) c.mIm;
    return *this;
}

Complex &Complex::operator^=(const Complex &c) {
    mRe = (int) mRe ^ (int) c.mRe;
    mIm = (int) mIm ^ (int) c.mIm;
    return *this;
}

Complex &Complex::operator<<=(const Complex &c) {
    mRe = (int) mRe << (int) c.mRe;
    mIm = (int) mIm << (int) c.mIm;
    return *this;
}

Complex &Complex::operator>>=(const Complex &c) {
    mRe = (int) mRe >> (int) c.mRe;
    mIm = (int) mIm >> (int) c.mIm;
    return *this;
}

Complex &Complex::operator*() {
    return *this;
}

Complex *Complex::operator&() {
    return this;
}


Complex *Complex::operator->() {
    return &Complex::operator*();
}


Complex operator+(const double &a, const Complex &c) {
    return Complex(c.mRe + a, c.mIm);
}

Complex operator-(const double &a, const Complex &c) {
    return Complex(c.mRe - a, c.mIm);
}

std::ostream &operator<<(std::ostream &out, const Complex &c) {
    if (c.mIm < 0) {
        out << "" << c.mRe << c.mIm << "*i";
    } else if (c.mIm > 0) {
        out << "" << c.mRe << "+" << c.mIm << "*i";
    } else { out << c.mRe; }
    return out;
}


std::istream &operator>>(std::istream &in, Complex &c) {
    in >> c.mRe >> c.mIm;
    return in;
}
