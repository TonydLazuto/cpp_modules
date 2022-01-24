#include <iostream>
#include <string>
#include <Cast.hpp>

int	main(int ac, const char *av[])
{
	if (ac != 2)
		return 0;
	std::string	arg(av[1]);
	Cast cast(arg);

	std::cout << cast << std::endl;

	
	
	return 0;
}
