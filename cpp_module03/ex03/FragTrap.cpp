#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("Frag Player", 100, 100, 30) {
	std::cout << "<" << this->_name << "> FragTrap constructor." << std::endl;
}
FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {
	std::cout << "<" << this->_name << "> FragTrap constructor." << std::endl;
}
FragTrap::~FragTrap( void ) {
	std::cout << "<" << this->_name << "> FragTrap destructor." << std::endl;
}
FragTrap::FragTrap( FragTrap const& src ) {
	*this = src;
	std::cout << "<" << this->_name << "> FragTrap copy." << std::endl;
}
FragTrap& FragTrap::operator=( FragTrap const& rhs ) {
	std::cout << "<" << rhs._name << "> FragTrap assign." << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamages = rhs._attackDamages;
	return *this;
}

void    FragTrap::highFivesGuys(void) const{
    std::cout << "<" << this->_name << "> Everybody screams f*** pandemic!" \
	<< std::endl;
}
