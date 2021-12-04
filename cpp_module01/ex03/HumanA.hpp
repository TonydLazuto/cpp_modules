#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private :
		std::string _name;
		Weapon*		_weapon;

	public :

		HumanA( std::string name, Weapon weapon );
		~HumanA( void );
		
		void attack( void );
		void setWeapon( Weapon weapon );
};
#endif