/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:20:27 by aderose           #+#    #+#             */
/*   Updated: 2021/12/02 13:20:29 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLASSCONTACT_HPP_
# define _CLASSCONTACT_HPP_

# include <iostream>

class Contact {

public :

	Contact(std::string firstName, std::string lastName,
				std::string nickname, int phoneNumber, std::string darkestSecret);
	~Contact( void );

	void	setFirstName(std::string firstName);
	void	setLastName(std::string lastName);
	void	setNickname(std::string nickname);
	void	setPhoneNumber(int phoneNumber);
	void	setDarkestSecret(std::string darkestSecret);

private :

	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickname;
	int				_phoneNumber;
	std::string		_darkestSecret;

};

#endif
