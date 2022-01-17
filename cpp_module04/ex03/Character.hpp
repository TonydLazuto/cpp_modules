#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "None.hpp"

class AMateria;

class Character : public ICharacter
{
	protected:
		std::string	_name;
		AMateria* 	_inventory[4];

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

		virtual AMateria* 	clone() const;
};

#endif
