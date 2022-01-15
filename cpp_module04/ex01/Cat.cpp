#include "Cat.hpp"

Cat::Cat( void ) : Animal("Persan") {
	std::cout << "Construct Cat --> " << this->getType() << std::endl;
	// this->_brain = new Brain(*this->_brain);
}
Cat::Cat( std::string type ) : Animal(type) {
	std::cout << "Construct Cat : " << this->_type << std::endl;
	// this->_brain = new Brain(*this->_brain);
}
Cat::~Cat( void ) {
	std::cout << "Destruct Cat." << std::endl;
	// delete this->_brain;
}
Cat::Cat(Cat const & src) : Animal() {
	*this = src;
	// delete src._brain;
	// this->_brain = new Brain(*this->_brain);
}
Cat& Cat::operator=(Cat const & rhs) {
	this->_type = rhs._type;
	// delete rhs._brain;
	// this->_brain = rhs._brain;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Miaouw!" << std::endl;
}
