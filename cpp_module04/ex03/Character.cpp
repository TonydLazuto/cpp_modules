#include "Character.hpp"

Character::Character( void ) : _name("Character") {
	std::cout << "Construct Character " << this->_name << std::endl;
	for(int i = 0; i < 4; ++i)
		this->_inventory[i] = new None();
}
Character::Character( std::string name ) : _name(name) {
	std::cout << "Construct Character " << this->_name << std::endl;
	for(int i = 0; i < 4; ++i)
		this->_inventory[i] = new None();
}
Character::~Character( void ) {
	std::cout << "Destruct Character " << this->_name << std::endl;
	for(int i = 0; i < 4; ++i)
		delete this->_inventory[i];
}
Character::Character(Character const & src) {
	this->_name = src._name;
	for(int i = 0; i < 4; ++i)
		delete this->_inventory[i];
	for(int i = 0; i < 4; ++i)
		this->_inventory[i] = src._inventory[i]->clone();
	for(int i = 0; i < 4; ++i)
		*(this->_inventory[i]) = *(src._inventory[i]);
}
Character& Character::operator=(Character const & rhs) {
	this->_name = rhs._name;
	for(int i = 0; i < 4; ++i)
		delete this->_inventory[i];
	for(int i = 0; i < 4; ++i)
		this->_inventory[i] = rhs._inventory[i]->clone();
	for(int i = 0; i < 4; ++i)
		*(this->_inventory[i]) = *(rhs._inventory[i]);
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}
void Character::equip(AMateria* m) {
	int	i = 0;

	if (m == NULL)
		return ;
	while (i < 4 && this->_inventory[i] != NULL)
		i++;
	if (i == 4)
		return ;
	delete this->_inventory[i];
	this->_inventory[i] = m->clone();
	*(this->_inventory[i]) = *m;
}
void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return ;
	delete this->_inventory[idx];
	this->_inventory[idx] = new None();
}
void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "This equipemnt is not in the invetory list" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}
