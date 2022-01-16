#include "AMateria.hpp"
#include "IAmateria.hpp"
#include "Character.hpp"


Character::Character( void ) : _name("Character"), _inventory(new AMateria[4]) {
	std::cout << "Construct Character " << this->_name << std::endl;
}
Character::Character( std::string name ) : _name(name), _inventory(new AMateria[4]) {
	std::cout << "Construct Character " << this->_name << std::endl;
}
Character::~Character( void ) {
	std::cout << "Destruct Character " << this->_name << std::endl;
	delete [] this->_inventory;
}
Character::Character(Character const & src) {
	this->_name = src._name;
	this->_inventory = new AMateria[4];
	*(this->_inventory) = *(src._inventory);
}
Character& Character::operator=(Character const & rhs) {
	this->_name = src._name;
	this->_inventory = new AMateria[4];
	*(this->_inventory) = *(src._inventory);
	return *this;
}

virtual std::string const & Character::getName() const override {
	return this->_name;
}
virtual void Character::equip(AMateria* m) override {
	
}
virtual void Character::unequip(int idx) override {
	
}
virtual void Character::use(int idx, ICharacter& target) override {
	if (idx < 0 || idx > 3)
	{
		std::cout << "This equipemnt is not in the invetory list" << std::endl;
		return ;
	}
	this->_inventory[idx].use(target);
}
