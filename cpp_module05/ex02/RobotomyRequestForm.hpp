#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
class RobotomyRequestForm;
#include <Form.hpp>

class RobotomyRequestForm
{
	private:
		std::string		_target;
		const int		_grade_to_sign;
		const int		_grade_to_exec;
		static int		_count;

	public:
		RobotomyRequestForm( void );
		virtual ~RobotomyRequestForm( void ) throw ();
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);

		RobotomyRequestForm( std::string type );

		virtual void	execute(Bureaucrat const & executor) const;
		virtual Form*	clone(void) const;
};

#endif
