#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name){
	std::cout << "<" << name << "> " \
	<< "Zombie construct." << std::endl;
}
Zombie::Zombie( void ) : Zombie("Zombie") {
	std::cout << "<" << this->_name << "> " \
	<< "Zombie construct." << std::endl;
}
Zombie::~Zombie( void ) {
	std::cout << "<" << this->_name << "> " \
	<< "DyiiiinnngggG..." << std::endl;
}
void	Zombie::announce( void ) {
	std::cout << "<" << this->_name << "> " \
	<< "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName( void ) {
	return this->_name;
}
void		Zombie::setName( std::string name ) {
	this->_name = name;
}