#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Animal* createAnimals( int nb )
{
	if (nb <= 0)
		return NULL;
	Animal *animal = new Dog[nb / 2];
	Animal *first = animal;
	Animal *cpy = animal;
	animal++;
	if (nb % 2)
		animal = new Cat[(nb / 2) + 1];
	else
		animal = new Cat[nb / 2];
	for (int i = 0; i< nb; ++i)
	{
		std::cout << cpy->getType() << std::endl;
		cpy++;
	}
	return (first);

}

int main(void)
{
	// const Animal* d = new Dog();
	// const Animal* c = new Cat();

	int nb = 10;

	Animal	*animal = createAnimals(nb);
	// Animal	*animal = new Dog[nb / 2];
	// animal = new Cat[nb / 2];

	// Animal *cpy = animal;
	// for (int i = 0; i< nb; ++i)
	// {
	// 	std::cout << cpy->getType() << std::endl;
	// 	cpy++;
	// }
	
	// Animal a = *animal[2];
	// Animal b = *animal[2];
	// Animal c = *animal[2];
	delete [] animal;

	// Dog basic;
	// Dog tmp = basic;
	// delete c;//should not create a leak
	// delete d;
	return (0);
}
