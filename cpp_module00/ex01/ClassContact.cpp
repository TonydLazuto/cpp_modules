/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:20:11 by aderose           #+#    #+#             */
/*   Updated: 2021/12/02 13:20:13 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact::Contact( void ) {
	std::cout << "Contact Constructor called" << std::endl;

}
Contact::~Contact( void ) {
	std::cout << "Contact Destructor called" << std::endl;
}

void	Contact::setFirstName(std::string firstName) {
	this->_firstName = firstName;
}
void	Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
}
void	Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
}
void	Contact::setPhoneNumber(int phoneNumber) {
	this->_phoneNumber = phoneNumber;
}
void	Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName( void ) {
	return this->_firstName;
}
std::string	Contact::getLastName( void ) {
	return this->_lastName;
}
std::string	Contact::getNickname( void ) {
	return this->_nickname;
}
int			Contact::getPhoneNumber( void ) {
	return this->_phoneNumber;
}
std::string	Contact::getDarkestSecret( void ) {
	return this->_darkestSecret;
}

void	Contact::checkInteger( void ) {

}

void	Contact::addContact( void ) {

	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		strPhoneNumber;
	int				phoneNumber;
	std::string		darkestSecret;

	std::cout << "Enter your first name : ";
	std::cin >> firstName;
	std::cout << "Enter your last name : ";
	std::cin >> lastName;
	std::cout << "Enter your nickname : ";
	std::cin >> nickname;
	std::cout << "Enter your phone number : ";
	std::cin >> strPhoneNumber;
	//protect
	std::cout << "Enter your darkest secret : ";
	std::cin >> darkestSecret;
	std::cout << std::endl;

	setFirstName(firstName);
	setLastName(lastName);
	setNickname(nickname);
	setPhoneNumber(phoneNumber);
	setDarkestSecret(darkestSecret);
}