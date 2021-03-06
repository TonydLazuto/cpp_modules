#include "Cat.hpp"

Cat::Cat( void ) : Animal("Siamois"), _brain(new Brain) {
	std::cout << "Construct Cat --> " << this->getType() << std::endl;
}
Cat::Cat( std::string type ) : Animal(type), _brain(new Brain) {
	std::cout << "Construct Cat : " << this->_type << std::endl;
}
Cat::~Cat( void ) {
	std::cout << "Destruct Cat." << std::endl;
	delete this->_brain;
}
Cat::Cat(Cat const & src) : Animal() {
	this->_brain = new Brain;
	*(this->_brain) = *(src._brain);
}
Cat& Cat::operator=(Cat const & rhs) {
	this->_type = rhs._type;
	this->_brain = new Brain;
	*(this->_brain) = *(rhs._brain);
	return *this;
}

void		Cat::makeSound(void) const {
	std::cout << "Miaouw!" << std::endl;
}

std::string	Cat::getBrainIdea(int num) const {
	return this->_brain->getIdeas(num);
}

void		Cat::setBrainIdea(std::string idea, int num) {
	this->_brain->setIdeas(idea, num);
}

Brain*		Cat::getBrain(void) const {
	return this->_brain;
}
