#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat : public std::exception
{
	private:
		std::string const	_name;
		int					_grade;

	public:

		class GradeTooLowException
		{
			public:
				GradeTooLowException( void ) throw() {}
				virtual ~GradeTooLowException( void ) throw() {}
				virtual const char* what() const throw()
				{
					return "The grade try to be more than 150 which is too low!";
				}

		};
		class GradeTooHighException
		{
			public:
				GradeTooHighException( void ) throw() {}
				virtual ~GradeTooHighException( void ) throw() {}
				virtual const char* what() const throw()
				{
					return "The grade try to be more than 150 which is too low!";
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

		
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs);

#endif
