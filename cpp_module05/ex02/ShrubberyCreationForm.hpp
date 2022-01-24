#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <Form.hpp>

class ShrubberyCreationForm : public Form
{
	private:
		std::string		_name;
		std::string		_target;
		const int		_grade_to_sign;
		const int		_grade_to_exec;
		
	public:
		ShrubberyCreationForm( void );
		virtual ~ShrubberyCreationForm( void );
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);

		ShrubberyCreationForm( std::string target );

		virtual void	execute(Bureaucrat const & executor) const;
		
		int				getGradeToSign(void) const;
		int				getGradeToExec(void) const;
};

#endif
