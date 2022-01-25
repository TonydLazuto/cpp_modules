#include "Cast.hpp"
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

Cast::Cast( void ) {}
Cast::~Cast( void ) {}

Cast::Cast( const char* arg ) : _val_char(0), _val_int(0)
	, _val_float(0) , _val_double(0)
{
	for (int i = 0; i < 4; i++)
		this->_res_convert[i] = 0;
	this->setValues(arg);

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

void	Cast::setValues(const char *av)
{
	long int	val_int_long;

	val_int_long = strtol(av, NULL, 10);
	if (val_int_long <= INT_MAX && val_int_long >= INT_MIN)
	{
		if (val_int_long != 0L)
			this->_res_convert[DT_CHAR] = 1;
		if ((val_int_long == 0L && atoi(av) == 0) || val_int_long != 0L)
			this->_res_convert[DT_INT] = 1;
		this->_val_int = static_cast<int>(val_int_long);
		this->_val_char = static_cast<char>(this->_val_int);
	}
	this->_val_double = strtod(av, NULL);
	if (this->_val_double <= HUGE_VAL && this->_val_double >= -HUGE_VAL)
	{
		if ((this->_val_double == 0.0 && atoi(av) == 0) || this->_val_double != 0.0)
		{
			this->_res_convert[DT_FLOAT] = 1;
			this->_res_convert[DT_DOUBLE] = 1;
		}
		this->_val_float = static_cast<float>(this->_val_double);
	}
}

void		Cast::print_result(const char *av) const
{
	if (this->_res_convert[DT_CHAR])
		std::cout << "char: " << this->_val_char << std::endl;
	else if (atoi(av) == 0)
		std::cout << "char: " << "Non displayble" << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;
	if (this->_res_convert[DT_INT])
		std::cout << "int: " << this->_val_int << std::endl;
	else
		std::cout << "int: " << "impossible" << std::endl;
	if (this->_res_convert[DT_FLOAT])
	{
		std::cout << std::fixed  << std::setprecision(1);
		std::cout << "float: " << this->_val_float << "f" << std::endl;
	}
	else
		std::cout << "float: " << "impossible" << std::endl;
	if (this->_res_convert[DT_DOUBLE])
		std::cout << "double: " << this->_val_double << std::endl;
	else
		std::cout << "double: " << "impossible" << std::endl;
}
