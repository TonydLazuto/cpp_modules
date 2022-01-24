#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Bureaucrat"), _grade(150) {}
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	Bureaucrat::checkBureaucrat(grade);
}
Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	static_cast<std::string>(this->_name) = static_cast<std::string>(src._name);
	this->_grade = src._grade;
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs)
{
	static_cast<std::string>(this->_name) = static_cast<std::string>(rhs._name);
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

const std::string	Bureaucrat::getName(void) const
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

void				Bureaucrat::signForm(Form& f)
{
	f.beSigned(*this);
}

void				Bureaucrat::executeForm(Form const & form)
{
	form.launchExecute(*this);
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs)
{
	o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">";
	return o;
}
