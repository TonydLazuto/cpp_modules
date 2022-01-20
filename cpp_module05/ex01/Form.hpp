#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form : public std::exception
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_grade_to_sign;
		const int			_grade_to_exec;

	public:
		class GradeTooLowException
		{
			public:
				GradeTooLowException( void ) throw() {
					std::cout << "Construct GradeTooLowException" << std::endl;
				}
				virtual ~GradeTooLowException( void ) throw() {
					std::cout << "Destruct GradeTooLowException" << std::endl;
				}
				virtual const char* what() const throw()
				{
					return "Exception: Bureaucrat Grade is to low to sign this form.";
				}

		};
		class GradeTooHighException
		{
			public:
				GradeTooHighException( void ) throw() {
					std::cout << "Construct GradeTooHighException" << std::endl;
				}
				virtual ~GradeTooHighException( void ) throw() {
					std::cout << "Destruct GradeTooHighException" << std::endl;
				}
				virtual const char* what() const throw()
				{
					return "Exception: Bureaucrat Grade is to high to sign this form.";
				}

		};
		Form( void );
		virtual ~Form( void ) throw();
		Form(Form const & src);
		Form& operator=(Form const & rhs);

		Form( std::string name, const int grade_to_sign, const int grade_to_exec);

		const std::string	getName(void) const;
		bool				getSign(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExec(void) const;
		
		void				beSigned(Bureaucrat& b);

		
};

std::ostream&	operator<<(std::ostream& o, Form const & rhs);

#endif
