#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
	: _name("PresidentialPardonForm"), _target("Default"), _grade_to_sign(25), _grade_to_exec(5)
{
	std::cout << "Construct PresidentialPardonForm " << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm( std::string target )
	: _name("PresidentialPardonForm"), _target(target), _grade_to_sign(25), _grade_to_exec(5)
{
	std::cout << "Construct PresidentialPardonForm " << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "Destruct PresidentialPardonForm." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
	: _grade_to_sign(25), _grade_to_exec(5)
{
	this->_name = src._name;
	this->_target = src._target;
	(*const_cast<int*>(&this->_grade_to_sign)) = src._grade_to_sign;
	(*const_cast<int*>(&this->_grade_to_exec)) = src._grade_to_exec;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	this->_name = rhs._name;
	this->_target = rhs._target;
	(*const_cast<int*>(&this->_grade_to_sign)) = rhs._grade_to_sign;
	(*const_cast<int*>(&this->_grade_to_exec)) = rhs._grade_to_exec;
	return *this;
}

int				PresidentialPardonForm::getGradeToSign(void) const
{
	return this->_grade_to_sign;
}
int				PresidentialPardonForm::getGradeToExec(void) const
{
	return this->_grade_to_exec;
}

void			PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << "<" << executor.getName() \
		<< "> executs <" << this->_name << ">" << std::endl;
	std::cout << "<" << this->_target \
			<< "> get <Zafod Beeblebrox> eternal forgiveness." << std::endl;
}
