/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:55:20 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/22 14:34:28 by dvallien         ###   ########.fr       */
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

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm("PresidentialPardonForm", 25, 5), _target(src.getTarget())
{
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	(void)src;
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
		std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
	else
		throw GradeTooLowToExecute();
}

//***********************************************//
//					DESTRUCTOR                   //
//***********************************************//
PresidentialPardonForm::~PresidentialPardonForm(void)
{
}