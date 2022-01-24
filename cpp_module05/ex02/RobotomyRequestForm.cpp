#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm( void )
	: _name("RobotomyRequestForm"), _target("Default"), _grade_to_sign(72), _grade_to_exec(45) {}
RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: _name("RobotomyRequestForm"), _target(target), _grade_to_sign(72), _grade_to_exec(45) {}
RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
	: _grade_to_sign(72), _grade_to_exec(45)
{
	this->_name = src._name;
	this->_target = src._target;
	(*const_cast<int*>(&this->_grade_to_sign)) = src._grade_to_sign;
	(*const_cast<int*>(&this->_grade_to_exec)) = src._grade_to_exec;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	this->_name = rhs._name;
	this->_target = rhs._target;
	(*const_cast<int*>(&this->_grade_to_sign)) = rhs._grade_to_sign;
	(*const_cast<int*>(&this->_grade_to_exec)) = rhs._grade_to_exec;
	return *this;
}

int		RobotomyRequestForm::getGradeToSign(void) const
{
	return this->_grade_to_sign;
}
int		RobotomyRequestForm::getGradeToExec(void) const
{
	return this->_grade_to_exec;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "<" << executor.getName() \
		<< "> executs <" << this->_name << ">" << std::endl;
	srand(time(0));
	if (rand() % 2)
		std::cout << "Brrrrrrrrrrrr *Drill noises* <" \
			<< this->_target << "> has been totally crushed." << std::endl;
	else
		std::cout << "Fail while try to crush <" \
			<< this->_target << ">." << std::endl;
}
