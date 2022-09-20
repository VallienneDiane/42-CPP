/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:31:54 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 11:44:41 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
ClapTrap::ClapTrap(void): _name("noname"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN << "ClapTrap default constructor called : " << this->_name << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN << "ClapTrap name constructor called : " << this->_name << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << GREEN << "ClapTrap copy constructor called : " << this->_name << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitP();
	this->_energyPoints = src.getEnergyP();
	this->_attackDamage = src.getAttackD();
	std::cout << GREEN << "ClapTrap copy assignment operator called : " << this->_name << std::endl;
	return (*this);
}
/**********************************************/
/*			        SETTERS                   */
/* ********************************************/
void		ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void		ClapTrap::setHitP(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void		ClapTrap::setEnergyP(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void		ClapTrap::setAttackP(int attackDamage)
{
	this->_attackDamage = attackDamage;
}
/**********************************************/
/*			        GETTERS                   */
/* ********************************************/
std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitP(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyP(void) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackD(void) const
{
	return (this->_attackDamage);
}
/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0 | this->_energyPoints <= 0)
	{
		std::cout << PURPLE << "ClapTrap " << this->_name << " can't attack cause he is already dead ... ";
		std::cout << PURPLE << "(Life:" << this->_hitPoints << "pts & Energy:" << this->_energyPoints << "pts)" << std::endl;
	}
	else
	{
		std::cout << PURPLE << "ClapTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0 | this->_energyPoints <= 0)
	{
		std::cout << GREY << this->_name << " can't take damage cause he is already dead";
		std::cout << GREY << "(Life:" << this->_hitPoints << "pts & Energy:" << this->_energyPoints << "pts)" << std::endl;
	}
	else
	{
		std::cout << GREY << this->_name << "(Life:" << this->_hitPoints << "pts) take damage of "<< amount << " points !" ;
		this->_hitPoints -= amount;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout << GREY << " (Life:" << this->_hitPoints << "pts)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0 | this->_energyPoints <= 0)
	{
		std::cout << WHITE << this->_name << " can't be repaired cause he's already dead";
		std::cout << WHITE << "(Life:" << this->_hitPoints << "pts & Energy:" << this->_energyPoints << "pts)" << std::endl;
	}
	else
	{
		std::cout << WHITE << this->_name << "(Life:" << this->_hitPoints << "pts) has been repaired and won " << amount << " life points " ;
		this->_hitPoints += amount;
		std::cout << WHITE << "(Life:" << this->_hitPoints <<"pts)" << std::endl;
		this->_energyPoints--;
	}
}
/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/
ClapTrap::~ClapTrap(void)
{
	std::cout << ORANGE << "ClapTrap destructor called : "<< this->_name << std::endl;
	return;
}
