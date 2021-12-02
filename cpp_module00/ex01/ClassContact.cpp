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

Contact::Contact( std::string firstName, std::string lastName,
				std::string nickname, int phoneNumber,
				std::string darkestSecret ) {
	std::cout << "Contact Constructor called" << std::endl;
	setFirstName(firstName);
	setLastName(lastName);
	setNickname(nickname);
	setPhoneNumber(phoneNumber);
	setDarkestSecret(darkestSecret);
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
