#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "Bolt.hpp"
# include "Fire.hpp"
# include "Spell.hpp"

class AMateria;

class Character : public ICharacter
{
	protected:
		std::string	_name;
		AMateria* 	_inventory[4];
		AMateria* 	_equip[4];

	public:
		Character( void );
		virtual ~Character( void );
		Character(Character const & src);
		Character& operator=(Character const & rhs);

		Character( std::string name );

		virtual std::string const& getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
