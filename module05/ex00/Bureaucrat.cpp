/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:55:03 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/18 17:03:53 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//***********************************************//
//					CONSTRUCTORS	             //
//***********************************************//
Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade())
{
	*this = src;
}

//***********************************************//
//						OPERATORS	             //
//***********************************************//
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_name = src.getName();
	this->_grade = src.getGrade();
	return (*this);
}

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &source )
{
	stream << source.getName() << " grade " << source.getGrade();
	return (stream);
}

//***********************************************//
//						GETTERS		             //
//***********************************************//
std::string Bureaucrat::getName(void) const
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
	return (" Bureaucrat grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return (" Bureaucrat grade is too low");
}

int Bureaucrat::incrementGrade(void)
{
	try
	{
		if (this->_grade < 1)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	this->_grade--;
	return(this->_grade);
}

int Bureaucrat::decrementGrade(void)
{
	try
	{
		if (this->_grade > 150)
			throw GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	this->_grade++;
	return(this->_grade);
}

//***********************************************//
//					DESTRUCTORS	                 //
//***********************************************//
Bureaucrat::~Bureaucrat(void)
{
}