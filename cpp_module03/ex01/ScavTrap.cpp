#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("Scav Player", 100, 50, 20) {
	std::cout << "<" << this->_name << "> ScavTrap constructor." << std::endl;
}
ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {
	std::cout << "<" << this->_name << "> ScavTrap constructor." << std::endl;
}
ScavTrap::~ScavTrap( void ) {
	std::cout << "<" << this->_name << "> ScavTrap destructor." << std::endl;
}
ScavTrap::ScavTrap( ScavTrap const& src ) {
	*this = src;
	std::cout << "<" << this->_name << "> ScavTrap copy." << std::endl;
}
ScavTrap&	ScavTrap::operator=( ScavTrap const& rhs ) {
	std::cout << "<" << rhs._name << "> ScavTrap assign." << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamages = rhs._attackDamages;
	return *this;
}

void	ScavTrap::guardGate( void ) const{
	std::cout << "<" << this->_name << "> says : " \
	<< "I'm in gate keeper mode now !" << std::endl;
}

void	ScavTrap::display_stats( void ) const {
	std::cout << "--> Name : " << this->_name << std::endl;
	std::cout << "--> Hitpoints : " << this->_hitPoints << std::endl;
	std::cout << "--> Energy points : " << this->_energyPoints << std::endl;
	std::cout << "--> Attack damage : " << this->_attackDamages << std::endl << std::endl;
}
