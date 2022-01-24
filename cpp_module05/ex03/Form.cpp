#include "Form.hpp"

Form::Form( void ) : _name("Form"), _sign(false)
					, _grade_to_sign(100), _grade_to_exec(50) {}
Form::Form( std::string name, const int grade_to_sign
			, const int grade_to_exec)
	: _name(name), _sign(false)
	, _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec) {}
Form::~Form( void ) {}

Form::Form(Form const & src) : _grade_to_sign(src._grade_to_sign)
								, _grade_to_exec(src._grade_to_exec)
{
	static_cast<std::string>(this->_name) = static_cast<std::string>(src._name);
	this->_sign = src._sign;
	(*const_cast<int*>(&this->_grade_to_sign)) = src._grade_to_sign;
	(*const_cast<int*>(&this->_grade_to_exec)) = src._grade_to_exec;
}
Form& Form::operator=(Form const & rhs)
{
	static_cast<std::string>(this->_name) = static_cast<std::string>(rhs._name);
	this->_sign = rhs._sign;
	(*const_cast<int*>(&this->_grade_to_sign)) = rhs._grade_to_sign;
	(*const_cast<int*>(&this->_grade_to_exec)) = rhs._grade_to_exec;
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
	Form *cpy = const_cast<Form*>(this);
	if (b.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException(cpy);
	if (b.getGrade() < 1)
		throw Form::GradeTooHighException(cpy);
	this->_sign = true;
	std::cout << "<" << b.getName() << "> signs <" \
		<< this->_name << ">." << std::endl;
	
}

void				Form::launchExecute(Bureaucrat const & executor) const
{
	if (!this->_sign || executor.getGrade() > this->getGradeToExec())
	{
		const Form*	cpy = this;
		throw Form::GradeTooLowToExecException(cpy);
	}
	this->execute(executor);
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
