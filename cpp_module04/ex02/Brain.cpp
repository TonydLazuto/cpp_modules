#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Construct Brain" << std::endl;
	for(int it = 0; it < 100; it++)
		this->_ideas[it] = "Init Idea";
}

Brain::~Brain( void ) {
	std::cout << "Destruct Brain." << std::endl;
}
Brain::Brain(Brain const & src) {
	*this = src;
}
Brain& Brain::operator=(Brain const & rhs) {
	for(int it = 0; it < 100; it++)
		this->_ideas[it] = rhs._ideas[it];
	return *this;
}

std::string		Brain::getIdeas(int num) {
	return this->_ideas[num];
}

void			Brain::setIdeas(std::string idea, int num) {
	this->_ideas[num] = idea;
}
