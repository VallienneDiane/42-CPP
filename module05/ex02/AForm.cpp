/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:35:55 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/21 14:46:22 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

//***********************************************//
//					CONSTRUCTORS	             //
//***********************************************//
AForm::AForm(void) : _name("unamed"),_signGrade(0), _execGrade(0), _signed(0)
{
}

AForm::AForm(std::string const name, int const signGrade, int const execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(0)
{
	if (getSignGrade() > 150)
		throw GradeTooLowException();
	else if (getSignGrade() < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &src) : _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()), _signed(src.getSigned())
{
	*this = src;
}

AForm & AForm::operator=(const AForm &src)
{
	(void)src;
	return (*this);
}

std::ostream & operator<<(std::ostream &stream, const AForm &src )
{
	stream << "Form '" << src.getName() << "': min grade to sign ";
	stream << src.getSignGrade() << " and min grade to execute " << src.getExecGrade();
	return (stream);
}

//***********************************************//
//						GETTERS		             //
//***********************************************//
std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int	 AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	 AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

//***********************************************//
//					FUNCTIONS	                 //
//***********************************************//
const char* AForm::GradeTooHighException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too high to sign");
}

const char* AForm::GradeTooLowException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too low to sign");
}

const char* AForm::GradeTooHighToExecute::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too high to execute");
}
const char* AForm::GradeTooLowToExecute::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too low to execute");
}


void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= getSignGrade())
		this->_signed = 1;
	else
		throw GradeTooLowException();
}

//***********************************************//
//					DESTRUCTOR                   //
//***********************************************//
AForm::~AForm(void)
{
}