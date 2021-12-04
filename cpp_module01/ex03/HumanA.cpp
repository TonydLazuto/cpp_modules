#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon weapon ) {
	this->_name = name;
	this->_weapon = &weapon;
	std::cout << "Construct HumanA : " \
			<< this->_name \
			<< "." << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "Destruct HumanA." << std::endl;
}

void	HumanA::attack( void ) {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon->getType();
	std::cout << std::endl;
}

void	HumanA::setWeapon( Weapon weapon ) {
	this->_weapon = &weapon;
}
