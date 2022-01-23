#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <Form.hpp>

class PresidentialPardonForm : public Form
{
	private:
		std::string		_name;
		std::string		_target;
		const int		_grade_to_sign;
		const int		_grade_to_exec;

	public:
		PresidentialPardonForm( void );
		virtual ~PresidentialPardonForm( void );
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);

		PresidentialPardonForm( std::string type );

		virtual void	execute(Bureaucrat const & executor) const;

		int				getGradeToSign(void) const;
		int				getGradeToExec(void) const;
};

#endif
