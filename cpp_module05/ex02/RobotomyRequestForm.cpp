#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
{
	std::cout << "Construct RobotomyRequestForm " << this->_name << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm( std::string name ) : _name(name)
{
	std::cout << "Construct RobotomyRequestForm " << this->_name << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "Destruct RobotomyRequestForm." << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	this->_name = rhs._name;
	return *this;
}
