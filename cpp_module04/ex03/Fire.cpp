#include "Fire.hpp"

Fire::Fire( void ) {
	std::cout << "Construct Fire."<< std::endl;
	this->_type = "fire";
}
Fire::~Fire( void ) {
	std::cout << "Destruct Fire." << std::endl;
}
Fire::Fire(Fire const & src) {
	*this = src;
}
Fire& Fire::operator=(Fire const & rhs) {
	this->_type = rhs._type;
	return *this;
}

AMateria*	Fire::clone() const {
	return (new Fire);
}
