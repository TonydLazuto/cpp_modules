#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		// Bureaucrat	a("a", 230);
		// Bureaucrat	b("b", -30);
		// std::cout << a << std::endl;
		// std::cout << b << std::endl << std::endl;

		Bureaucrat	john("john", 30);
		Bureaucrat	alex("alex", 130);
		std::cout << john << std::endl;
		john.increaseGrade(20);
		std::cout << john << std::endl;
		// john.increaseGrade(20);
		std::cout << john << std::endl << std::endl;

		std::cout << alex << std::endl;
		alex.decreaseGrade(10);
		std::cout << alex << std::endl;
		// alex.decreaseGrade(20);
		std::cout << alex << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
