/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:43:54 by aderose           #+#    #+#             */
/*   Updated: 2021/12/02 11:46:14 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"

int     main(void)
{
	Phonebook	phonebook;
	std::string buf;

	while (1)
	{
		std::cout << "Choose a command [ADD, SEARCH, EXIT] : ";
		std::cin >> buf;
		if (buf.compare("ADD") == 0)
		{
			phonebook.addContact();
		}
		else if (buf.compare("SEARCH") == 0)
		{
			for (std::list<Contact>::iterator it=phonebook.myContacts.begin();
			 it != phonebook.myContacts.end(); ++it)
    		std::cout << ' ' << *it;
		}
		else if (buf.compare("EXIT") == 0)
			break ;
		else
			std::cout << "I said choose between [ADD, SEARCH, EXIT] :@" >> std::endl;
	}
	return (0);
}

