/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderose <aderose@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:32:42 by aderose           #+#    #+#             */
/*   Updated: 2021/12/03 15:34:05 by aderose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {

	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount()  << ";";
	std::cout << "created" << std::endl;
	this->_totalAmount += this->_amount;
	Account::_nbAccounts++;
}
Account::~Account( void ) {
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount()  << ";";
	std::cout << "closed" << std::endl;
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

	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount()  << ";";
	std::cout << "deposits:" << getNbDeposits()  << ";";
	std::cout << "withdrawals:" << getNbWithdrawals()  << std::endl;

}

void	Account::makeDeposit( int deposit ) {

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << checkAmount()  << ";";
	std::cout << "deposit:" << deposit << ";";
	if (getTotalAmount() > 0)
		this->_totalAmount -= this->_amount;
	this->_amount += deposit;
	this->_totalAmount += this->_amount;
	this->_nbDeposits = 1;
	this->_totalNbDeposits++;
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal ) {

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "withdrawal:";
	if (withdrawal <= this->_amount)
	{
		if (getTotalAmount() > 0)
			this->_totalAmount -= this->_amount;
		this->_amount -= withdrawal;
		this->_nbWithdrawals = 1;
		this->_totalNbWithdrawals++;
		this->_totalAmount += this->_amount;
		std::cout << withdrawal << ";";
		std::cout << "amount:" << checkAmount() << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	else
		std::cout << "refused" << std::endl;
	return true;

}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::displayStatus( void ) const {

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount()  << ";";
	std::cout << "deposits:" << this->_nbDeposits  << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;

}

void	_displayTimestamp( void ) {

	std::cout << "[19920104_091532] ";

}