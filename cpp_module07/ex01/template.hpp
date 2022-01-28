#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template < typename T, typename U >
void	iter(T elet[], U len, void (*f)(T const&))
{
	if (!elet || len <= 0 || !f)
		return ;
	for (U i = 0; i < len; ++i)
	{
		f(elet[i]);
	}
}

/****************************************
 *		 Template : show_multiply		*
 ****************************************/

template < typename T >
void	show_multiply(T nb)
{
	std::cout << "Multiply type T : " << nb * 5 << std::endl;
}

template <>
void	show_multiply(float nb)
{
	std::cout << "Multiply float : " << nb * 2.5 << std::endl;
}

template <>
void	show_multiply(int nb)
{
	std::cout << "Multiply int : " << nb * 2 << std::endl;
}

/****************************************
 *		 Template : show_divide			*
 ****************************************/

template < typename T >
void	show_divide(T elet)
{
	(void)elet;
	std::cout << "Divide type T : "<< elet / 5 << std::endl;
}

template <>
void	show_divide(float elet)
{
	std::cout << "Divide float : "<< elet / 2.0 << std::endl;
}

template <>
void	show_divide(int elet)
{
	std::cout << "Divide int : " << elet / 2 << std::endl;
}

#endif
