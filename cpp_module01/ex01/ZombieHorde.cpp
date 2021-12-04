#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	if (N <= 0)
		return NULL;
	Zombie *z = new Zombie[N];
	Zombie* cpy = z;
	for (int i = 0; i < N; i++)
	{
		cpy->setName(name);
		cpy++;
	}
	return z;

}
