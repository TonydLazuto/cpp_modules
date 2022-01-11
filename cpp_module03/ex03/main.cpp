#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main ( void )
{
	ClapTrap warrior("Clap Warrior");
	ClapTrap b(warrior);
	ClapTrap c = warrior;
	ClapTrap const d("Clap Thief");
	ClapTrap lambda("Clap Lambda");

	// lambda.display_stats();
	
	// warrior.attack(lambda.getName());
	
	// lambda.takeDamage(warrior.getAttackDamage());
	// lambda.display_stats();
	
	// lambda.beRepaired(2);
	// lambda.display_stats();
	
	std::cout << warrior << std::endl << std::endl;

	ScavTrap palouf("Scav Palouf");
	palouf.display_stats();

	palouf.attack(warrior.getName());
	warrior.takeDamage(palouf.getAttackDamage());
	warrior.display_stats();

	palouf.guardGate();

	FragTrap assassin("Frag Assassin");
	assassin.display_stats();

	assassin.attack(palouf.getName());
	palouf.takeDamage(assassin.getAttackDamage());
	assassin.attack(palouf.getName());
	palouf.takeDamage(assassin.getAttackDamage());
	assassin.attack(palouf.getName());
	palouf.takeDamage(assassin.getAttackDamage());
	assassin.attack(palouf.getName());
	palouf.takeDamage(assassin.getAttackDamage());
	assassin.attack(palouf.getName());
	palouf.takeDamage(assassin.getAttackDamage());

	palouf.display_stats();

	assassin.highFivesGuys();

	DiamondTrap ultime("Diamond ultime");
	ultime.attack(assassin.getName());
	assassin.takeDamage(ultime.getAttackDamage());
	ultime.attack(assassin.getName());
	assassin.takeDamage(ultime.getAttackDamage());

	ultime.whoAmI();
	ultime.highFivesGuys();
	ultime.guardGate();

	DiamondTrap ultime2 = ultime;
	ultime2.display_stats();
	return (0);
}