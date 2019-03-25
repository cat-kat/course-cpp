#include <cstddef>
#include "ManBearPig.h"

Unit::Unit(size_t id, int hp) : id(id), hp(hp) {}

size_t Unit::getId() const { return id; }

int Unit::getHp() const { return hp; }
