#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("Diamond Player", 100, 100, 30) {
	std::cout << "<" << this->_name << "> DiamondTrap constructor." << std::endl;
}
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {
	std::cout << "<" << this->_name << "> DiamondTrap constructor." << std::endl;
}
DiamondTrap::~DiamondTrap( void ) {
	std::cout << "<" << this->_name << "> DiamondTrap destructor." << std::endl;
}
DiamondTrap::DiamondTrap( DiamondTrap const& src ) {
	*this = src;
	std::cout << "<" << this->_name << "> DiamondTrap copy." << std::endl;
}
DiamondTrap&	DiamondTrap::operator=( DiamondTrap const& rhs ) {
	std::cout << "<" << rhs._name << "> DiamondTrap assign." << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamages = rhs._attackDamages;
	return *this;
}

void    DiamondTrap::whoAmI(void) const{
    // std::cout << "" << std::endl;
}

void	DiamondTrap::display_stats( void ) const {
	std::cout << "--> Name : " << this->_name << std::endl;
	std::cout << "--> Hitpoints : " << this->_hitPoints << std::endl;
	std::cout << "--> Energy points : " << this->_energyPoints << std::endl;
	std::cout << "--> Attack damage : " << this->_attackDamages << std::endl << std::endl;
}
