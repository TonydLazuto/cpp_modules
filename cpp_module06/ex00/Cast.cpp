#include "Cast.hpp"

Cast::Cast( void ) {}
Cast::Cast( std::string arg )
: _val_char(0), _val_int(0), _val_float(0)
	, _val_double(0), _arg(arg)
{
	try
	{
		this->_val_char = static_cast<char>(arg);
			
	}
	// this->_val_int = static_cast<int>(arg);
	// this->_val_float = static_cast<float>(arg);
	// this->_val_double = static_cast<double>(arg);
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "HELLO" <<std::endl;
	}

}
Cast::~Cast( void ) {}

Cast::Cast(Cast const & src)
{
	*this = src;
}
Cast& Cast::operator=(Cast const & rhs)
{
	this->_val_char = rhs._val_char;
	this->_val_int = rhs._val_int;
	this->_val_float = rhs._val_float;
	this->_val_double = rhs._val_double;
	this->_arg = rhs._arg;
	return *this;
}

char	Cast::getValChar( void ) const
{
	return this->_val_char;
}
int		Cast::getValInt( void ) const
{
	return this->_val_int;
}
float	Cast::getValFloat( void ) const
{
	return this->_val_float;
}
double	Cast::getValDouble( void ) const
{
	return this->_val_double;
}

std::ostream&	operator<<(std::ostream &o, Cast const & src)
{
	o << "char: " << src.getValChar() << std::endl \
	<< "int: " << src.getValInt() << std::endl \
	<< "float: " << src.getValFloat() << std::endl \
	<< "double: " << src.getValDouble() << std::endl;
	return o;
}
