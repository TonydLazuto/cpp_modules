#include "Dog.hpp"

Dog::Dog( void ) : Animal("Doberman") {
	std::cout << "Construct Dog --> " << this->getType() << std::endl;
}
Dog::Dog( std::string type ) : Animal(type) {
	std::cout << "Construct Dog : " << this->_type << std::endl;
}
Dog::~Dog( void ) {
	std::cout << "Destruct Dog." << std::endl;
	// if (this->_brain)
	// 	delete this->_brain;
}
Dog::Dog(Dog const & src) : Animal() {
	*this = src;
}
Dog& Dog::operator=(Dog const & rhs) {
	this->_type = rhs._type;
	// this->_brain = rhs._brain;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Waaaouff!" << std::endl;
}
