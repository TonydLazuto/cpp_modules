#include "None.hpp"

None::None( void ) {
	std::cout << "Construct None."<< std::endl;
	this->_type = "None";
}
None::~None( void ) {
	std::cout << "Destruct None." << std::endl;
}
None::None(None const & src) {
	*this = src;
}
None& None::operator=(None const & rhs) {
	this->_type = rhs._type;
	return *this;
}

AMateria*	AMateria::clone() const {
	return (new None);
}
