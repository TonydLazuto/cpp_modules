#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Clap Player"), _hitPoints(10)
					, _energyPoints(10), _attackDamages(0) {
	std::cout << "<" << this->_name << "> ClapTrap constructor." << std::endl;
}
ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10)
					, _energyPoints(10), _attackDamages(0) {
	std::cout << "<" << this->_name << "> ClapTrap constructor." << std::endl;
}
ClapTrap::ClapTrap( std::string name , unsigned int hitPoints,
			unsigned int energyPoints, unsigned int attackDamages)
			: _name(name), _hitPoints(hitPoints)
			, _energyPoints(energyPoints), _attackDamages(attackDamages) {
				std::cout << "<" << this->_name << "> ClapTrap constructor." << std::endl;
}
ClapTrap::~ClapTrap( void ) {
	std::cout << "<" << this->_name << "> ClapTrap destructor." << std::endl;
}
ClapTrap::ClapTrap( ClapTrap const& src ) {
	*this = src;
	std::cout << "<" << this->_name << "> ClapTrap copy." << std::endl;
}
ClapTrap& ClapTrap::operator=( ClapTrap const& rhs ) {
	std::cout << "<" << rhs._name << "> ClapTrap assign." << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamages = rhs._attackDamages;
	return *this;
}
std::ostream& operator<<( std::ostream& o, ClapTrap const& rhs) {
	o << rhs.getName();
	return o;
}

std::string	ClapTrap::getName( void ) const {
	return this->_name;
}
int			ClapTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}
int			ClapTrap::getLifepoints( void ) const {
	return this->_energyPoints;
}
int			ClapTrap::getAttackDamage( void ) const {
	return this->_attackDamages;
}

void		ClapTrap::attack( std::string const& target ) {
	if (this->_hitPoints <= 0)
	{
		std::cout << "<" << this->_name
		<< "> has no more hit points." << std::endl;
		return ;
	}
	std::cout << "<" << this->_name << "> attack " \
		<< target << ", causing " << this->_attackDamages \
		<< " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints == 0)
	{
		std::cout << "<" << this->_name << "> already dead." << std::endl;
		return ;
	}
	if (amount > this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "Critical attack!" << std::endl;
	}
	else
		this->_hitPoints -= amount;
	std::cout << "<" << this->_name << "> take " << amount \
	<< " damage. Hitpoints = " << this->_hitPoints << "." << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount ) {

	this->_hitPoints += amount;
	std::cout << "<" << this->_name << "> repare with " << amount \
	<< " energy... Hitpoints = " << this->_hitPoints << "." << std::endl;
}

void		ClapTrap::display_stats( void ) const {
	std::cout << "--> Name : " << this->_name << std::endl;
	std::cout << "--> Hitpoints : " << this->_hitPoints << std::endl;
	std::cout << "--> Energy points : " << this->_energyPoints << std::endl;
	std::cout << "--> Attack damage : " << this->_attackDamages << std::endl << std::endl;
}
