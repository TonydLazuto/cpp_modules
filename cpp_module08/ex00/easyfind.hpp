#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>
#include <iostream>

template < typename T >
void	easyfind(T const& container, int nb)
{
	typename T::const_iterator it;
	if (!*it)
		throw std::exception();
	for (it = container.begin();
		it != container.end(); ++it)
	{
		if (*it == nb)
		{
			std::cout << "Find it!" << std::endl;
			return ;
		}
	}
	if (it == container.end())
		throw std::exception();
}

#endif
