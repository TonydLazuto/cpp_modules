#include "Zombie.hpp"

int     main( void ) {
    Zombie *z = new Zombie[5];
    Zombie *z2 = newZombie("z2");
    z2->announce();
    randomChump("Random rz1");
    randomChump("Random rz2");
    randomChump("Random rz3");

    Zombie z3;
    z3.setName("z3");
    z3.announce();
    delete [] z;
    delete z2;
    return 0;
}