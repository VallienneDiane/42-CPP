/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:34:36 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/27 16:24:14 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	static int i = 0;

	this->_accountIndex = i;
	this->_amount = initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";created" << std::endl;
	i++;
	return;
}

Account::~Account( void )
{
	this->_displayTimestamp();
	
	std::cout << "index:"<< this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";closed" << std::endl;
	return;
}

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	time_t time;
	char		buffer[20];
	std::tm*	now;

	time = std::time(0);
	now = std::localtime(&time);
	std::strftime(buffer, 20, "[%Y%m%d_%H%M%S] ", now);
	std::cout << buffer;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();

	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:"<<  _totalAmount << ";";
	std::cout << "deposits:"<< _totalNbDeposits << ";";
	std::cout << "withdrawals:"<< _totalNbWithdrawals << ";" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int		amount = this->_amount;
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << amount << ";";
	std::cout << "deposits:" << deposit << std::endl;
	std::cout << "amount:" << this->_totalAmount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << ";";
}

bool Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	return (0);
}

int	Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const 
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}

