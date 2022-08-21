/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:55:20 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/21 17:47:20 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//***********************************************//
//					CONSTRUCTORS	             //
//***********************************************//
PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5), _target("none") 
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) 
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	this->_target = src.getTarget();
	return (*this);
}

//***********************************************//
//						GETTERS		             //
//***********************************************//
std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

//***********************************************//
//					FUNCTIONS	                 //
//***********************************************//
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= getExecGrade())
		std::cout << this->getName() << " : " << this->_target << " : you've been forgiven by Zaphod Beeblebrox" << std::endl;
	else
		throw GradeTooLowToExecute();
}

//***********************************************//
//					DESTRUCTOR                   //
//***********************************************//
PresidentialPardonForm::~PresidentialPardonForm(void)
{
}