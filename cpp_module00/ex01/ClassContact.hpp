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

	Contact( void );
	~Contact( void );

	void	setFirstName( std::string firstName );
	void	setLastName( std::string lastName );
	void	setNickname( std::string nickname );
	void	setPhoneNumber( std::string phoneNumber );
	void	setDarkestSecret( std::string darkestSecret );

	std::string	getFirstName( void );
	std::string	getLastName( void );
	std::string	getNickname( void );
	std::string	getPhoneNumber( void );
	std::string	getDarkestSecret( void );
	void		addContact( void );
	void		checkInteger( std::string phoneNumber );

private :

	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickname;
	std::string		_phoneNumber;
	std::string		_darkestSecret;

};

#endif
