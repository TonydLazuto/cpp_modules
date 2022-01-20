#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
{
	std::cout << "Construct PresidentialPardonForm " << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm( std::string target )
	: _target(target)
{
	std::cout << "Construct PresidentialPardonForm " << std::endl;
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
	(std::string)this->_target = (std::string)rhs._target;
	return *this;
}

Form*			PresidentialPardonForm::clone(void)
{
	return (new PresidentialPardonForm());
}

void			PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << "<" << this->_target \
			<< "> get Zafod Beeblebrox forgiveness." << std::endl;
}