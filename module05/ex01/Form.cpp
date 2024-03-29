/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:35:55 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/22 12:07:36 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
//***********************************************//
//					CONSTRUCTORS	             //
//***********************************************//
Form::Form(void) : _name("unamed"), _signed(0),  _signGrade(0), _execGrade(0)
{}

Form::Form(std::string const name, int const signGrade, int const execGrade) : _name(name), _signed(0), _signGrade(signGrade), _execGrade(execGrade)
{
	if (getSignGrade() > 150)
		throw GradeTooLowException();
	else if (getSignGrade() < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &src) : _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade())
{
	*this = src;
}

Form & Form::operator=(const Form &src)
{
	this->_signed = src.getSigned();
	return (*this);
}

std::ostream & operator<<(std::ostream &stream, const Form &src )
{
	stream << "Form '" << src.getName() << "': min grade to sign ";
	stream << src.getSignGrade() << " and min grade to execute " << src.getExecGrade();
	stream << " && bool sign is " << src.getSigned();
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
	{
		if (getSigned() == 1)
			std::cout << "The form " << this->_name << " is already sign" << std::endl;
		else
			this->_signed = 1;
	}
	else
		throw GradeTooLowException();
}
//***********************************************//
//					DESTRUCTOR                   //
//***********************************************//
Form::~Form(void)
{}