/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:49:52 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/18 14:55:51 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
/**********************************************/
/*			       CONSTRUCTORS               */
/* ********************************************/
MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_inventoryMat[i] = NULL;
	std::cout << GREY << "MateriaSource default constructor called" << std::endl;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
		this->_inventoryMat[i] = src._inventoryMat[i]->clone();
	std::cout << GREY << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventoryMat[i])
			delete (this->_inventoryMat[i]);
		this->_inventoryMat[i] = src._inventoryMat[i]->clone();
	}
	std::cout << GREY << "MateriaSource copy assignement constructor called" << std::endl;
	return (*this);
}

/**********************************************/
/*			       FUNCTIONS                  */
/* ********************************************/
void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventoryMat[i] == NULL)
		{
			this->_inventoryMat[i] = materia->clone();
			delete materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventoryMat[i] && this->_inventoryMat[i]->getType().compare(type) == 0)
			return (this->_inventoryMat[i]->clone());
	}
	return (0);	
}

/**********************************************/
/*			       DESTRUCTOR                 */
/* ********************************************/
MateriaSource::~MateriaSource(void)
{
	std::cout << GREY << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete (this->_inventoryMat[i]);			
	return;
}