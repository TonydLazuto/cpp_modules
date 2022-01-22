#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::~Intern( void ) throw () {}
Intern::Intern(Intern const & src)
{
	*this =src;
}
Intern& Intern::operator=(Intern const & rhs)
{
	*this =rhs;
	return *this;
}

Form*	Intern::makeForm( std::string name_form, std::string target)
{
	Form *form = NULL;
	std::string forms[3] = {
		"presidential pardon",
		"shrubbery creation",
		"robotomy request"
	}
	InternMemFn arr[] = {
		&PresidentialPardonForm::clone,
		&ShrubberyCreationForm::clone,
		&RobotomyRequestForm::clone,
		0
	};
	int i = 0;
	while (i <= 3 && name_form.compare(forms[i]) != 0)
		i++;
	if (i == 3)
	{
		std::cout << "This is not a form!" <<std::endl;
		return NULL;
	}
	form = (this->*arr[i])()
	std::cout << "Intern creates <" << form->_name \
		<< ">" << std::endl;
	return form;
}