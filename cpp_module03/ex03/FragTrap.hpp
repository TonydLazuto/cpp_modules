#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap : virtual public ClapTrap {

	public :

		FragTrap( void );
		~FragTrap( void );
		FragTrap( FragTrap const& src );
		FragTrap& operator=( FragTrap const& rhs );
		FragTrap( std::string name );

        void    highFivesGuys(void) const;

};

#endif