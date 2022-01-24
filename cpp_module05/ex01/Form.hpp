#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_grade_to_sign;
		const int			_grade_to_exec;

	public:
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException( void ) throw() {}
				virtual ~GradeTooLowException( void ) throw() {}
				virtual const char* what() const throw()
				{
					return "<bureaucrat> cannot sign because Grade is to low to sign this form.";
				}

		};
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException( void ) throw() {}
				virtual ~GradeTooHighException( void ) throw() {}
				virtual const char* what() const throw()
				{
					return "<bureaucrat> cannot sign because Grade is to high to sign this form.";
				}

		};
		Form( void );
		virtual ~Form( void );
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
