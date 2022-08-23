/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:04:44 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/23 11:15:35 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern & Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

Intern::~Intern(void)
{
}

AForm*	Intern::makeForm(std::string formName, std::string targetForm)
{
	static const std::string tab_forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	static AForm* (*makeFormFunctions[3])(std::string targetForm) = { makeShrubberyForm, makeRobotomyForm, makePresidentialForm };
	int	i;
	
	i = 0;
	while (i < 3)
	{
		if (formName.compare(tab_forms[i]) == 0)
		{
			std::cout << GREEN << "Intern creates the form : " << formName << std::endl;
			return (makeFormFunctions[i]) (targetForm);
		}
		i++;
	}
	std::cout << RED << "Intern error : the form " << formName << " doesn't exist" << std::endl;
	return (NULL);
}

AForm*	Intern::makeShrubberyForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::makeRobotomyForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm*	Intern::makePresidentialForm(std::string target)
{
	return new PresidentialPardonForm(target);
}