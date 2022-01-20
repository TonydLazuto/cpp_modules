#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
	: _target("Default"), _grade_to_sign(72), _grade_to_exec(45)
{
	std::cout << "Construct RobotomyRequestForm " << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: _target(target), _grade_to_sign(72), _grade_to_exec(45)
{
	std::cout << "Construct RobotomyRequestForm " << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm( void ) throw ()
{
	std::cout << "Destruct RobotomyRequestForm." << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
	: _grade_to_sign(72), _grade_to_exec(45)
{
	(std::string)this->_target = (std::string)src._target;*this = src;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(std::string)this->_target = (std::string)rhs._target;
	return *this;
}

Form*			RobotomyRequestForm::clone(void) const
{
	return (new RobotomyRequestForm());
}

int				RobotomyRequestForm::_count = 0;

void			RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (RobotomyRequestForm::_count % 2)
		std::cout << "Brrrrrrrrrrrr *Drill noises* <" \
			<< this->_target << "> has been totally crushed." << std::endl;
	else
		std::cout << "Fail while try to cruh <" \
			<< this->_target << ">." << std::endl;

	RobotomyRequestForm::_count++;
}
