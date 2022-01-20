#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	john("john", 30);
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

	Form form1;
	std::cout << form1 << std::endl;
	std::cout << john << std::endl;
	// form1.beSigned(john);
	john.signForm(form1);
	std::cout << form1 << std::endl;
	// john.signForm(form1);
	john.decreaseGrade(100);
	// form1.beSigned(john);
	john.signForm(form1);
	std::cout << john << std::endl;
	std::cout << form1 << std::endl;
	
	// Form form2;
	// std::cout << alex << std::endl;
	// form2.beSigned(alex);
	// std::cout << form2 << std::endl;
	// alex.signForm(form2);
	// alex.increaseGrade(80);
	// form2.beSigned(alex);
	// alex.signForm(form2);
	// std::cout << alex << std::endl;
	// std::cout << form2 << std::endl;
	

	return 0;
}
