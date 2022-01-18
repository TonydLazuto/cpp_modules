#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria( void );
		virtual ~AMateria( void );
		AMateria(AMateria const & src);
		AMateria& operator=(AMateria const & rhs);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter const& target);
};

#endif
