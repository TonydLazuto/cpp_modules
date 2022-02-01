#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> v (4, 100);
	std::list<int> lst(2);
	std::deque<int> deq(2, 100);
	lst.push_back(100);
	lst.push_back(200);
	lst.push_back(300);
	lst.push_back(400);
	
	std::map<std::string, int> mymap;
	mymap["one"] = 1;
	mymap["two"] = 2;
	mymap["three"] = 3;

	int myints[]= {10,20,30,40,50};
	
	std::set<int> myset (myints,myints+5);
	try
	{
		easyfind< std::vector<int> >(v, 100);
		easyfind< std::list<int> >(lst, 200);
		easyfind< std::deque<int> >(deq, 100);
		easyfind< std::map<std::string, int> >(mymap, 2);
		easyfind< std::set<int> >(myset, 30);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}
