#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimalname") {
	std::cout << "Construct WrongAnimal." << std::endl;
}
WrongAnimal::WrongAnimal( std::string type ) : _type(type) {
	std::cout << "Construct WrongAnimal : " << this->_type << std::endl;
}
WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Destruct WrongAnimal." << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	*this = src;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const & rhs) {
	this->_type = rhs._type;
	return *this;
}

std::string		WrongAnimal::getType(void) const {
	return this->_type;
}

void			WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal sound!" << std::endl;
}
