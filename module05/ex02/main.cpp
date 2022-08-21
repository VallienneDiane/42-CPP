/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:55:11 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/21 18:12:13 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "AForm.hpp"

int main(void)
{
	try
	{
		std::cout << "--- Execute Presidential Form ---" << std::endl;
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
		std::cout << "--- Execute Shrubbery Form ---" << std::endl;
		Bureaucrat				lisa("Lisa", 137);
		Bureaucrat				elise("Elise", 147);
		ShrubberyCreationForm	shrubbery1("tree");

		std::cout << lisa << std::endl;
		std::cout << shrubbery1 << std::endl;
		shrubbery1.execute(lisa);
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
		std::cout << "--- Execute Robotomy Form ---" << std::endl;
		Bureaucrat				lisa("Lisa", 7);
		Bureaucrat				elise("Elise", 145);
		RobotomyRequestForm		robotomy1("ouille");

		std::cout << lisa << std::endl;
		std::cout << robotomy1 << std::endl;
		robotomy1.execute(lisa);
		std::cout << elise << std::endl;
		robotomy1.execute(elise);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}