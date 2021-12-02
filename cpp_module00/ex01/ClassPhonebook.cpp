/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:38:15 by aderose           #+#    #+#             */
/*   Updated: 2021/12/02 13:21:13 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

Phonebook::Phonebook( void ) {
	std::cout << "Contacts Constructor called" << std::endl;
}

Phonebook::~Phonebook( void ) {
	std::cout << "Contacts Destructor called" << std::endl;
}

int     Phonebook::getNbContacts( void ) {

	return Phonebook::_nbContacts;

}

int     Phonebook::_nbContacts = 0;

int		Phonebook::addContact( void ) {

	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	int				phoneNumber;
	std::string		darkestSecret;

	std::cout << "Enter your first name : ";
	std::cin >> firstName;
	std::cout << "Enter your last name : ";
	std::cin >> lastName;
	std::cout << "Enter your nickname : ";
	std::cin >> nickname;
	std::cout << "Enter your phone number : ";
	std::cin >> phoneNumber;
	std::cout << "Enter your darkest secret : ";
	std::cin >> darkestSecret;

	Contact newContact(firstName, lastName, nickname,
			phoneNumber, darkestSecret);
	this->myContacts.push_back(newContact);
	Phonebook::_nbContacts += 1;
}
