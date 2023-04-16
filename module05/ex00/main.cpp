/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:55:11 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/22 11:40:01 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		std::cout << ORANGE << "--- Wrong grade (too low) ---" << std::endl;
		Bureaucrat lea("Lea", 155);
		std::cout << lea << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << RED << "--- Wrong grade (too high) ---" << std::endl;
		Bureaucrat lea("Lea", 0);
		std::cout << lea << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << BLUE << "--- Already higher grade ---" << std::endl;
		Bureaucrat emma("Emma", 1);
		std::cout << emma << std::endl;
		emma.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << WHITE << "--- Already lower grade ---" << std::endl;
		Bureaucrat gina("Gina", 150);
		std::cout << gina << std::endl;
		gina.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << GREEN << "--- Decrement and increment grade ---" << std::endl;
		Bureaucrat thea("Thea", 40);
		std::cout << thea << std::endl;
		thea.decrementGrade();
		std::cout << thea << std::endl;
		thea.incrementGrade();
		std::cout << thea << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}