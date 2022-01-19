#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		bool				_sign;
		int const			_grade_to_sign;
		int const			_grade_to_exec;

	public:
		class GradeTooLowException
		{
			private:
				Bureaucrat			_b;
				int const			_grade_to_sign;
				std::string const	_form_name;
			public:
				GradeTooLowException( Bureaucrat b, std::string const form_name
					,int const grade_to_sign) throw()
				:_b(b), _form_name(form_name), _grade_to_sign(grade_to_sign) {}
				virtual ~GradeTooLowException( void ) throw() {}
				virtual const char* what() const throw()
				{
					std::string s = this->_b.getName();
					s += " cannot sign because his grade : ";
					s += this->_b.getGrade();
					s += ". And the form ";
					s += this->_form_name;
					s += " required grade(to_sign) -> ";
					s += this->_grade_to_sign;
					const char *msg = &*s.begin();
					return msg;
				}

		};
		class GradeTooHighException
		{
			private:
				Bureaucrat			_b;
				int const			_grade_to_exec;
				std::string const	_form_name;
			public:
				GradeTooHighException( Bureaucrat b, std::string const form_name
					,int const grade_to_exec) throw()
				:_b(b), _form_name(form_name), _grade_to_exec(grade_to_exec) {}
				virtual ~GradeTooHighException( void ) throw() {}
				virtual const char* what() const throw()
				{
					std::string s = this->_b.getName();
					s += " cannot sign because his grade : ";
					s += this->_b.getGrade();
					s += ". And the form ";
					s += this->_form_name;
					s += " maximum grade(to_exec) -> ";
					s += this->_grade_to_exec;
					const char *msg = &*s.begin();
					return msg;
				}
		};
		Form( void );
		virtual ~Form( void );
		Form(Form const & src);
		Form& operator=(Form const & rhs);

		Form( std::string name, const int grade_to_sign
				, const int grade_to_exec);

		std::string const	getName(void) const;
		bool				getSign(void) const;
		int const			getGradeToSign(void) const;
		int const			getGradeToExec(void) const;
		
		void				beSigned(Bureaucrat b);

		
};

std::ostream&	operator<<(std::ostream& o, Form const & rhs);

#endif
