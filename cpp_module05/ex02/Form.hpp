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
			private:
				Form*	_f;
			public:
				GradeTooLowException( void ) throw() : _f(NULL) {}
				GradeTooLowException( Form* f ) throw() : _f(f) {}
				virtual ~GradeTooLowException( void ) throw() {
					if (this->_f)
						delete this->_f;
				}
				virtual const char* what() const throw()
				{
					return "Exception: Bureaucrat Grade is to low to sign this form.";
				}

		};
		class GradeTooHighException
		{
			public:
				GradeTooHighException( void ) throw() {}
				virtual ~GradeTooHighException( void ) throw() {}
				virtual const char* what() const throw()
				{
					return "Exception: Bureaucrat Grade is to high to sign this form.";
				}

		};
		class GradeTooLowToExecException
		{
			private:
				Form*	_f;
			public:
				GradeTooLowToExecException( void ) throw() : _f(NULL) {}
				GradeTooLowToExecException( Form* f ) throw() : _f(f) {}
				virtual ~GradeTooLowToExecException( void ) throw() {
					if (this->_f)
						delete this->_f;
				}
				virtual const char* what() const throw()
				{
					return "Exception: Bureaucrat Grade is to low to exec this form.";
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

		virtual void		beSigned(Bureaucrat& b);
		void				launchExecute(Bureaucrat const & executor);

		virtual Form		*clone(void) = 0;
		virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream& o, Form const & rhs);

#endif
