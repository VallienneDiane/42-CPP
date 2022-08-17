/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:44:39 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/17 16:00:35 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
/**********************************************/
/*			       CONSTRUCTORS               */
/* ********************************************/
Character::Character(void) : _name("unamed")
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << YELLOW << "Character default constructor called" << std::endl;
	return;
}

Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << YELLOW << "Character name constructor called" << std::endl;
	return;
}

Character::Character(const Character &src)
{
	std::cout << YELLOW << "Character copy constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = src;
}

Character & Character::operator=(const Character &src)
{
	this->_name = src.getName();
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i]->clone();
	std::cout << YELLOW << "Character copy assignement constructor called" << std::endl;
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
void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
		{
			std::cout << RED << this->_name << " is already equiped with " << m->getType()  << " at index " << i << std::endl;
			return;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << GREEN << this->_name << " is equiped with " << m->getType()  << " at index " << i << std::endl;
			return;
		}	
	}
}

void Character::unequip(int idx)
{
	if (this->_inventory[idx])
		this->_inventory[idx] = NULL;
	std::cout << ORANGE << this->_name << " unequiped at index " << idx << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	this->_inventory[idx]->use(target);
}

/**********************************************/
/*			       DESTRUCTOR                 */
/* ********************************************/
Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete (this->_inventory[i]);
	std::cout << YELLOW << "Character destructor called" << std::endl;
	return;
}