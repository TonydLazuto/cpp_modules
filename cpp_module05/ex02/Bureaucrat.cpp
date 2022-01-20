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
	(std::string)this->_name = (std::string)rhs._name;
	this->_grade = rhs._grade;
	return *this;
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

void				Bureaucrat::signForm(Form& f)
{
	if (f.getSign())
		std::cout << "<" << this->_name << "> signs " \
				<< f.getName() << std::endl;
	else
		std::cout << "<" << this->_name << "> cannot sign because his grade <" \
				<< this->_grade << "> is not between <" << f.getGradeToSign() \
				<< "> and <" << f.getGradeToExec() << "> !" << std::endl;

}

void			Bureaucrat::executeForm(Form const & form)
{

}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs)
{
	o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">";
	return o;
}

