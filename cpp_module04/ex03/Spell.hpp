#ifndef SPELL_HPP
# define SPELL_HPP

# include "AMateria.hpp"

class Spell : public AMateria
{
	public:
		Spell( void );
		virtual ~Spell( void );
		Spell(Spell const & src);
		Spell& operator=(Spell const & rhs);

		virtual AMateria* 	clone() const;
};

#endif
