#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon weapon ) {
	this->_name = name;
	this->_weapon = new Weapon;
	void (Weapon::*f)( std::string );
	f = &Weapon::setType;
	(this->_weapon->*f)(weapon.getType());
	std::cout << "Construct HumanA : " \
			<< this->_name \
			<< "." << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "Destruct HumanA." << std::endl;
}

void	HumanA::attack( void ) {
	std::string const& (Weapon::*f)( void );
	f = &Weapon::getType;
	std::cout << this->_name << " attacks with his ";
	std::cout << (this->_weapon->*f)();
	std::cout << std::endl;
}

void	HumanA::setWeapon( Weapon weapon ) {
	delete this->_weapon;
	this->_weapon = new Weapon;
	void (Weapon::*f)( std::string );
	f = &Weapon::setType;
	(this->_weapon->*f)(weapon.getType());
}
