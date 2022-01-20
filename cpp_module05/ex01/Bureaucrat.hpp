#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

		static void			checkBureaucrat(int grade);

	public:

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException( void ) throw() {}
				virtual ~GradeTooLowException( void ) throw() {}
				virtual const char* what() const throw()
				{
					return "<bureaucrat> cannot sign because is grade \
						is more than grade_to_sign which is too low!";
				}

		};
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException( void ) throw() {}
				virtual ~GradeTooHighException( void ) throw() {}
				virtual const char* what() const throw()
				{
					return "<bureaucrat> cannot sign because is grade \
						is less than grade_to_sign which is too low!";
				}
		};
		Bureaucrat( void );
		virtual ~Bureaucrat( void ) throw();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat& operator=(Bureaucrat const & rhs);

		Bureaucrat( std::string type, int grade );


		std::string const	getName(void) const;
		int					getGrade(void) const;
		void				increaseGrade(int nb);
		void				decreaseGrade(int nb);

		void				signForm(Form& f);

};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs);

#endif
