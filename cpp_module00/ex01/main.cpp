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

int     main(void)
{
	Phonebook	phonebook;
	std::string buf;

	// for (int i= 0; i < 8; i++)
	// {
	// 	phonebook.contact[i].setFirstName("John");
	// 	phonebook.contact[i].setLastName("Doe");
	// 	phonebook.contact[i].setNickname("jd");
	// 	phonebook.contact[i].setPhoneNumber(619);
	// 	phonebook.contact[i].setDarkestSecret("Gibberish");
	// }
	while (1)
	{
		std::cout << "Choose a command [ADD, SEARCH, EXIT] : ";
		std::cin >> buf;
		if (buf.compare("ADD") == 0)
		{
			if (phonebook.getNbContacts() < 8)
			{
				std::cout << phonebook.getNbContacts() << std::endl;
				phonebook.contact[phonebook.getNbContacts()].addContact();
				phonebook.incNbContacts();
			}
			else
				std::cout << "Only 8 contacts can be registered." << std::endl;
		}
		else if (buf.compare("SEARCH") == 0)
		{
			phonebook.search();
			// std::cout << "nb contacts : " << phonebook.getNbContacts() << std::endl;			
		}
		else if (buf.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Only : [ADD, SEARCH, EXIT] are possibles !" << std::endl;
	}
	return (0);
}
