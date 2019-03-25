#include "Cat.h"

Cat::Cat() {
    mAge = 0;
    mKind = "underbred";
    mChildren = false;
}

Cat::Cat(int newAge, std::string newKind, bool newChildren) {
    mAge = newAge;
    mKind = newKind;
    mChildren = newChildren;
}

void Cat::catsStory() {
    std::cout << "mKind of cat: ";
    std::cin >> mKind;
    std::cout << std::endl << "mAge: ";
    std::cin >> mAge;
    std::cout << std::endl << "What about mChildren? ";
    std::cin >> mChildren;
    std::cout << std::endl;
}

void Cat::infoCat() {
    std::cout << "mKind of cat: " << mKind;
    std::cout << std::endl << "mAge: " << mAge;
    std::cout << std::endl << "What about mChildren? " << mChildren << std::endl;
}

void Cat::happyBirthday() {
    mAge++;
    std::cout << "Happy Birthday! How i am " << mAge << " years old cat c:" << std::endl;
}

int Cat::howCute(int first, int second, int three, int four, int five) {
    return (first + second + three + four + five);
}


std::string Cat::howCute(std::string first, std::string second, std::string three) {
    return "MEOOOW";
}

void Cat::realMerry(Cat &Boy, Cat &Girl) {
    Boy.mChildren = true;
    Girl.mChildren = true;
}


void Cat::falseMerry(Cat Boy, Cat Girl) {
    std::cout << "Happy wedding day!" << std::endl;
    Boy.mChildren = true; // it is false, barren cats
    Girl.mChildren = true;
}


