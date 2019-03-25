#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;


struct Unit {
    explicit Unit(size_t id, int hp = 100);
    size_t getId() const;
    int getHp() const;
    virtual string name() const = 0;
private:
    size_t id;
    int hp;
};

struct Animal : virtual Unit {
    Animal(string const& name, size_t id, int hp);
    string name() const;
private:
    string mName = "animal";
};

struct Man : virtual Unit {
    explicit Man(size_t id, int hp = 150, string name = "man");
    vector<string> const& listOfAbilities();
    string const& getProfession() const;
    void setProfession(string const& profession);
    string name() const;
private:
    vector<string> abilities = {"hello"};
    string profession = "unemployed";
    string mName = "man";
};

struct Bear : virtual Animal {
    explicit Bear(size_t id, int hp = 200);
    vector<string> const& listOfAbilities();
private:
    vector<string> abilities = {"arr"};
};

struct Pig : virtual Animal {
    explicit Pig(size_t id, int hp = 50);
    vector<string> const& listOfAbilities();
private:
    vector<string> abilities = {"hru"};
};

struct ManBearPig : Man, Bear, Pig {
    ManBearPig(size_t id, int hp,  string name = "manPigBear");
    string name() const;
    vector<string> listOfAbilities();
private:
    string mName = "MBP";
};
