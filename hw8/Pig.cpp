#include <cstddef>
#include "ManBearPig.h"

Pig::Pig(size_t id, int hp)
        : Unit(id, hp),
          Animal("pig", id, hp) {}

vector<string> const& Pig::listOfAbilities() {
    return abilities;
}
