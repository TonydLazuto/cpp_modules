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
PresidentialPardonForm::~PresidentialPardonForm( void ) throw ()
{
	std::cout << "Destruct PresidentialPardonForm." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
	: _grade_to_sign(25), _grade_to_exec(5)
{
	(std::string)this->_target = (std::string)src._target;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(std::string)this->_target = (std::string)rhs._target;
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

Form*			PresidentialPardonForm::clone(void) const
{
	return (new PresidentialPardonForm());
}

void			PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << "<" << executor.getName() \
		<< "> executs <" << this->_name << ">" << std::endl;
	std::cout << "<" << this->_target \
			<< "> get Zafod Beeblebrox forgiveness." << std::endl;
}
