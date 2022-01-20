#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void )
{
	std::cout << "Construct ShrubberyCreationForm " << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: _target(target)
{
	std::cout << "Construct ShrubberyCreationForm " << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "Destruct ShrubberyCreationForm." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(std::string)this->_target = (std::string)rhs._target;
	return *this;
}

Form*			ShrubberyCreationForm::clone(void)
{
	return (new ShrubberyCreationForm());
}

std::string		ShrubberyCreationForm::buildMyTree(void)
{
	return "";
}

void			ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	filename = this->_target;
	filename += "_shrubbery";
	std::ofstream ofs(filename, std::ios_base::out | std::ios_base::trunc);
	if (ofs.fail())
	{
		std::cout << "Error: Output file." << std::endl;
		return ;
	}
	ofs << ShrubberyCreationForm::buildMyTree();
	ofs.close();
}