/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:49:52 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/17 16:32:54 by dvallien         ###   ########.fr       */
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
		this->_inventoryMat[i] = NULL;
	std::cout << GREY << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
		this->_inventoryMat[i] = src._inventoryMat[i]->clone();
	std::cout << GREY << "MateriaSource copy assignement constructor called" << std::endl;
	return (*this);
}

/**********************************************/
/*			       FUNCTIONS                  */
/* ********************************************/
void MateriaSource::learnMateria(AMateria*)
{
	
}
// AMateria* createMateria(std::string const & type);

/**********************************************/
/*			       DESTRUCTOR                 */
/* ********************************************/
MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete (this->_inventoryMat[i]);
	std::cout << GREY << "MateriaSource destructor called" << std::endl;
	return;
}