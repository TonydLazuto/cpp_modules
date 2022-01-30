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
		return ("Exception: Not found.");
	}
};

template<typename T>
void	easyfind2( T &container, int nb)
{
	typename T::iterator it;

	it = find(container.begin(), container.end(), nb);
	if (it == container.end())
		throw ContainerException();
	std::cout << "Value find in container: " << *it << std::endl;
}

template<typename T>
void	easyfind2( T const &container, int nb)
{
	typename T::const_iterator it;

	it = find(container.begin(), container.end(), nb);
	if (it == container.end())
		throw ContainerException();
	std::cout << "Value find in container: " << *it << std::endl;
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
		throw ContainerException();
}

template <>
void	easyfind2(std::map<std::string, int> const& map, int nb)
{
	std::map<std::string, int>::const_iterator it = map.begin();
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
		throw ContainerException();
}

// template < class T, class Container = deque<T> >
// void	easyfind2(std::stack<T, Container> & mystack, int nb)
// {
// 	std::stack<T, Container>::;
// 	while (stack::value)
// 	{
// 		if (it->second == nb)
// 		{
// 			std::cout << "Value find in container_stack: " << it->second << std::endl;
// 			return ;
// 		}
// 		++it;
// 	}
// 	if (!mystack.size())
// 		throw ContainerException();
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
