#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
class ShrubberyCreationForm;
#include <Form.hpp>

class ShrubberyCreationForm : public Form
{
	private:
		std::string		_target;
		const int		_grade_to_sign = 145;
		const int		_grade_to_exec = 137;

		std::string		buildMyTree(void);
		
	public:
		ShrubberyCreationForm( void );
		virtual ~ShrubberyCreationForm( void );
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);

		ShrubberyCreationForm( std::string target );

		virtual void	execute(Bureaucrat const & executor) const;
		virtual Form*	clone(void);
};

#endif
