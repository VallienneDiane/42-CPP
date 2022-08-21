/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:55:11 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/21 14:23:40 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main(void)
{
	try
	{
		std::cout << "--- Wrong grade (too high) ---" << std::endl;
		Bureaucrat	lea("Lea", 0);
		std::cout << lea << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Wrong grade (too low) ---" << std::endl;
		Bureaucrat	lea("Lea", 167);
		std::cout << lea << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Grade too low to sign ---" << std::endl;
		Bureaucrat	lea("Lea", 6);
		Form		form1("taxes", 4, 10);
		
		std::cout << lea << std::endl;
		std::cout << form1 << std::endl;
		lea.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Grade higher or equal, can sign ---" << std::endl;
		Bureaucrat	lea("Lea", 4);
		Bureaucrat	annie("Annie", 2);
		Form		form1("taxes", 4, 10);
		
		std::cout << lea << std::endl;
		std::cout << annie << std::endl;
		std::cout << form1 << std::endl;
		lea.signForm(form1);
		annie.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "--- Increment or decrement grade to sign ---" << std::endl;
		Bureaucrat	lea("Lea", 14);
		Bureaucrat	annie("Annie", 46);
		Form		form1("taxes", 14, 10);
		Form		form2("certificate", 45, 10);
		
		std::cout << lea << std::endl;
		std::cout << annie << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		lea.signForm(form1);
		annie.signForm(form2);
		std::cout << std::endl;
		annie.incrementGrade();
		std::cout << annie << std::endl;
		annie.signForm(form2);
		std::cout << std::endl;
		lea.decrementGrade();
		std::cout << lea << std::endl;
		lea.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}