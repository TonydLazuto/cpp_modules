#ifndef C_HPP
# define C_HPP

#include "Base.hpp"
#include <iostream>

class C : public Base
{
    public:
        C( void );
        virtual ~C( void );
        C(C const & src);
        C& operator=(C const & rhs);
        
};

#endif
