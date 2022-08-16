/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:44:39 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 17:00:04 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
/**********************************************/
/*			       CONSTRUCTORS               */
/* ********************************************/
Character::Character(void)
{
	this->_name = "unamed";
	// for(int i = 0; i < 4; i++)
	// 	this->_inventory[i] = NULL;
	std::cout << YELLOW << "Character default constructor called" << std::endl;
	return;
}

Character::Character(std::string name)
{
	this->_name = name;
	std::cout << YELLOW << "Character name constructor called" << std::endl;
	return;
}

Character::Character(const Character &src)
{
	std::cout << YELLOW << "Character copy constructor called" << std::endl;
	*this = src;
}

Character & Character::operator=(const Character &src)
{
	std::cout << YELLOW << "Character copy assignement constructor called" << std::endl;
	this->_name = src.getName();
	return (*this);
}

/**********************************************/
/*			       GETTER                     */
/* ********************************************/
std::string const & Character::getName(void) const
{
	return (this->_name);
}

/**********************************************/
/*			       FUNCTIONS                  */
/* ********************************************/
// void Character::equip(AMateria* m)
// {
			
// }

// void Character::unequip(int idx)
// {
	
// }

// void Character::use(int idx, ICharacter& target)
// {
	
// }

/**********************************************/
/*			       DESTRUCTOR                 */
/* ********************************************/
Character::~Character(void)
{
	std::cout << YELLOW << "Character destructor called" << std::endl;
	return;
}