# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Bolt.hpp"
# include "Fire.hpp"
# include "Spell.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "AMateria.hpp"
# include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Fire());
	src->learnMateria(new Bolt());
	src->learnMateria(new Spell());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("bullshit");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("bolt");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	// me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	delete bob;
	delete me;
	delete src;

	return 0;
}
