/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:55:03 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/19 14:54:24 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//***********************************************//
//					CONSTRUCTORS	             //
//***********************************************//
Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src.getGrade())
{
	*this = src;
}

//***********************************************//
//						OPERATORS	             //
//***********************************************//
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src.getGrade();
	return (*this);
}

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &source )
{
	stream << source.getName() << ", is a bureaucrat and her grade is " << source.getGrade();
	return (stream);
}

//***********************************************//
//						GETTERS		             //
//***********************************************//
const std::string Bureaucrat::getName(void) const
{
	return(this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return(this->_grade);
}

//***********************************************//
//					FUNCTIONS	                 //
//***********************************************//
const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("EXCEPTION : Bureaucrat grade is too low");
}

int Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
	{
		std::cout << "She can't get a promotion, she is the boss !" << std::endl;
		throw GradeTooHighException();
	}
	std::cout << "INCREMENT : Bravo, you got a promotion !" << std::endl;
	return(this->_grade);
}

int Bureaucrat::decrementGrade(void)
{
	this->_grade++;
		if (this->_grade > 150)
		{
			std::cout << "She can't be downgrade, her bureaucrat grade is already the lower..." << std::endl;
			throw GradeTooLowException();
		}
	std::cout << "DECREMENT : Outch you loose your place... !" << std::endl;
	return(this->_grade);
}

//***********************************************//
//					DESTRUCTORS	                 //
//***********************************************//
Bureaucrat::~Bureaucrat(void)
{
}