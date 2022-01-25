#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
	protected:
		std::string _name;

	public:
		Base( void );
		virtual ~Base( void );
		Base(Base const & src);
		Base& operator=(Base const & rhs);

		Base( std::string type );

		std::string getName(void) const;
		
};

#endif
