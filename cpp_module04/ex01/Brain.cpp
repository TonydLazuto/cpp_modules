#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Construct Brain" << std::endl;
}
Brain::Brain( std::string ideas[100] ) {
	std::cout << "Construct Brain" << std::endl;
	for(int i = 0; i < 100; ++i)
		this->_ideas[i] = ideas[i];
}
Brain::~Brain( void ) {
	std::cout << "Destruct Brain." << std::endl;
}
Brain::Brain(Brain const & src) {
	*this = src;
}
Brain& Brain::operator=(Brain const & rhs) {
	for(int i = 0; i < 100; ++i)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}
