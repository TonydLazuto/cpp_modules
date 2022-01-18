#include "Dog.hpp"

Dog::Dog( void ) : AAnimal("Doberman"), _brain(new Brain) {
	std::cout << "Construct Dog --> " << this->getType() << std::endl;
}
Dog::Dog( std::string type ) : AAnimal(type), _brain(new Brain) {
	std::cout << "Construct Dog : " << this->_type << std::endl;
}
Dog::~Dog( void ) {
	std::cout << "Destruct Dog." << std::endl;
	delete this->_brain;
}
Dog::Dog(Dog const & src) : AAnimal() {
	this->_brain = new Brain;
	*(this->_brain) = *(src._brain);
}
Dog& Dog::operator=(Dog const & rhs) {
	this->_type = rhs._type;
	this->_brain = new Brain;
	*(this->_brain) = *(rhs._brain);
	return *this;
}

void		Dog::makeSound(void) const {
	std::cout << "Waaaouff!" << std::endl;
}

std::string	Dog::getBrainIdea(int num) const {
	return this->_brain->getIdeas(num);
}

void		Dog::setBrainIdea(std::string idea, int num) {
	this->_brain->setIdeas(idea, num);
}

Brain*		Dog::getBrain(void) const {
	return this->_brain;
}
