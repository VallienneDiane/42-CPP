/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:55:11 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/22 14:22:54 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "AForm.hpp"
# include "Intern.hpp"

int main(void)
{
	Bureaucrat	lydie("Lydie", 4);
	Intern		lyra;
	AForm*		shrub;
	AForm*		president;
	AForm*		robot;
	AForm*		sorry;

	shrub = lyra.makeForm("shrubbery creation", "izzzi");
	robot = lyra.makeForm("robotomy request", "zzz");
	president = lyra.makeForm("presidential pardon", "Please");
	sorry = lyra.makeForm("\"work\"", "hhh");

	std::cout << BLUE << std::endl;
	/////////Test with a Form null : have to check before, to avoid segfault////////
	if (sorry)
	{
		std::cout << sorry << std::endl;
		lydie.signForm(*sorry);
		lydie.executeForm(*sorry);
	}
	///////////////////////////////////////////////
	lydie.signForm(*shrub);
	lydie.executeForm(*shrub);
	std::cout << std::endl;
	lydie.signForm(*robot);
	lydie.executeForm(*robot);
	std::cout << std::endl;
	lydie.signForm(*president);
	lydie.executeForm(*president);
	std::cout << std::endl;

	delete(shrub);
	delete(robot);
	delete(president);
	return (0);
}