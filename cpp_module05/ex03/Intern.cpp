#include "Intern.hpp"
#include <Form.hpp>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern( void ) {}
Intern::~Intern( void ) {}
Intern::Intern(Intern const & src)
{
	(void)src;
}
Intern& Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}
Form*	Intern::clonePresi(std::string target)
{
	return (new PresidentialPardonForm(target));
}
Form*	Intern::cloneShrub(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
Form*	Intern::cloneRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makeForm( std::string name_form, std::string target)
{
	Form	*form = NULL;

	t_form	form_elet[] = {
		{ "presidential pardon", &Intern::clonePresi },
		{ "shrubbery creation", &Intern::cloneShrub },
		{ "robotomy request", &Intern::cloneRobot }
	};
	int i = 0;
	while (i < 3 && name_form.compare(form_elet[i].clone_name) != 0)
		i++;
	if (i == 3)
	{
		std::cout << "This is not a form!" <<std::endl;
		return NULL;
	}
	form = ((this->*form_elet[i].ft)(target));
	std::cout << "<Intern> creates <" << form->getName() \
		<< ">" << std::endl;
	return form;
}
