#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
{
	std::cout << "Construct PresidentialPardonForm " << this->_name << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm( std::string name ) : _name(name)
{
	std::cout << "Construct PresidentialPardonForm " << this->_name << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "Destruct PresidentialPardonForm." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	*this = src;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	this->_name = rhs._name;
	return *this;
}

