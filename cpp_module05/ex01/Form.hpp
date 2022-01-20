#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form
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
				const std::string	_b_name;
				int					_b_grade;
				const std::string	_form_name;
				const int			_grade_to_sign;
			public:
				// GradeTooLowException ( void ) throw()
				// : _b_name(NULL), _b_grade(150) 
				// 	,_form_name("Default"), _grade_to_sign(100) {}
				GradeTooLowException( const std::string b_name, int b_grade
					, const std::string form_name, const int grade_to_sign ) throw()
				: _b_name(b_name), _b_grade(b_grade) 
					, _form_name(form_name), _grade_to_sign(grade_to_sign) {}
				virtual ~GradeTooLowException( void ) throw() {}
				virtual const char* what() const throw()
				{
					std::string s = this->_b_name;
					s += " cannot sign because his grade : ";
					s += this->_b_grade;
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
				const std::string	_b_name;
				int					_b_grade;
				const std::string	_form_name;
				const int			_grade_to_exec;
			public:
				// GradeTooHighException ( void ) throw()
				// : _b_name(NULL), _b_grade(150) 
				// 	,_form_name("Default"), _grade_to_sign(100) {}
				GradeTooHighException( const std::string b_name, int b_grade
					, const std::string form_name, const int grade_to_exec ) throw()
				: _b_name(b_name), _b_grade(b_grade)
					, _form_name(form_name), _grade_to_exec(grade_to_exec) {}
				virtual ~GradeTooHighException( void ) throw() {}
				virtual const char* what() const throw()
				{
					std::string s = this->_b_name;
					s += " cannot sign because his grade : ";
					s += this->_b_grade;
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

		Form( std::string name, const int grade_to_sign, const int grade_to_exec);

		const std::string	getName(void) const;
		bool				getSign(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExec(void) const;
		
		void				beSigned(Bureaucrat b);

		
};

std::ostream&	operator<<(std::ostream& o, Form const & rhs);

#endif
