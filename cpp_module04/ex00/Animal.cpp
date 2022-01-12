#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal") {
	std::cout << "Construct Animal." << std::endl;
}
Animal::Animal( std::string type ) : _type(type) {
	std::cout << "Construct Animal : " << this->_type << std::endl;
}
Animal::~Animal( void ) {
	std::cout << "Destruct Animal." << std::endl;
}
Animal::Animal(Animal const & src) {
	*this = src;
}
Animal& Animal::operator=(Animal const & rhs) {
	this->_type = rhs._type;
	return *this;
}

std::string		Animal::getType(void) const {
	return this->_type;
}

void			Animal::makeSound(void) const {
	std::cout << "Animal sound!" << std::endl;
}