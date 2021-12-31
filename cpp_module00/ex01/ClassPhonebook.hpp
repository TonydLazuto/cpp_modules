/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:32:12 by aderose           #+#    #+#             */
/*   Updated: 2021/12/02 13:21:17 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLASSPHONEBOOK_HPP_
# define _CLASSPHONEBOOK_HPP_

# include <iostream>
# include <iomanip>
# include <list>
# include <stdlib.h>
# include "ClassContact.hpp"

class Phonebook {


public:

	Phonebook( void );
	~Phonebook( void );

	Contact		contact[8];

	static int	getNbContacts( void );
	void		search( void );
	void		printField( std::string str );
	int			checkIndex( std::string index );
	void		fullInfo( std::string index );

	void		addContact( void );
	void		checkInteger( std::string phoneNumber );

private:

	static int	_nbContacts;

};

#endif
