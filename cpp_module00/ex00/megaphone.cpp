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

void    Megaphone::print_uppercase( std::string str ) {

    std::locale loc;
    for (std::string::size_type i=0; i < str.length(); ++i)
        std::cout << std::toupper(str[i],loc);
    std::cout << ' ';

}

