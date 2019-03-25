#include <cstddef>
#include "ManBearPig.h"

Bear::Bear(size_t id, int hp)
        : Unit(id, hp),
          Animal("bear", id, hp) {}

vector<string> const& Bear::listOfAbilities() {
    return abilities;
}
