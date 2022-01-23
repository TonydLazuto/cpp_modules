#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <Form.hpp>

class RobotomyRequestForm : public Form
{
	private:
		std::string		_name;
		std::string		_target;
		const int		_grade_to_sign;
		const int		_grade_to_exec;

	public:
		RobotomyRequestForm( void );
		virtual ~RobotomyRequestForm( void );
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);

		RobotomyRequestForm( std::string type );

		virtual void	execute(Bureaucrat const & executor) const;

		int				getGradeToSign(void) const;
		int				getGradeToExec(void) const;
};

#endif
