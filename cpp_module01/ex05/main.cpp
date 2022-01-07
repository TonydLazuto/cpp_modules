#include "Karen.hpp"


int	main ( int ac, char *av[] ) {

	(void)ac;
	(void)av;

	Karen		k;
	
	k.complain("DEBUG");
	k.complain("INFO");
	k.complain("WARNING");
	k.complain("ERROR");
	// k.complain("qwerty");

	return 0;
}
