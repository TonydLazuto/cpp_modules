#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: _name("ShrubberyCreationForm"), _target("Default"), _grade_to_sign(145), _grade_to_exec(137) {}
ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: _name("ShrubberyCreationForm"), _target(target), _grade_to_sign(145), _grade_to_exec(137) {}
ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
	: _grade_to_sign(145), _grade_to_exec(137)
{
	this->_name = src._name;
	this->_target = src._target;
	(*const_cast<int*>(&this->_grade_to_sign)) = src._grade_to_sign;
	(*const_cast<int*>(&this->_grade_to_exec)) = src._grade_to_exec;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->_name = rhs._name;
	this->_target = rhs._target;
	(*const_cast<int*>(&this->_grade_to_sign)) = rhs._grade_to_sign;
	(*const_cast<int*>(&this->_grade_to_exec)) = rhs._grade_to_exec;
	return *this;
}

int		ShrubberyCreationForm::getGradeToSign(void) const
{
	return this->_grade_to_sign;
}
int		ShrubberyCreationForm::getGradeToExec(void) const
{
	return this->_grade_to_exec;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::cout << "<" << executor.getName() \
		<< "> executs <" << this->_name << ">" << std::endl;
	std::string	filename = this->_target;
	filename += "_shrubbery";
	std::ofstream ofs(filename.c_str(), std::ios_base::out | std::ios_base::trunc);
	if (ofs.fail())
	{
		std::cout << "Error: Output file." << std::endl;
		return ;
	}
	ofs << 	"       .     .  .      +     .      .          ." << std::endl << \
			"     .       .      .     #       .           ." << std::endl << \
			"        .      .         ###            .      .      ." << std::endl << \
			"      .      .   '#:. .:##'##:. .:#'  .      ." << std::endl << \
			"          .      . '####'###'####'  ." << std::endl << \
			"       .     '#:.    .:#'###'#:.    .:#'  .        .       ." << std::endl << \
			"  .             '#########'#########'        .        ." << std::endl << \
			"        .    '#:.  '####'###'####'  .:#'   .       ." << std::endl << \
			"     .     .  '#######''##'##''#######'                  ." << std::endl << \
			"                .'##'#####'#####'##'           .      ." << std::endl << \
			"    .   '#:. ...  .:##'###'###'##:.  ... .:#'     ." << std::endl << \
			"      .     '#######'##'#####'##'#######'      .     ." << std::endl << \
			"    .    .     '#####''#######''#####'    .      ." << std::endl << \
			"            .     '      000      '    .     ." << std::endl << \
			"       .         .   .   000     .        .       ." << std::endl << \
			".. .. ..................O000O........................ ......" << std::endl;
	ofs.close();
}
