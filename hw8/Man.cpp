#include "ManBearPig.h"

Man::Man(size_t id, int hp, string name)
        : Unit(id, hp),
          mName(name) {}

vector<string> const& Man::listOfAbilities() {
    return abilities;
}

string const& Man::getProfession() const {
    return profession;
}

void Man::setProfession(string const& profession) {
    this->profession = profession;
}

string Man::name() const {
    return "Mr/Mrs " + mName;
}
