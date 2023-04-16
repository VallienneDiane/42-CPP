/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:55:11 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/22 13:02:11 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main(void)
{
	try
	{
		std::cout << ORANGE << "--- Grade too low to sign ---" << std::endl;
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
		std::cout << GREEN << "--- Grade higher or equal, can sign ---" << std::endl;
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
		std::cout << BLUE << "--- Increment or decrement grade to sign ---" << std::endl;
		Bureaucrat	lea("Lea", 1);
		Bureaucrat	annie("Annie", 46);
		Form		form1("taxes", 14, 10);
		Form		form2("certificate", 45, 10);
		Form		form3 = form1;
		
		std::cout << WHITE << lea << std::endl;
		std::cout << WHITE << annie << std::endl;
		std::cout << GREY << form1 << std::endl;
		std::cout << GREY << form2 << std::endl;
		std::cout << GREY << form3 << std::endl;
		lea.signForm(form1);
		///// Test if can the copy is done properly and if the form is already sign ///////
		Form	form4 = form1;
		std::cout << RED << form4 << std::endl;
		lea.signForm(form4);
		///////////////////////////
		std::cout << GREY << std::endl;
		annie.signForm(form2);
		annie.signForm(form3);
		std::cout << std::endl;
		annie.incrementGrade();
		std::cout << WHITE << annie << std::endl;
		annie.signForm(form2);
		annie.signForm(form3);
		std::cout << std::endl;
		lea.decrementGrade();
		std::cout << WHITE << lea << std::endl;
		lea.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}