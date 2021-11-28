/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContacts.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:32:12 by aderose           #+#    #+#             */
/*   Updated: 2021/11/28 17:10:43 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLASSCONTACTS_H__
# define __CLASSCONTACTS_H__

# include <iostream>

class Contacts {


public:

    Contacts( void );
    ~Contacts( void );

	static int	getNbContacts( void );
    
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:

	static int	_nbContacts;

	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;
     first name, last name, nickname,
phone number,darkest secret
	Account( void );

};



# endif
