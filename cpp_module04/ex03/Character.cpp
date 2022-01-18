#include "Character.hpp"

Character::Character( void ) : _name("Character") {
	std::cout << "Construct Character " << this->_name << std::endl;
	for(int i = 0; i < 4; ++i)
	{
		this->_equip[i] = NULL;
		this->_inventory[i] = NULL;
	}
}
Character::Character( std::string name ) : _name(name) {
	std::cout << "Construct Character " << this->_name << std::endl;
	for(int i = 0; i < 4; ++i)
	{
		this->_equip[i] = NULL;
		this->_inventory[i] = NULL;
	}
}
Character::~Character( void ) {
	std::cout << "Destruct Character " << this->_name << std::endl;
	for(int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		this->_equip[i] = NULL;
	}
}
Character::Character(Character const & src) {
	this->_name = src._name;
	for(int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (src._inventory[i] != NULL)
			this->_inventory[i] = src._inventory[i]->clone();
		*(this->_inventory[i]) = *(src._inventory[i]);
		if (src._equip[i] != NULL)
			this->_equip[i] = src._equip[i];
	}
}
Character& Character::operator=(Character const & rhs) {
	this->_name = rhs._name;
	for(int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
		*(this->_inventory[i]) = *(rhs._inventory[i]);
		if (rhs._equip[i] != NULL)
			this->_equip[i] = rhs._equip[i];
	}
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
	this->_inventory[i] = m->clone();
	*(this->_inventory[i]) = *m;
	this->_equip[i] = this->_inventory[i];
	delete m;
	m = NULL;
}
void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return ;
	this->_equip[idx] = NULL;
}
void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "This equipemnt is not in the invetory list" << std::endl;
		return ;
	}
	if (this->_equip[idx])
		this->_equip[idx]->use(target);
	delete this->_inventory[idx];
	this->_inventory[idx] = NULL;
}
