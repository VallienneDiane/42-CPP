/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:04:44 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/22 16:53:06 by dvallien         ###   ########.fr       */
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
	AForm	*form;
	std::string tab_forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	i;
	

	i = -1;
	form = NULL;
	while (i++ < 3 && formName.compare(tab_forms[i]));
	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(targetForm);
			std::cout << GREEN << "Intern creates the form : " << formName << std::endl;
			break;
		case 1:
			form = new RobotomyRequestForm(targetForm);
			std::cout << GREEN << "Intern creates the form : " << formName << std::endl;
			break;
		case 2:
			form = new PresidentialPardonForm(targetForm);
			std::cout << GREEN << "Intern creates the form : " << formName << std::endl;
			break;
		default:
			std::cout << RED << "Intern error : the form " << formName << " doesn't exist" << std::endl;
			break;
	}
	return (form);
}