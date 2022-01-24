#include <iostream>
#include <string>
#include <Cast.hpp>

int	main(int ac, const char *av[])
{
	int			i = 0;
	int			type = Cast::DT_DOUBLE;

	if (ac != 2)
		return 0;
	type = Cast::getType(av[1], type);
	if (type == -1)
		return 0;

	Cast mycast(type);

	std::cout << mycast << std::endl;

	
	
	return 0;
}
