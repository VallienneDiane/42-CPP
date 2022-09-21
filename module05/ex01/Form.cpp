/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:35:55 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 13:42:10 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
//***********************************************//
//					CONSTRUCTORS	             //
//***********************************************//
Form::Form(void) : _name("unamed"), _signed(0),  _signGrade(0), _execGrade(0)
{}

Form::Form(std::string const name, int const signGrade, int const execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	if (getSignGrade() > 150)
		throw GradeTooLowException();
	else if (getSignGrade() < 1)
		throw GradeTooHighException();
	this->_signed = 0;
}

Form::Form(const Form &src) : _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	this->_signed = src.getSigned();
	*this = src;
}

Form & Form::operator=(const Form &src)
{
	// the privates members are constants so do nothing here
	(void)src;
	return (*this);
}

std::ostream & operator<<(std::ostream &stream, const Form &src )
{
	stream << "The form '" << src.getName() << "' can be sign if grade is higher or equal to ";
	stream << src.getSignGrade();
	return (stream);
}
//***********************************************//
//						GETTERS		             //
//***********************************************//
std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	 Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	 Form::getExecGrade(void) const
{
	return (this->_execGrade);
}
//***********************************************//
//					FUNCTIONS	                 //
//***********************************************//
const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too high to sign");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too low to sign");
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= getSignGrade())
		this->_signed = 1;
	else
		throw GradeTooLowException();
}
//***********************************************//
//					DESTRUCTOR                   //
//***********************************************//
Form::~Form(void)
{}