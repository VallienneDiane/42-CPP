/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:55:11 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/22 11:48:08 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "AForm.hpp"

int main(void)
{
	srand(time(NULL));
	try
	{
		std::cout << BLUE << "--- Execute Presidential Form ---" << std::endl;
		Bureaucrat				sarah("Sarah", 5);
		PresidentialPardonForm	presidential1("thief");

		std::cout << sarah << std::endl;
		std::cout << presidential1 << std::endl;
		sarah.signForm(presidential1);
		presidential1.execute(sarah);
		sarah.decrementGrade();
		presidential1.execute(sarah);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << PURPLE << "--- Execute Shrubbery Form ---" << std::endl;
		Bureaucrat				lisa("Lisa", 137);
		Bureaucrat				elise("Elise", 147);
		ShrubberyCreationForm	shrubbery1("tree");

		std::cout << lisa << std::endl;
		std::cout << shrubbery1 << std::endl;
		shrubbery1.execute(lisa);
		std::cout << std::endl;
		std::cout << elise << std::endl;
		shrubbery1.execute(elise);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << ORANGE << "--- Execute Robotomy Form ---" << std::endl;
		Bureaucrat				lisa("Lisa", 27);
		Bureaucrat				elise("Elise", 46);
		RobotomyRequestForm		robotomy1("aie");
		RobotomyRequestForm		robotomy2("robot");

		std::cout << lisa << std::endl;
		std::cout << robotomy1 << std::endl;
		std::cout << robotomy2 << std::endl;
		std::cout << std::endl;
		robotomy1.execute(lisa);
		robotomy2.execute(lisa);
		std::cout << std::endl;
		std::cout << elise << std::endl;
		robotomy1.execute(elise);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}