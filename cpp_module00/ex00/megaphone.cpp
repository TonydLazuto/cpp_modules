/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:40:05 by aderose           #+#    #+#             */
/*   Updated: 2021/11/28 18:26:05 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <locale>

class Megaphone {

public :

    Megaphone( void );
    ~Megaphone( void );

    void    print_empty( void );
    void    print_uppercase( std::string str );

};

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

}

int     main(int ac, char *av[]) {

    Megaphone obj;

    if (ac == 1)
    {
        obj.print_empty();
        return (0);
    }
    av++;
    while (*av)
    {
        std::string str(*av);
        obj.print_uppercase(str);
        av++;
    }
    std::cout << std::endl;
    return (0);
}
