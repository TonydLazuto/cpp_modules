#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>

class Weapon {
	private :
		std::string _type;

	public :

		Weapon( std::string type );
		Weapon( void );
		~Weapon( void );

		std::string const& 	getType( void );
		void 				setType( std::string type );

};
#endif