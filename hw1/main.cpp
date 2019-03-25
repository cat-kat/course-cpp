#include <iostream>
#include "Cat.h"


int i;

int& ref() {
    return i;
}

int main() {
    Cat Murka, Tima, Snezhka;
    Cat Vasya(5, "british", false);
    Tima.catsStory();
    Vasya.infoCat();
    Vasya.falseMerry(Murka, Vasya);
    std::cout << "Does Vasya have mChildren? " << Vasya.mChildren << std::endl;
    Vasya.realMerry(Murka, Vasya);
    std::cout << "Does Murka have mChildren? " << Murka.mChildren << std::endl;
    std::cout << "Murka's raiting = " << Murka.howCute(1000, 20, 300, 40) << std::endl;
    std::cout << "Tima's raiting = " << Tima.howCute("Woow", "meow", "amaazing") << std::endl;
    std::cout<<std::endl;
    Vasya.happyBirthday();
    ref() = 5;
    std::cout << i;

}