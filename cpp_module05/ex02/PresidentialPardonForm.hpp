#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
class PresidentialPardonForm;
#include <Form.hpp>

class PresidentialPardonForm
{
	private:
		std::string		_target;
		const int		_grade_to_sign;
		const int		_grade_to_exec;

	public:
		PresidentialPardonForm( void );
		virtual ~PresidentialPardonForm( void ) throw ();
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);

		PresidentialPardonForm( std::string type );

		virtual void	execute(Bureaucrat const & executor) const;
		virtual Form*	clone(void) const;
};

#endif
