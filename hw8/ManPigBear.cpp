#include "ManBearPig.h"

ManBearPig::ManBearPig(size_t id, int hp, string name)
        : Unit(id, hp),
          Man(id, hp,name),
          Bear(id, hp),
          Pig(id, hp),
          Animal("mbp", id, hp),
          mName(name) {}

string ManBearPig::name() const {
    return "Mr/Mrs " + mName;
}

vector<string> ManBearPig::listOfAbilities() {
    vector<string> result = Man::listOfAbilities();
    result.insert(result.end(), Bear::listOfAbilities().begin(), Bear::listOfAbilities().end());
    result.insert(result.end(), Pig::listOfAbilities().begin(), Pig::listOfAbilities().end());
    return result;
}
