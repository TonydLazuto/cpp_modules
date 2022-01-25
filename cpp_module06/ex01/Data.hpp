#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
	private:
		std::string _name;

	public:
		Data( void );
		virtual ~Data( void );
		Data(Data const & src);
		Data& operator=(Data const & rhs);

		Data( std::string type );

		std::string	getName( void ) const;
};

#endif
