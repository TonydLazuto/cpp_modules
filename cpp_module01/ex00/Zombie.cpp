#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Zombie creaaateeaaddD" << std::endl;
}
Zombie::~Zombie( void ) {
	std::cout << "I'm dyiiiinnngggG... My name was : ";
	if (this->_name.empty())
		std::cout << "doesn't even have one :'(" << std::endl;
	else
		std::cout << this->_name << std::endl;
}
void	Zombie::announce( void ) {
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName( void ) {
	return this->_name;
}
void		Zombie::setName( std::string name ) {
	this->_name = name;
}