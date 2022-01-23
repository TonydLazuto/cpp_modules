#ifndef INTERN_HPP
# define INTERN_HPP

#include <Form.hpp>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Form;

class Intern
{
	private:
		typedef struct	s_form
		{
			std::string	clone_name;
			Form*		(Intern::*ft)(std::string target);
		}				t_form;
		Form    *clonePresi(std::string target);
        Form    *cloneShrub(std::string target);
        Form    *cloneRobot(std::string target);
        
		Intern(Intern const & src);
		Intern& operator=(Intern const & rhs);
	public:
		Intern( void );
		virtual ~Intern( void );

		Form*	makeForm( std::string name_form, std::string target);
};

#endif
