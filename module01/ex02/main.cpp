/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:16:25 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/31 11:10:39 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "memory address of the string: " << &string << std::endl;
	std::cout << "memory address held by string pointer: "<< stringPTR << std::endl;
	std::cout << "memory address held by string reference: "<< &stringREF << std::endl;
	std::cout << "value of string: " << string << std::endl;
	std::cout << "value of string pointer: " << *stringPTR << std::endl;
	std::cout << "value of string reference: " << stringREF << std::endl;
}