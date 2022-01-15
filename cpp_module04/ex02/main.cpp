#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main(void)
{
	int	arraySize = 10;
	int i = 0;

	AAnimal	*animals[10];
	while (i < arraySize / 2)
	{
		animals[i] = new Dog();
		i++;
	}
	Dog basic("Doggydog");
	{
		Dog tmp = basic;
	}
	while (i < arraySize)
	{
		animals[i] = new Cat();
		i++;
	}
	Dog adog;
	Dog otherdog(adog);
	Dog thirdog = adog;
	adog.setBrainIdea("I'm adog", 0);
	otherdog.setBrainIdea("I'm otherdog the deep copy of adog", 0);
	thirdog.setBrainIdea("I'm thirdog the assignement of adog", 0);
	std::cout << "Adress adog : " << adog.getBrain() << std::endl;
	std::cout << "Adress otherdog : " << otherdog.getBrain() << std::endl;
	std::cout << "Adress thirdog : " << thirdog.getBrain() << std::endl;
	std::cout << adog.getBrainIdea(0) << std::endl;
	std::cout << otherdog.getBrainIdea(0) << std::endl;
	std::cout << thirdog.getBrainIdea(0) << std::endl;

	Cat acat;
	Cat othercat(acat);
	Cat thirdcat = acat;
	acat.setBrainIdea("I'm acat", 0);
	othercat.setBrainIdea("I'm othercat the deep copy of acat", 0);
	thirdcat.setBrainIdea("I'm thirdcat the assignement of acat", 0);
	std::cout << "Adress acat : " << acat.getBrain() << std::endl;
	std::cout << "Adress othercat : " << othercat.getBrain() << std::endl;
	std::cout << "Adress thirdcat : " << thirdcat.getBrain() << std::endl;
	std::cout << acat.getBrainIdea(0) << std::endl;
	std::cout << othercat.getBrainIdea(0) << std::endl;
	std::cout << thirdcat.getBrainIdea(0) << std::endl;

	for (int it = 0; it < arraySize; ++it)
		delete animals[it];

	// AAnimal absAnimalTest;
	// AAnimal *absAnimal = new AAnimal();
	// absAnimal->makeSound();
	// delete absAnimal;
	
	return (0);
}
