#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	protected :

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamages;

	public :

		ClapTrap( void );
		~ClapTrap( void );
		ClapTrap( ClapTrap const& src );
		ClapTrap& operator=( ClapTrap const& rhs );
		ClapTrap( std::string name );
		ClapTrap( std::string name , unsigned int _hitPoints,
			unsigned int _energyPoints, unsigned int _attackDamages);

		void 		attack( std::string const& target );
		void 		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

		std::string	getName( void ) const;
		int			getHitPoints( void ) const;
		int			getLifepoints( void ) const;
		int			getAttackDamage( void ) const;

		void		display_stats( void ) const;


};

std::ostream& operator<<( std::ostream& o, ClapTrap const& rhs);

#endif