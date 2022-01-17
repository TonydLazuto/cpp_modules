#include "AMateria.hpp"
#include "Character.hpp"


Character::Character( void ) : _name("Character") {
	std::cout << "Construct Character " << this->_name << std::endl;
	for(int i = 0; i < 3; ++i)
		this->_inventory[i] = NULL;
}
Character::Character( std::string name ) : _name(name) {
	std::cout << "Construct Character " << this->_name << std::endl;
	for(int i = 0; i < 3; ++i)
		this->_inventory[i] = NULL;
}
Character::~Character( void ) {
	std::cout << "Destruct Character " << this->_name << std::endl;
}
Character::Character(Character const & src) {
	this->_name = src._name;
	for(int i = 0; i < 3; ++i)
	{
		if (!this->_inventory[i]->getType().empty())
		{
			std::string	materiaName(this->_inventory[i]->getType());
		}
	}
	*(this->_inventory) = *(src._inventory);
}
Character& Character::operator=(Character const & rhs) {
	this->_name = rhs._name;
	// this->_inventory = new AMateria[4];
	*(this->_inventory) = *(rhs._inventory);
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}
void Character::equip(AMateria* m) {
	if (m == NULL)
		return ;
	int	i = 0;
	while (i < 4 && this->_inventory[i] != NULL)
		i++;
	if (i == 4)
		return ;
	this->_inventory[i] = m;
}
void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return ;
	this->_inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
	{
		std::cout << "This equipemnt is not in the invetory list" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}
