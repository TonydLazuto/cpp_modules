/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:40:05 by aderose           #+#    #+#             */
/*   Updated: 2021/12/03 10:49:18 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

Megaphone::Megaphone( void ) {
}

Megaphone::~Megaphone( void ) {
}

void    Megaphone::print_empty( void ) {

	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

}

void    Megaphone::print_uppercase( std::string mystr, int len) {

	char	str[len + 1];
	char	upperstr[len + 1];
	int		i;

	i = 0;
	strcpy(str, mystr.c_str());
	while (str[i])
	{
		upperstr[i] = std::toupper(str[i]);
		i++;
	}
	upperstr[len] = '\0';
	std::cout << upperstr;
}
