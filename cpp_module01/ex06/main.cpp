#include "Karen.hpp"


int	main ( int ac, char *av[] ) {

	if (ac != 2)
	{
		std::cout << "Wrong amount of args." << std::endl;
		return 1;
	}
	Karen		k;
	std::string	mylevel(av[1]);
	k.complain(mylevel);
	return 0;
}
