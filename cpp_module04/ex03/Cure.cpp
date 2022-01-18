#include "Cure.hpp"

Cure::Cure( void ) {
	std::cout << "Construct Cure."<< std::endl;
	this->_type = "Cure";
}
Cure::~Cure( void ) {
	std::cout << "Destruct Cure." << std::endl;
}
Cure::Cure(Cure const & src) {
	*this = src;
}
Cure& Cure::operator=(Cure const & rhs) {
	this->_type = rhs._type;
	return *this;
}

AMateria*	Cure::clone() const {
	return (new Cure);
}
