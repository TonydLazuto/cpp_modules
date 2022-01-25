#include "Data.hpp"

Data::Data( void ) : _name("Giiiiiibbeeeeeriiiishhhh")
{
	std::cout << "Construct Data " << this->_name << std::endl;
}
Data::Data( std::string name ) : _name(name)
{
	std::cout << "Construct Data " << this->_name << std::endl;
}
Data::~Data( void )
{
	std::cout << "Destruct Data." << std::endl;
}
Data::Data(Data const & src)
{
	*this = src;
}
Data& Data::operator=(Data const & rhs)
{
	this->_name = rhs._name;
	return *this;
}

std::string	Data::getName( void ) const
{
	return this->_name;
}
