#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include "Weapon.hpp"
# include <iostream>

class HumanB {
	private :
		std::string _name;
		Weapon*		_weapon;
		Weapon		_tmp;

	public :

		HumanB( std::string name, Weapon *weapon );
		HumanB( std::string name );
		~HumanB( void );
		
		void attack( void );
		void setWeapon( Weapon weapon );
};
#endif