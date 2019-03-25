#include "ManBearPig.h"

Animal::Animal(string const& name, size_t id, int hp)
        : Unit(id, hp),
          mName(name) {}

string Animal::name() const {
    return mName;
}
