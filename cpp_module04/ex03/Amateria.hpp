#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
#include <iostream>

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria( void );
		virtual ~AMateria( void );
		AMateria(AMateria const & src);
		AMateria& operator=(AMateria const & rhs);

		AMateria(std::string const & type);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter const& target);
};

#endif
