#include "Complex.h"

int main() {
    Complex a(6, 5);
    Complex b(1, 2);
    Complex d(5);
    Complex t(8, -2);
    Complex c;
    std::cin >> c;
    std::cout << c << std::endl;
    c = a + b;
    std::cout << c << std::endl;
    c = a - b;
    std::cout << c << std::endl;
    c = a * b;
    std::cout << c << std::endl;
    c += a;
    std::cout << c << std::endl;
    c -= b;
    std::cout << c << std::endl;
    t /= b;
    std::cout << t << std::endl;
    t *= b;
    std::cout << c << std::endl;
    t %= b;
    std::cout << t << std::endl;
    std::cout << c[0] << std::endl;
    std::cout << -c << std::endl;
    std::cout << c++ << std::endl;
    std::cout << ++c << std::endl;
    std::cout << (a > b) << std::endl;
    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (a <= b) << std::endl;
    std::cout << (a == b) << std::endl;
    std::cout << (int) c << std::endl;
    std::cout << (bool) a << std::endl;
    std::cout << (b && d) << std::endl;
    std::cout << (b || d) << std::endl;
    std::cout << (b << d) << std::endl;
    Complex f(1, 2);
    Complex r(3, 4);
    r <<= f;
    std::cout << (r) << std::endl;
    r &= f;
    std::cout << (r) << std::endl;
    Complex i(9, 7);
    Complex *j = &i;
    std::cout << j << std::endl;
    std::cout << *j << std::endl;


}