/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:16:35 by aderose           #+#    #+#             */
/*   Updated: 2021/12/02 10:17:27 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
# define MEGAPHONE_HPP

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

#endif
