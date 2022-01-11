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
ScavTrap& ScavTrap::operator=( ScavTrap const& rhs ) {
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

void	ScavTrap::attack( std::string const& target ) {
	if (this->_hitPoints <= 0)
	{
		std::cout << "<" << this->_name
		<< "> has no more hit points." << std::endl;
		return ;
	}
	std::cout << "<" << this->_name << "> attack like a ScavTrap " \
		<< target << ", causing " << this->_attackDamages \
		<< " points of damage!" << std::endl;
}