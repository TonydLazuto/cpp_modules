#include "Spell.hpp"

Spell::Spell( void ) {
	std::cout << "Construct Spell."<< std::endl;
	this->_type = "spell";
}
Spell::~Spell( void ) {
	std::cout << "Destruct Spell." << std::endl;
}
Spell::Spell(Spell const & src) {
	*this = src;
}
Spell& Spell::operator=(Spell const & rhs) {
	this->_type = rhs._type;
	return *this;
}

AMateria*	Spell::clone() const {
	return (new Spell);
}
