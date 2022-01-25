#include "A.hpp"

A::A( void )
{
	std::cout << "Construct A " << this->_name << std::endl;
}
A::~A( void )
{
	std::cout << "Destruct A." << std::endl;
}
A::A(A const & src)
{
	*this = src;
}
A& A::operator=(A const & rhs)
{
	this->_name = rhs._name;
	return *this;
}
