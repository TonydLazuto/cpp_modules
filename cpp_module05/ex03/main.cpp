#include <ostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	john("john", 46);
		// Bureaucrat	alex("alex", 140);
		// std::cout << john << std::endl;
		// john.increaseGrade(20);
		// std::cout << john << std::endl;
		// john.increaseGrade(20);
		// std::cout << john << std::endl << std::endl;

		// std::cout << alex << std::endl;
		// alex.decreaseGrade(10);
		// std::cout << alex << std::endl;
		// alex.decreaseGrade(10);
		// std::cout << alex << std::endl << std::endl;

		// Form *form1 = new RobotomyRequestForm("Ok");
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		// std::cout << *rrf << std::endl;
		std::cout << john << std::endl;
		john.signForm(*rrf);
		std::cout << *rrf << std::endl;
		// john.decreaseGrade(50);
		// john.signForm(*rrf);
		// std::cout << john << std::endl;
		// std::cout << *form1 << std::endl;
		john.executeForm(*rrf);

		delete rrf;
		// Form form2;
		// std::cout << alex << std::endl;
		// std::cout << form2 << std::endl;
		// alex.signForm(form2);
		// alex.increaseGrade(80);
		// alex.signForm(form2);
		// std::cout << alex << std::endl;
		// std::cout << form2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
