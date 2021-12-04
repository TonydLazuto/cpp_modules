#include "Zombie.hpp"

int    main( void ) {

	Zombie	ztest;
	int		N = 10;

	ztest.setName("ztest");

	Zombie *z = zombieHorde(N, "horde");

	Zombie *cpy = z;
	for (int i = 0; i < N; i++)
	{
		cpy->announce();
		cpy++;
	}
	delete [] z;
	ztest.announce();
	return 0;
}