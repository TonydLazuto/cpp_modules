#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: _target("Default"), _grade_to_sign(145), _grade_to_exec(137)
{
	std::cout << "Construct ShrubberyCreationForm " << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: _target(target), _grade_to_sign(145), _grade_to_exec(137)
{
	std::cout << "Construct ShrubberyCreationForm " << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm( void ) throw ()
{
	std::cout << "Destruct ShrubberyCreationForm." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
	: _grade_to_sign(145), _grade_to_exec(137)
{
	(std::string)this->_target = (std::string)src._target;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(std::string)this->_target = (std::string)rhs._target;
	return *this;
}

Form*			ShrubberyCreationForm::clone(void) const
{
	return (new ShrubberyCreationForm());
}

std::string		ShrubberyCreationForm::buildMyTree(void)
{
	return "arbre";
}

void			ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	filename = this->_target;
	filename += "_shrubbery";
	std::ofstream ofs(filename.c_str(), std::ios_base::out | std::ios_base::trunc);
	if (ofs.fail())
	{
		std::cout << "Error: Output file." << std::endl;
		return ;
	}
	ofs << ShrubberyCreationForm::buildMyTree();
	ofs.close();
}
