#include "Ice.hpp"

Ice::Ice( void ) : _type("ice") {
	std::cout << "Construct Ice." << std::endl;
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

virtual AMateria* 	clone() const override {
	return (new Amateria(this->_type));
}
