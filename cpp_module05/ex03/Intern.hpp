#ifndef INTERN_HPP
# define INTERN_HPP

#include <Form.hpp>

class Intern
{
	public:
		Intern( void );
		virtual ~Intern( void ) throw ();
		Intern(Intern const & src);
		Intern& operator=(Intern const & rhs);

		Form	*makeForm( std::string name_form, std::string target);
		typedef void (Intern::*InternMemFn)( void );
};

#endif
