/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:34:36 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/23 14:48:14 by dvallien         ###   ########.fr       */
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

	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = i;
	this->_displayTimestamp();
	_totalAmount += this->_amount;
	std::cout << "index:"<< this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";created" << std::endl;
	_nbAccounts++;
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
	std::cout << "withdrawals:"<< _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int d_amount = this->_amount;

	_displayTimestamp();
	d_amount += deposit;
	_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << d_amount << ";";
	this->_nbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount = d_amount;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = this->_amount;
	int	w_amount;
	
	_displayTimestamp();
	w_amount = p_amount - withdrawal;
	if (withdrawal > p_amount)
	{
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
	}
	else
	{
		_totalAmount -= withdrawal;
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << w_amount << ";";
		this->_nbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_totalNbWithdrawals++;
		this->_amount -= withdrawal;
	}
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
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

