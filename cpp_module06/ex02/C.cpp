#include "C.hpp"

C::C( void )
{
	std::cout << "Construct C " << this->_name << std::endl;
}

C::~C( void )
{
	std::cout << "Destruct C." << std::endl;
}
C::C(C const & src)
{
	*this = src;
}
C& C::operator=(C const & rhs)
{
	this->_name = rhs._name;
	return *this;
}
