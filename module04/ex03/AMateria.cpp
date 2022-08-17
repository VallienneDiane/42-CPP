/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:42:09 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/17 14:02:14 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
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
	if (this->getType() == "ice")
		std::cout << BLUE <<"Ice : \"* shoots an ice bolt at " << target.getName() << " * \" " << std::endl;
	else if (this->getType() == "cure")
		std::cout << PURPLE << "Cure : \"* heals " << target.getName() << " 's wounds * \" " << std::endl;
}
		
/**********************************************/
/*			       DESTRUCTOR                 */
/* ********************************************/
AMateria::~AMateria(void)
{
	std::cout << RED << "AMateria destructor called" << std::endl;
	return;
}