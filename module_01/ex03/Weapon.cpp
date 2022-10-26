#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon() {}

// Getters
const std::string &Weapon::getType() const {
	return this->type;
}

// Setters
void Weapon::setType(std::string new_type) {
	this->type = new_type;
}
