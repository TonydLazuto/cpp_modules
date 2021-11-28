/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContacts.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:38:15 by aderose           #+#    #+#             */
/*   Updated: 2021/11/28 17:10:41 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContacts.hpp"

int	my_strcmp(char *str1, char *str2)
{
	size_t  i;
	size_t	n;

	if (ft_strlen(s1) <= ft_strlen(s2))
		n = ft_strlen(s1);
	else
		n = ft_strlen(s2);
	i = 0;
	if (n == -1)
		return (0);
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n - 1)
		i++;
	if (str1[i] != str2[i])
	{
		if (str1[i] - str2[i] > 0)
			return (1);
		else
			return (-1);
	}
	return (0);
}

int     main(void)
{
    char buf[512];

    while (1)
    {
        std::cout << "Choose a command [ADD, SEARCH, EXIT] : ";
        std::cin >> buf;
        if (my_strcmp(buf, "ADD") == 0)
        {
        }
        else if (my_strcmp(buf, "SEARCH") == 0)
        {
        }
        else if (my_strcmp(buf, "EXIT") == 0)
        {
        }
        else
            std::cout << "I said choose between [ADD, SEARCH, EXIT] :@" >> std::endl;
    }
    return (0);
}
