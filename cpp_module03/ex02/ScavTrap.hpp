#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap : public ClapTrap {

	public :

		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( ScavTrap const& src );
		ScavTrap& operator=( ScavTrap const& rhs );
		ScavTrap( std::string name );

		void	guardGate( void ) const;

		void	display_stats( void ) const;

		void	attack( std::string const& target );
};

#endif