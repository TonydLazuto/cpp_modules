#include "AMateria.hpp"

AMateria::AMateria(void) {
	std::cout << "Construct Amateria." << std::endl;
}
AMateria::~AMateria(void) {
	std::cout << "Destruct Amateria." << std::endl;
}
AMateria::AMateria(AMateria const & src) {
	*this = src;
}
AMateria& AMateria::operator=(AMateria const & rhs) {
	this->_type = rhs._type;
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}
void 		AMateria::use(ICharacter const& target) {
	if (this->_type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
	else if (this->_type.compare("cure") == 0)
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	else if (this->_type.compare("fire") == 0)
		std::cout << "* spit fire on " << target.getName() << "*" << std::endl;
	else if (this->_type.compare("bolt") == 0)
		std::cout << "* send a static shock to " << target.getName() << "*" << std::endl;
	else
		std::cout << "* NONE *" << std::endl;
}
