#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name){
	std::cout << "<" << name << "> " \
	<< "Zombie construct." << std::endl;
}
Zombie::Zombie( void ) {
	std::cout << "Zombie creaaateeaaddD" << std::endl;
}
Zombie::~Zombie( void ) {
	std::string name("empty");
	if (!this->_name.empty())
		name = this->_name;
	std::cout << "<" << name << "> " \
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