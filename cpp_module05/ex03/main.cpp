#include <ostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	john("john", 60);
		Bureaucrat	alex("alex", 140);
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

		Form *form1 = new RobotomyRequestForm("Ford Perfect");
		std::cout << *form1 << std::endl;
		std::cout << john << std::endl;
		john.signForm(*form1);
		// std::cout << *form1 << std::endl;
		// john.decreaseGrade(50);
		// john.signForm(*form1);
		// std::cout << john << std::endl;
		// std::cout << *form1 << std::endl;
		john.executeForm(*form1);

		delete form1;
		// Form form2;
		// std::cout << alex << std::endl;
		// std::cout << form2 << std::endl;
		// alex.signForm(form2);
		// alex.increaseGrade(80);
		// alex.signForm(form2);
		// std::cout << alex << std::endl;
		// std::cout << form2 << std::endl;

		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
