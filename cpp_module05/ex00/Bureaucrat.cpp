#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Bureaucrat"), _grade(150)
{
	std::cout << "Construct Bureaucrat " << this->_name << std::endl;
}
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	Bureaucrat::checkBureaucrat(grade);
	std::cout << "Construct Bureaucrat " << this->_name << std::endl;
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
	(std::string)this->_name = (std::string)rhs._name;
	this->_grade = rhs._grade;
	return *this;
}

void				Bureaucrat::checkBureaucrat(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
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
	if (this->_grade - nb < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= nb;
}
void				Bureaucrat::decreaseGrade(int nb)
{
	if (this->_grade + nb > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += nb;
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs)
{
	o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">";
	return o;
}
