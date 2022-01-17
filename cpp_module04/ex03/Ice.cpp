#include "Ice.hpp"

Ice::Ice( void ) {
	std::cout << "Construct Ice."<< std::endl;
	this->_type = "ice";
}
Ice::~Ice( void ) {
	std::cout << "Destruct Ice." << std::endl;
}
Ice::Ice(Ice const & src) {
	*this = src;
}
Ice& Ice::operator=(Ice const & rhs) {
	this->_type = rhs._type;
	return *this;
}

AMateria*	AMateria::clone() const {
	return (new Ice);
}
