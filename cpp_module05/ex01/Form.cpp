#include "Form.hpp"

Form::Form( void ) : _name("Form"), _sign(false)
					, _grade_to_sign(100), _grade_to_exec(50)
{
	std::cout << "Construct Form " << this->_name << std::endl;
}
Form::Form( std::string name, const int grade_to_sign
			, const int grade_to_exec)
	: _name(name), _sign(false)
	, _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	std::cout << "Construct Form " << this->_name << std::endl;
}
Form::~Form( void ) throw()
{
	std::cout << "Destruct Form." << std::endl;
}
Form::Form(Form const & src) : _grade_to_sign(src._grade_to_sign)
								, _grade_to_exec(src._grade_to_exec)
{
	*this = src;
}
Form& Form::operator=(Form const & rhs)
{
	*this = rhs;
	return *this;
}

const std::string	Form::getName(void) const
{
	return this->_name;
}
bool				Form::getSign(void) const
{
	return this->_sign;
}
int					Form::getGradeToSign(void) const
{
	return this->_grade_to_sign;
}
int					Form::getGradeToExec(void) const
{
	return this->_grade_to_exec;
}

void				Form::beSigned(Bureaucrat& b)
{
	try
	{
		if (b.getGrade() > this->_grade_to_sign)
			throw Form::GradeTooLowException();
		else if (b.getGrade() <= this->_grade_to_exec)
			throw Form::GradeTooHighException();
		else
		{
			this->_sign = true;
		}
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& o, Form const & rhs)
{
	o << std::endl << "\t/---| Begin Form |---\\" << std::endl \
	<< "Name : " << rhs.getName() << std::endl \
	<< "Sign : " << rhs.getSign() << std::endl \
	<< "Grade to sign : " << rhs.getGradeToSign() << std::endl \
	<< "Grade to exec : " << rhs.getGradeToExec() << std::endl \
	<< "\t/---| End Form |---\\";
	return o;
}
