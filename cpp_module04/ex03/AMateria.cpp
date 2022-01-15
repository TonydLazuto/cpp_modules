#include "IAmateria.hpp"

AMateria::Amateria(void) {
	
}
AMateria::AMateria(std::string const & type) : _type(type) {

}
AMateria::~Amateria(void) {
	
}
AMateria::Amateria(AMateria const & src) {
	*this = src;
}
AMateria& AMateria::operator=(AMateria const & rhs) {
	// this->type = rhs.type;
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}
virtual void 		AMateria::use(ICharacter const& target) {
	if (this->_type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << this->_type << "*" << std::endl;
	if (this->_type.compare("ice") == 0)
		std::cout << "* heals " << this->_type << "’s wounds *" << std::endl;
}