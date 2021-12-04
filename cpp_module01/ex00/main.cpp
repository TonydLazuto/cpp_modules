#include "Zombie.hpp"

int     main( void ) {
    Zombie *z = new Zombie[5];
    Zombie *z2 = newZombie("z2");
    z2->announce();
    randomChump("Z from ramdomChump1");
    randomChump("Z from ramdomChump2");
    randomChump("Z from ramdomChump3");

    Zombie z3;
    z3.setName("z3");
    z3.announce();
    delete [] z;
    delete z2;
    return 0;
}