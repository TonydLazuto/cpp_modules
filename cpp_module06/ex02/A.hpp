#ifndef A_HPP
# define A_HPP

#include "Base.hpp"
#include <iostream>

class A : public Base
{
	public:
		A( void );
		virtual ~A( void );
		A(A const & src);
		A& operator=(A const & rhs);

		A( std::string type );

};

#endif
