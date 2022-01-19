#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Bureaucrat"), _grade(150)
{
	std::cout << "Construct Bureaucrat " << this->_name << std::endl;
}
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	std::cout << "Construct Bureaucrat " << this->_name << std::endl;
	try
	{
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		this->_grade = 150;
		std::cerr << e.what() << std::endl;
	}
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		this->_grade = 1;
		std::cerr << e.what() << std::endl;
	}
}
Bureaucrat::~Bureaucrat( void ) throw()
{
	std::cout << "Destruct Bureaucrat." << std::endl;
}
Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs)
{
	*this = rhs;
	return *this;
}

std::string const	Bureaucrat::getName(void) const
{
	return this->_name;
}
int					Bureaucrat::getGrade(void) const
{
	return this->_grade;
}
void				Bureaucrat::increaseGrade(int nb)
{
	try
	{
		if (this->_grade - nb < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade -= nb;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
void				Bureaucrat::decreaseGrade(int nb)
{
	try
	{
		if (this->_grade + nb > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade += nb;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs)
{
	o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">";
	return o;
}


