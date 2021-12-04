#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name, Weapon *weapon ) : _name(name), _weapon(weapon) {
	std::cout << "Construct HumanB : " \
				<< this->_name \
				<< "." << std::endl;
}

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) {
	std::cout << "Construct HumanB : " \
				<< this->_name \
				<< "." << std::endl;
}

HumanB::~HumanB( void ) {
	std::cout << "Destruct HumanB." << std::endl;
}

void	HumanB::attack( void ) {
	if (this->_weapon != NULL)
	{
		std::cout << this->_name << " attacks with his ";
		std::cout << this->_weapon->getType();
		std::cout << std::endl;
	}
	else
	{
		std::cout << this->_name << " attacks without weapon.";
		std::cout << std::endl;
	}
}
void	HumanB::setWeapon( Weapon weapon ) {
	this->_tmp = weapon;
	this->_weapon = &this->_tmp;
}
