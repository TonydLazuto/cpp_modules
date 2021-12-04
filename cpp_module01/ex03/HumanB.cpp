#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) {
	this->_name = name;
	std::cout << "Construct HumanB : " \
				<< this->_name \
				<< "." << std::endl;
}

HumanB::~HumanB( void ) {
	std::cout << "Destruct HumanB." << std::endl;
}

void	HumanB::attack( void ) {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon.getType();
	std::cout << std::endl;
}
void	HumanB::setWeapon( Weapon weapon ) {
	this->_weapon = weapon;
}
