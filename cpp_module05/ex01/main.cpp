#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	john("john", 40);
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

		Form form1;

		std::cout << form1 << std::endl;
		std::cout << john << std::endl;
		john.signForm(form1);
		std::cout << form1 << std::endl;
		// john.signForm(form1);
		john.decreaseGrade(100);
		john.signForm(form1);
		std::cout << john << std::endl;
		std::cout << form1 << std::endl;
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	

	return 0;
}
