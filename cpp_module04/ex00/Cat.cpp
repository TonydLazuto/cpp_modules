#include "Cat.hpp"

Cat::Cat( void ) : Animal("Catname") {
	std::cout << "Construct Cat --> " << this->getType() << std::endl;
}
Cat::Cat( std::string type ) : Animal(type) {
	std::cout << "Construct Cat : " << this->_type << std::endl;
}
Cat::~Cat( void ) {
	std::cout << "Destruct Cat." << std::endl;
}
Cat::Cat(Cat const & src) : Animal() {
	*this = src;
}
Cat& Cat::operator=(Cat const & rhs) {
	this->_type = rhs._type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Miaouw!" << std::endl;
}
