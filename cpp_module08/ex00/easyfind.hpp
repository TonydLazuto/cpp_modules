#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <typeinfo> // operator typeid

class ContainerException: public std::exception 
{
	virtual const char* what() const throw()
	{
		return ("Not found.");
	}
};

template<typename T>
void	easyfind2( T &container, int nb)
{
	typename T::iterator val;

	val = find(container.begin(), container.end(), nb);
	if (val == container.end())
		throw std::exception();
	std::cout << "Value find in container: " << *val << std::endl;
}

template <>
void	easyfind2(std::map<std::string, int>& map, int nb)
{
	std::map<std::string, int>::iterator it = map.begin();
	while (it != map.end())
	{
		if (it->second == nb)
		{
			std::cout << "Value find in container_map: " << it->second << std::endl;
			return ;
		}
		++it;
	}
	if (it == map.end())
		throw std::exception();
}

// template <>
// void	easyfind2(std::stack<int> const& mystack, int nb)
// {
// 	(void)nb;
// 	std::stack<int> *ptrstack = &(const_cast<std::stack<int>&>(mystack));
// 	for (int i = 0; i < mystack.size(); i++)
// 	{
// 		// ptrstack->front();
// 		std::cout << "Through stack : " << ptrstack->front() << std::endl;
// 		// ptrstack -= ;
		
// 	}

// 	if (!mystack.size())
// 		throw std::exception();
// }

template < typename T >
void	easyfind(T & container, int nb)
{
	if (typeid(T) == typeid(std::map<std::string, int>))
		easyfind2<>(container, nb);
	else
		easyfind2<T>(container, nb);
}

#endif
