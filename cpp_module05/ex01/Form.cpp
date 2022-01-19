#include "Form.hpp"

Form::Form( void ) : _name("Form"), _sign(false)
	, _grade_to_sign(100), _grade_to_exec(50)
{
	std::cout << "Construct Form " << this->_name << std::endl;
}
Form::Form( std::string name, const int grade_to_sign, const int grade_to_exec)
	: _name(name), _sign(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	std::cout << "Construct Form " << this->_name << std::endl;
}
Form::~Form( void )
{
	std::cout << "Destruct Form." << std::endl;
}
Form::Form(Form const & src)
{
	*this = src;
}
Form& Form::operator=(Form const & rhs)
{
	*this = rhs
	return *this;
}

std::string const	Form::getName(void) const
{
	return this->_name;
}
bool				Form::getSign(void) const
{
	return this->_sign;
}
int const			Form::getGradeToSign(void) const
{
	return this->_grade_to_sign;
}
int const			Form::getGradeToExec(void) const
{
	return this->_grade_to_exec;
}

void				Form::beSigned(Bureaucrat b)const
{
	try
	{
		if (b.getGrade() > this->_grade_to_sign)
			throw Form::GradeTooLowException(b, this->_name, this->_grade_to_sign);
		else if (b.getGrade() <= this->_grade_to_exec)
			throw Form::GradeTooHighException(b, this->_name, this->_grade_to_exec);
		else
			this->_sign = true;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& o, Form const & rhs)
{
	o << "Form" << std::endl \
	<< "Name : " << rhs.getName() \
	<< "Sign : " << rhs.getSign() \
	<< "Grade to sign : " << rhs.getGradeToSign() \
	<< "Grade to exec : " << rhs.getGradeToExec();
	return o;
}
