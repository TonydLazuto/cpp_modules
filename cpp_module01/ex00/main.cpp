#include "Zombie.hpp"

int     main( void ) {
    Zombie *z = new Zombie[5];
    randomChump("rz1");
    randomChump("rz2");
    randomChump("rz3");

    Zombie *z2 = newZombie("z2");
    z2->announce();
    Zombie z3("z3");
    z3.announce();
    delete [] z;
    delete z2;
    return 0;
}