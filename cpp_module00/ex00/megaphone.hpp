/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:16:35 by aderose           #+#    #+#             */
/*   Updated: 2021/12/03 10:49:14 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
# define MEGAPHONE_HPP

#include <iostream>
#include <string.h>

class Megaphone {

public :

	Megaphone( void );
	~Megaphone( void );

	static void    print_empty( void );
	static void    print_uppercase( std::string str, int len );

};

#endif
