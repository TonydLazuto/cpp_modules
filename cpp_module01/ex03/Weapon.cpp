#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	this->_type = type;
	std::cout << "Construct Weapon : " \
				<< this->_type \
				<< "." << std::endl;
}
Weapon::Weapon( void ) {
	std::cout << "Construct Weapon.";// << std::endl;
	std::cout << " -> " << this->getType() << std::endl;
}
Weapon::~Weapon( void ) {
	std::cout << "Destruct Weapon.";// << std::endl;
	std::cout << " -> " << this->getType() << std::endl;
}

std::string const&	Weapon::getType( void ) {

	return this->_type;
}

void 				Weapon::setType( std::string type ) {
	this->_type = type;
}
