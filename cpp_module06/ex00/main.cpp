#include <Cast.hpp>

int	main(int ac, const char *av[])
{
	if (ac != 2)
		return 0;
	Cast cast(av[1]);
	cast.print_result(av[1]);
	return 0;
}
