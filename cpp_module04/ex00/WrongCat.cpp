#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("Siamois") {
	std::cout << "Construct WrongCat --> " << this->getType() << std::endl;
}
WrongCat::WrongCat( std::string type ) : WrongAnimal(type) {
	std::cout << "Construct WrongCat : " << this->_type << std::endl;
}
WrongCat::~WrongCat( void ) {
	std::cout << "Destruct WrongCat." << std::endl;
}
WrongCat::WrongCat(WrongCat const & src) : WrongAnimal() {
	*this = src;
}
WrongCat& WrongCat::operator=(WrongCat const & rhs) {
	this->_type = rhs._type;
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "WrongMiaouw!" << std::endl;
}
