#include "Bolt.hpp"

Bolt::Bolt( void ) {
	std::cout << "Construct Bolt."<< std::endl;
	this->_type = "bolt";
}
Bolt::~Bolt( void ) {
	std::cout << "Destruct Bolt." << std::endl;
}
Bolt::Bolt(Bolt const & src) {
	*this = src;
}
Bolt& Bolt::operator=(Bolt const & rhs) {
	this->_type = rhs._type;
	return *this;
}

AMateria*	Bolt::clone() const {
	return (new Bolt);
}
