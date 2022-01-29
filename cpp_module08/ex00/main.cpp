#include "easyfind.hpp"
#include <vector>
#include <list>
#include <stack>

/**
 * Map and Set have multiple types
 * this can't work here.
 */

int	main(void)
{
	std::vector<int> v (4, 100);
	std::list<int> lst(2);
	lst.push_back(100);
	lst.push_back(200);
	lst.push_back(300);
	lst.push_back(400);
	
	std::stack<int> stack;
	try
	{
		easyfind< std::vector<int> >(v, 100);
		easyfind< std::list<int> >(lst, 100);
		easyfind< std::stack<int> >(stack, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}
