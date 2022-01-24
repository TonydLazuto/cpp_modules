#include "Cast.hpp"

Cast::Cast( void ) {}
Cast::Cast( int type ) : _type(type)
{
	switch (type)
	{
		case Cast::DT_CHAR:
			/* code */
			break;
		case Cast::DT_INT:
			/* code */
			break;
		case Cast::DT_FLOAT:
			/* code */
			break;
		case Cast::DT_DOUBLE:
			/* code */
			break;
		
		default:
			break;
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
	this->_type = rhs._type;
	return *this;
}

int		Cast::getType(const char *av, int type)
{
	std::string arg(av);
	std::size_t found = arg.find(".");
	if (arg.size() == 1 && isalpha(av[0]))
		return Cast::DT_CHAR;
	for ( std::string::iterator it=arg.begin(); it!=arg.end(); ++it)
	{
		if (!isalnum(*it) && *it != '.' && av[0] != '-')
			return (-1);
		if (found != std::string::npos)
		{
			if (isalpha(*it))
			{
				type = Cast::DT_FLOAT;
				break ;
			}
		}
		else
		{
			type = Cast::DT_INT;
			break ;
		}
	}
	return type;
}

void	Cast::print_result(void) const
{
	;
}

std::ostream&	operator<<(std::ostream &o, const Cast &src)
{
	o << "char: " << this->_val_char;
	return o;
}