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
# include <list>
# include "ClassContact.hpp"

class Phonebook {


public:

	std::list<Contact> myContacts;
	Phonebook( void );
	~Phonebook( void );

	static int	getNbContacts( void );
	int			addContact( void );

private:

	static int	_nbContacts;

};



#endif
