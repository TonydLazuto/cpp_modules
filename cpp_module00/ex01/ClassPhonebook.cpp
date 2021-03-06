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

int     Phonebook::_nbContacts = 8;


void	Phonebook::printField( std::string str ) {
		if (!str.empty()) {
			if (str.length() > 10) {
				str.resize(10);
				str.at(9) = '.';
			}
		}
		std::cout << std::setw(10) << str;
}

void	Phonebook::search( void ) {
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10);
		this->printField(this->contact[i].getFirstName());
		std::cout << "|";
		this->printField(this->contact[i].getLastName());
		std::cout << "|";
		this->printField(this->contact[i].getNickname());
		std::cout << std::endl;
	}
}

int		Phonebook::checkIndex( std::string index ) {
	if (index.length() != 1) {
		std::cout << "Index to long." << std::endl;
		return 0;
	}
	if (!isdigit(index.at(0))){
		std::cout << "Index is not digit." << std::endl;
		return 0;
	}
	if (index.at(0) < '0' || index.at(0) > '7'){
		std::cout << "Index is not among phonebook accounts." << std::endl;
		return 0;
	}
	return 1;
}

void	Phonebook::fullInfo( std::string index ) {
	int i;

	i = atoi(index.c_str());
	std::cout << std::setw(15) << "index " << ": " << i << std::endl;
	std::cout << std::setw(15) << "first name " << ": ";
	std::cout << this->contact[i].getFirstName() << std::endl;
	std::cout << std::setw(15) << "last name " << ": ";
	std::cout << this->contact[i].getLastName() << std::endl;
	std::cout << std::setw(15) << "nickname " << ": ";
	std::cout << this->contact[i].getNickname() << std::endl;
	std::cout << std::setw(15) << "phone number " << ": ";
	std::cout << this->contact[i].getPhoneNumber() << std::endl;
	std::cout << std::setw(15) << "darkest secret " << ": ";
	std::cout << this->contact[i].getDarkestSecret() << std::endl;
}

void	Phonebook::checkInteger( std::string str ) {
	if (str.length() != 10) {
		std::cout << "Becareful the phone number has not 10 numbers." << std::endl;
		return ;
	}
	for ( std::string::iterator it=str.begin(); it!=str.end(); ++it) {
		if (!isdigit(*it)) {
			std::cout << "Becareful some characters are not digit." << std::endl;
			break ;
		}
	}
}

void	Phonebook::addContact( void ) {

	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		phoneNumber;
	std::string		darkestSecret;
	int				num;

	std::cout << "Enter your first name : ";
	std::cin >> firstName;
	std::cout << "Enter your last name : ";
	std::cin >> lastName;
	std::cout << "Enter your nickname : ";
	std::cin >> nickname;
	std::cout << "Enter your phone number : ";
	std::cin >> phoneNumber;
	this->checkInteger(phoneNumber);
	std::cout << "Enter your darkest secret : ";
	std::cin >> darkestSecret;
	std::cout << std::endl;

	num = this->getNbContacts();
	this->contact[num].setFirstName(firstName);
	this->contact[num].setLastName(lastName);
	this->contact[num].setNickname(nickname);
	this->contact[num].setPhoneNumber(phoneNumber);
	this->contact[num].setDarkestSecret(darkestSecret);
	Phonebook::_nbContacts++;
}