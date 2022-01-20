#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
class PresidentialPardonForm;
#include <Form.hpp>

class PresidentialPardonForm
{
	private:
		std::string		_target;
		const int		_grade_to_sign = 25;
		const int		_grade_to_exec = 5;

	public:
		PresidentialPardonForm( void );
		virtual ~PresidentialPardonForm( void );
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);

		PresidentialPardonForm( std::string type );

		void			pardon(void);
		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
