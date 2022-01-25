#include "B.hpp"

B::B( void )
{
	std::cout << "Construct B " << this->_name << std::endl;
}
B::~B( void )
{
	std::cout << "Destruct B." << std::endl;
}
B::B(B const & src)
{
	*this = src;
}
B& B::operator=(B const & rhs)
{
	this->_name = rhs._name;
	return *this;
}
