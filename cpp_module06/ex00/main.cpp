#include <Cast.hpp>

int	main(int ac, char *av[])
{
	if (ac != 2)
		return 0;
	Cast cast(av[1]);

	std::cout << cast << std::endl;
	
	return 0;
}
