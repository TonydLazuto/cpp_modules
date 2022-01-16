#include "AMateria.hpp"

AMateria::Amateria(void) {
	std::cout << "Construct Amateria." << std::endl;
}
AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "Construct Amateria " << this->_type << std::endl;
}
AMateria::~Amateria(void) {
	if (this->_type)
		std::cout << "Destruct Amateria " << this->_type << std::endl;
	else
		std::cout << "Destruct Amateria." << std::endl;
}
AMateria::Amateria(AMateria const & src) {
	*this = src;
}
AMateria& AMateria::operator=(AMateria const & rhs) {
	this->type = rhs.type;
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}
virtual void 		AMateria::use(ICharacter const& target) override {
	if (this->_type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
	else if (this->_type.compare("cure") == 0)
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	else if (this->_type.compare("fire") == 0)
		std::cout << "* spit fire on " << target.getName() << "*" << std::endl;
	else if (this->_type.compare("bolt") == 0)
		std::cout << "* send a static shock to " << target.getName() << "*" << std::endl;
	else
		std::cout << "* NONE on " << target.getName() << "*" << std::endl;
}
