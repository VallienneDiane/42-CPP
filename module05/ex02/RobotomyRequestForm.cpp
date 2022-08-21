/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:52:37 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/21 18:15:03 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//***********************************************//
//					CONSTRUCTORS	             //
//***********************************************//
RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("none")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) 
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	this->_target = src.getTarget();
	return (*this);
}

//***********************************************//
//						GETTERS		             //
//***********************************************//
std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

//***********************************************//
//					FUNCTIONS	                 //
//***********************************************//

// FAIRE FONCTION ALEATOIRE ET EN FONCTION DU GRADE
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "**** drill noises ****" << std::endl;
	if (executor.getGrade() <= getExecGrade())
	{
		std::cout << executor.getName() << " You've been robotomised" << std::endl;
	}
	else
	{
		std::cout << executor.getName() << " failed to be robotomised" << std::endl;
		throw GradeTooLowToExecute();	
	}
	
}

//***********************************************//
//					DESTRUCTOR                   //
//***********************************************//
RobotomyRequestForm::~RobotomyRequestForm(void)
{
}