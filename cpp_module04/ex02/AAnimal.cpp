#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type("Animal") {
	std::cout << "Construct Animal." << std::endl;
}
AAnimal::AAnimal( std::string type ) : _type(type) {
	std::cout << "Construct Animal : " << this->_type << std::endl;
}
AAnimal::~AAnimal( void ) {
	std::cout << "Destruct Animal." << std::endl;
}
AAnimal::AAnimal(AAnimal const & src) {
	*this = src;
}
AAnimal& AAnimal::operator=(AAnimal const & rhs) {
	this->_type = rhs._type;
	return *this;
}

std::string		AAnimal::getType(void) const {
	return this->_type;
}
