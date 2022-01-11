#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : _name("Diamond Player") {
	std::cout << "<" << this->_name << "> DiamondTrap constructor." << std::endl;
}
DiamondTrap::DiamondTrap( std::string name ) 
			: ClapTrap("Clap Player", 100, 50, 30), _name(name) {
	std::cout << "<" << this->_name << "> DiamondTrap constructor." << std::endl;
}
DiamondTrap::~DiamondTrap( void ) {
	std::cout << "<" << this->_name << "> DiamondTrap destructor." << std::endl;
}
DiamondTrap::DiamondTrap( DiamondTrap const& src ) {
	*this = src;
	std::cout << "<" << this->_name << "> DiamondTrap copy." << std::endl;
}
DiamondTrap& DiamondTrap::operator=( DiamondTrap const& rhs ) {
	std::cout << "<" << rhs._name << "> DiamondTrap assign." << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamages = rhs._attackDamages;
	return *this;
}

void    DiamondTrap::whoAmI( void ) const{
    std::cout << "--> Name : " << this->_name << std::endl;
	std::cout << "--> ClapTrap : " << ClapTrap::_name << std::endl;
}


