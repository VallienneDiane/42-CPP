/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:52:37 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/22 11:42:09 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <time.h>
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
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int	number;

	if (executor.getGrade() <= getExecGrade())
	{
		number = rand() % 100;
		std::cout << "**** drill noises ****" << std::endl;
		if (number % 2)
			std::cout << executor.getName() << " has been robotomised ..." << std::endl;
		else
			std::cout << executor.getName() << " failed to be robotomised !" << std::endl;
	}
	else
		throw GradeTooLowToExecute();	
}

//***********************************************//
//					DESTRUCTOR                   //
//***********************************************//
RobotomyRequestForm::~RobotomyRequestForm(void)
{
}