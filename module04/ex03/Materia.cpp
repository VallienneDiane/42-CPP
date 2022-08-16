/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:11:06 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 16:54:10 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
/**********************************************/
/*			       CONSTRUCTORS               */
/* ********************************************/
AMateria::AMateria(void) : _type("materia")
{
	std::cout << RED << "AMateria default constructor called" << std::endl;
	return;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << RED << "AMateria type constructor called" << std::endl;
	return;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << RED << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria & AMateria::operator=(const AMateria &src)
{
	this->_type = src.getType();
	std::cout << RED << "AMateria copy assignement operator called" << std::endl;
	return (*this);
}

/**********************************************/
/*			       GETTER                     */
/* ********************************************/
std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

/**********************************************/
/*			       FUNCTIONS                  */
/* ********************************************/
void AMateria::use(ICharacter& target)
{
	std::cout << "Ice : \"* shoots an ice bolt at " << target.getName() << " * \" " << std::endl;
	std::cout << "Cure : \"* heals " << target.getName() << " 's wounds * \" " << std::endl;
}
		
/**********************************************/
/*			       DESTRUCTOR                 */
/* ********************************************/
AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
	return;
}