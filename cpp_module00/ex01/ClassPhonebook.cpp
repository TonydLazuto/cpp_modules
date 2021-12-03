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
	std::cout << "Phonebook Constructor called" << std::endl;
}

Phonebook::~Phonebook( void ) {
	std::cout << "Phonebook Destructor called" << std::endl;
}

int     Phonebook::getNbContacts( void ) {
	return Phonebook::_nbContacts;
}

int     Phonebook::_nbContacts = 0;

void	Phonebook::incNbContacts( void ) {
	Phonebook::_nbContacts++;
}

void	Phonebook::printField( std::string str ) {
		if (!str.empty())
		{
			if (str.length() > 10) {
				str.resize(10);
				str.at(9) = '.';
			}
			std::cout << std::setw(10) << str;
		}
}

void	Phonebook::search( int specific ) {
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10);
		std::string firstName = this->contact[i].getFirstName();
		this->printField(firstName);
		std::cout << "|";
		std::string lastName = this->contact[i].getLastName();
		this->printField(lastName);
		std::cout << "|";
		std::string nickname = this->contact[i].getNickname();
		this->printField(nickname);
		std::cout << std::endl;
	}
}
