#include "Cast.hpp"
#include <string>


Cast::Cast( void ) {}
Cast::~Cast( void ) {}

Cast::Cast( char* arg ) : _val_char(0), _val_int(0), _val_float(0)
	, _val_double(0), _type(Cast::DT_INT)
{
	this->setType(arg);
	switch (this->_type)
	{
	case Cast::DT_CHAR:
		this->_val_char = (*static_cast<char*>(arg));
		break;
	case Cast::DT_INT:
		this->_val_int = (*static_cast<int*>(arg));
		break;
	case Cast::DT_FLOAT:
		std::cout << "I'm a float" << std::endl;
		break;
	case Cast::DT_DOUBLE:
		std::cout << "I'm a double" << std::endl;
		break;
	
	default:
		std::cout << "I'm a none" << std::endl;
		break;
	}
	try
	{
		// this->_val_int = static_cast<int>(arg);
		// this->_val_float = static_cast<float>(arg);
		// this->_val_double = static_cast<double>(arg);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "YOO" <<std::endl;
	}

}
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
	return *this;
}

void	Cast::setType(char *av)
{
	std::string arg(av);
	if (arg.size() == 1 && isalpha(av[0]))
	{
		this->_type= Cast::DT_CHAR;
		return ;
	}
	std::string::iterator it=arg.begin();
	if (*it == '-')
		it++;
	while (it != arg.end() && isdigit(*it))
		it++;
	if (it == arg.end())
		return ;
	if (*it != '.')
	{
		this->_type = -1;
		return ;
	}
	it++;
	this->_type = Cast::DT_DOUBLE;
	while (it != arg.end() && isdigit(*it))
		it++;
	if (it == arg.end())
		return ;
	if (*it == 'f')
		this->_type = Cast::DT_FLOAT;
	else
		this->_type = -1;
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
	<< "double: " << src.getValDouble();
	return o;
}
