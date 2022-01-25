#ifndef B_HPP
# define B_HPP

#include "Base.hpp"
#include <iostream>

class B : public Base
{
	public:
		B( void );
		virtual ~B( void );
		B(B const & src);
		B& operator=(B const & rhs);

};

#endif
