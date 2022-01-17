#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
#include <iostream>

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

		virtual std::string const&	getName() const override;
		virtual void				equip(AMateria* m) override;
		virtual void				unequip(int idx) override;
		virtual void				use(int idx, ICharacter& target) override;
};

#endif
