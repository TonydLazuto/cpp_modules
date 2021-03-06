#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {

	std::cout << "Construct HumanA : " \
			<< this->_name \
			<< "." << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "Destruct HumanA." << std::endl;
}

void	HumanA::attack( void ) {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon.getType();
	std::cout << std::endl;
}
