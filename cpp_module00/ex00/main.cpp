/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:14:29 by aderose           #+#    #+#             */
/*   Updated: 2021/12/03 10:49:21 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

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
