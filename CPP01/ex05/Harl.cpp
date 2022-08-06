/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:19:51 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/06 17:14:28 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	std::cout << "Constructor called " << std::endl;
	return ;
}

Harl::~Harl( void )
{
	std::cout << "Destructor called " << std::endl;
	return ;
}

void	Harl::complain( std::string level )
{
	int				i;
	void			(Harl::*ptrF[4])( void ); // declare pointeur sur fonction
	std::string		lvl[4] = {
					"debug",
					"info",
					"warning",
					"error"
	};

	ptrF[0] = (&Harl::_debug);
	ptrF[1] = (&Harl::_info);
	ptrF[2] = (&Harl::_warning);
	ptrF[3] = (&Harl::_error);
	i = -1;
	while( ++i < 4 && lvl[i] == level)
	{
		std::cout << "ici" << std::endl;
		(this->*ptrF[i])();
	}
	
}

void	Harl::_debug( void )
{
	std::cout << "I love having extra cheese for my XL-double-cheese burger. I really do!" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "I can't believe adding extra cheese costs more money. You didn't put enough cheese in my burger!" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "I think I deserve to have some extra cheese for free." << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}