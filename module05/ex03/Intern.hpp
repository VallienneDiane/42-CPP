/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:04:37 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 16:38:17 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
class AForm;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &src);
		Intern & operator=(const Intern &src);
		~Intern(void);

		AForm*	makeForm(std::string formName, std::string targetForm);
		static AForm*	makeShrubberyForm(std::string target);
		static AForm*	makeRobotomyForm(std::string target);
		static AForm*	makePresidentialForm(std::string target);
};

#endif