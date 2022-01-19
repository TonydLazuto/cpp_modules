#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	a("a", 230);
	Bureaucrat	b("b", -30);
	std::cout << a << std::endl;
	std::cout << b << std::endl << std::endl;

	Bureaucrat	john("john", 30);
	Bureaucrat	alex("alex", 140);
	std::cout << john << std::endl;
	john.increaseGrade(20);
	std::cout << john << std::endl;
	john.increaseGrade(20);
	std::cout << john << std::endl << std::endl;

	std::cout << alex << std::endl;
	alex.decreaseGrade(10);
	std::cout << alex << std::endl;
	alex.decreaseGrade(10);
	std::cout << alex << std::endl << std::endl;
	return 0;
}
