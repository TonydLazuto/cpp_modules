#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	// const Animal* d = new Dog();
	// const Animal* c = new Cat();

	Animal	*animal[6];
	for (int i = 0; i < 3; i++)
		animal[i] = new Dog();
	for (int i = 3; i < 6; i++)
		animal[i] = new Cat();

	// Animal a = *animal[2];
	// Animal b = *animal[2];
	// Animal c = *animal[2];
	for (int i = 0; i < 6; i++)
		delete animal[i];

	// delete c;//should not create a leak
	// delete d;
	return (0);
}