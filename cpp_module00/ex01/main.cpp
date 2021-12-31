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
	std::string entry;
	std::string index;

	// for (int i= 0; i < 8; i++)
	// {
	// 	phonebook.contact[i].setFirstName("John");
	// 	phonebook.contact[i].setLastName("Doe");
	// 	phonebook.contact[i].setNickname("jd");
	// 	phonebook.contact[i].setPhoneNumber("619");
	// 	phonebook.contact[i].setDarkestSecret("Gibberish");
	// }
	while (1)
	{
		std::cout << "Choose a command [ADD, SEARCH, EXIT] : ";
		std::cin >> entry;
		if (entry.compare("ADD") == 0)
		{
			std::cout << "getNbContacts() : " << phonebook.getNbContacts() << std::endl;
			if (phonebook.getNbContacts() < 8)
				phonebook.addContact();
			else
				std::cout << "Sorry... Already 8 contacts have been registered." << std::endl \
				<< "No more contacts can be added." << std::endl \
				<< "Try another command." << std::endl;
		}
		else if (entry.compare("SEARCH") == 0)
		{
			phonebook.search();
			std::cout << "Which account do you want to check : ";
			std::cin >> index;
			if (phonebook.checkIndex(index))
				phonebook.fullInfo(index);

		}
		else if (entry.compare("EXIT") == 0)
			break ;
		else
			std::cout << "/!\\ Only : [ADD, SEARCH, EXIT] are possible. /!\\" << std::endl;
	}
	return (0);
}
