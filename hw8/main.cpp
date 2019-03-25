#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "ManBearPig.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;


typedef int* (* f1)(char const*);
typedef int (* f2)(double);
typedef f1 (* ComplexFunction)(int, f2); //typedef int* (* (*ComplexFunction)(int, int (*)(double)) )(char const*);


template<typename T, typename R>
bool compare(const T& a, const T& b, R (T::*func)() const) {
    return ((a.*func)() < (b.*func)());
}


template<class T>
bool isSameObject(T const* p, T const* q) {
    return (dynamic_cast<const void*>(p)) == (dynamic_cast<const void*>(q));
}

int main() {
    std::string s1("Elf");
    std::string s2("Archer");

    bool r1 = compare(s1, s2, &std::string::size); // true
    bool r2 = compare(s1, s1, &std::string::size); // false

    cout << "1: " << r1 << " " << r2 << endl;

    Unit* u1 = new ManBearPig(1, 1);
    Unit* u2 = new ManBearPig(2, 1);
    Unit* u3 = u1;

    cout << "2: ";
    cout << isSameObject(u1, u2) << " ";
    cout << isSameObject(u1, u3);
    cout << endl;

    ManBearPig mbp1(1, 2, "Jones");
    mbp1.setProfession("student");

    cout << "3: " << endl;
    cout << "ID: " << mbp1.getId() << endl
         << "HP: " << mbp1.getHp() << endl
         << "Name: " << mbp1.name() << endl
         << "Profession: " << mbp1.getProfession() << endl;

    cout << "Abilities: ";
    for (auto curr : mbp1.listOfAbilities()) {
        cout << curr << " ";
    }
    cout << endl << endl;

    cout << "4: " << endl;
    Pig man = mbp1;

    cout << "ID: " << man.getId() << endl
         << "HP: " << man.getHp() << endl
         << "Name: " << man.name() << endl;

    cout << "Abilities: ";
    for (auto curr : man.listOfAbilities()) {
        cout << curr << " ";
    }

    return 0;
}
