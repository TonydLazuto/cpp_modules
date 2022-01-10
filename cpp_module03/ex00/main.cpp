#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap warrior("Clap Warrior");
	ClapTrap b(warrior);
	ClapTrap c = warrior;
	ClapTrap const d("Clap Thief");
	ClapTrap lambda("Clap Lambda");

	// a.display_stats();
	lambda.display_stats();
	
	warrior.attack(lambda.getName());
	// a.display_stats();
	// e.display_stats();
	
	lambda.takeDamage(warrior.getAttackDamage());
	lambda.display_stats();
	
	lambda.beRepaired(2);
	lambda.display_stats();
	
	std::cout << a << std::endl;

	return (0);
}