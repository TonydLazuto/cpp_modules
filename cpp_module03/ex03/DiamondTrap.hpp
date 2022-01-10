#ifndef DiamondTRAP_HPP
# define DiamondTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {

    private :
        std::string _name;

	public :

		DiamondTrap( void );
		~DiamondTrap( void );
		DiamondTrap( DiamondTrap const& src );
		DiamondTrap&	operator=( DiamondTrap const& rhs );
		DiamondTrap( std::string name );

        void    whoAmI( void ) const;

		void	display_stats( void ) const;
};

#endif