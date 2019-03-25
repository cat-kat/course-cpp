#pragma once

#include <iostream>

class Cat {

public:
    Cat();

    Cat(int newAge, std::string newKind, bool newChildren);

    void catsStory();

    void infoCat();

    void happyBirthday();

    int howCute(int first, int second, int three, int four = 0, int five = 0);

    void realMerry(Cat &Boy, Cat &Girl);

    void falseMerry(Cat Boy, Cat Girl);


    std::string howCute(std::string first, std::string second, std::string three);

    bool mChildren;

private:
    int mAge;
    std::string mKind;


};
