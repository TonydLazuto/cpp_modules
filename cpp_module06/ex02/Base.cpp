#include "Base.hpp"

Base::Base( void ) : _name("Default")
{
    std::cout << "Construct Base " << this->_name << std::endl;
}
Base::Base( std::string name ) : _name(name)
{
    std::cout << "Construct Base " << this->_name << std::endl;
}
Base::~Base( void )
{
    std::cout << "Destruct Base." << std::endl;
}
Base::Base(Base const & src)
{
    *this = src;
}
Base& Base::operator=(Base const & rhs)
{
    this->_name = rhs._name;
    return *this;
}

std::string     Base::getName(void) const
{
    return this->_name;
}
