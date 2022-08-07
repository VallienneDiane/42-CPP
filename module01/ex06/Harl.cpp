/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:19:51 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/07 13:09:44 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	this->_ptrF[0] = (&Harl::_debug);
	this->_ptrF[1] = (&Harl::_info);
	this->_ptrF[2] = (&Harl::_warning);
	this->_ptrF[3] = (&Harl::_error);
	this->_lvl[0] = "DEBUG";
	this->_lvl[1] = "INFO";
	this->_lvl[2] = "WARNING";
	this->_lvl[3] = "ERROR";
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void	Harl::complain( std::string level )
{
	int	i;
	
	i = -1;
	while(++i < 4)
	{
		if (this->_lvl[i] == level)
			break;
	}
	switch(i)
	{
		case 0:
			(void)(this->*_ptrF[0])();
			(void)(this->*_ptrF[1])();
			(void)(this->*_ptrF[2])();
			(void)(this->*_ptrF[3])();
			break;
		case 1:
			(void)(this->*_ptrF[1])();
			(void)(this->*_ptrF[2])();
			(void)(this->*_ptrF[3])();
			break;
		case 2:
			(void)(this->*_ptrF[2])();
			(void)(this->*_ptrF[3])();
			break;
		case 3:
			(void)(this->*_ptrF[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}	
}

void	Harl::_debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra cheese for my XL-double-cheese burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I can't believe adding extra cheese costs more money. You didn't put enough cheese in my burger!" << std::endl;
	std::cout << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra cheese for free." << std::endl;
	std::cout << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}