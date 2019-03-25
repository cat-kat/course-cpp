#include "String.h"
#include <vector>
#include <iostream>

int main() {
    String hello("Hello");
    hello = "hello";
    hello.print();
    std::cout << std::endl;
    for (int i = 0; i < 10; i++) {
        hello.append(hello);
        hello.print();
        std::cout << std::endl;
    }

    String world = "";
    hello="Hello!";/
    hello.append(world);
    std::cout<<std::endl;
    hello.print();
    world.append("");
    world.print();
    std::cout<<std::endl;
String cat(" meow");
    hello.append(cat);
    hello.print();



    return 0;

}