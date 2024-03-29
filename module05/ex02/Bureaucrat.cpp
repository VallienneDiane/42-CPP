/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:55:03 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/22 13:41:32 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
//***********************************************//
//					CONSTRUCTORS	             //
//***********************************************//
Bureaucrat::Bureaucrat(void)
{}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
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

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		if (form.getSigned() == 0)
		{
			form.beSigned(*this);
			std::cout << this->_name << " signed the form " << form.getName() << std::endl;
		}
		else if (form.getSigned() == 1)
		{
			std::cout << this->_name << " add another signature on the form " << form.getName() << std::endl;
			return;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed the form " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}
//***********************************************//
//					DESTRUCTOR 	                 //
//***********************************************//
Bureaucrat::~Bureaucrat(void)
{}