#include <iostream>

template < typename T, typename U >
void	swap(T& x, U& y)
{
	(void)x;
	(void)y;
	std::cout << "Error: Can't <swap> 2 differents type." << std::endl;
}
template < typename T, typename U >
T	min(T x, U y)
{
	(void)x;
	(void)y;
	std::cout << "Error: Can't have <min> for differents type." << std::endl;
	return 0;
}

template < typename T, typename U >
T	max(T x, U y)
{
	(void)x;
	(void)y;
	std::cout << "Error: Can't have <max> for differents type." << std::endl;
	return 0;
}

template < typename T >
void	swap(T& x, T& y)
{

	T tmp = x;
	x = y;
	y = tmp;
}
template < typename T >
T const&	min(T const&  x, T const& y)
{
	return (x < y ? x : y);
}

template < typename T >
T const&	max(T const&  x, T const& y)
{
	return (x > y ? x : y);
}
