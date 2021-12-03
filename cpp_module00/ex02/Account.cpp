/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:32:42 by aderose           #+#    #+#             */
/*   Updated: 2021/12/03 12:32:44 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account( int initial_deposit ) {

	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";" \
	<< "amount:" << checkAmount()  << ";"
	<< "created" << std::endl ;
	Account::_nbAccounts++;
}
Account::~Account( void ) {
	std::cout << "index:" << this->_accountIndex << ";" \
	<< "amount:" << checkAmount()  << ";"
	<< "closed" << std::endl ;
	Account::_nbAccounts--;
}


int		Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	std::cout << "accounts:" << getNbAccounts() << ";" \
	<< "total:" << getTotalAmount()  << ";" \
	<< "deposits:" << getNbDeposits()  << ";" \
	<< "withdrawals:" << getNbWithdrawals()  << std::endl ;
}


void	Account::makeDeposit( int deposit ) {
	if (getTotalAmount() > 0)
		this->_totalAmount -= this->_amount;
	this->_amount += deposit;
	this->_totalNbDeposits++;
	this->_totalAmount += this->_amount;
	this->_nbDeposits = deposit;
}
bool	Account::makeWithdrawal( int withdrawal ) {
	if (this->_nbWithdrawals <= this->_amount)
	{
		if (getTotalAmount() > 0)
			this->_totalAmount -= this->_amount;
		this->_amount -= withdrawal;
		this->_totalNbWithdrawals++;
		this->_totalAmount += this->_amount;
		this->_nbWithdrawals = withdrawal;
		return true;
	}
	return true;
}
int		Account::checkAmount( void ) const {
	return this->_amount;
}
void	Account::displayStatus( void ) const {

	std::cout << "index:" << "?" << ";" \
	<< "amount:" << checkAmount()  << ";" \
	<< std::endl ;

	// << "deposits:" <<   << ";"
	// << "withdrawals:" << getNbWithdrawals()  << std::endl ;
}

void	_displayTimestamp( void ) {

}

int		Account::_nbAccounts = 0;