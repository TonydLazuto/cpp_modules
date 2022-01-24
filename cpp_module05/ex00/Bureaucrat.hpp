#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	_name;
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
					return "The grade cannot be more than 150 which is too low!";
				}

		};
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException( void ) throw() {}
				virtual ~GradeTooHighException( void ) throw() {}
				virtual const char* what() const throw()
				{
					return "The grade cannot be less than 1 which is too high!";
				}
		};
		Bureaucrat( void );
		virtual ~Bureaucrat( void );
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat& operator=(Bureaucrat const & rhs);

		Bureaucrat( std::string type, int grade );


		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				increaseGrade(int nb);
		void				decreaseGrade(int nb);

		
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & rhs);

#endif
