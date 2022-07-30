/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:16:25 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/30 17:28:12 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string		hello = "HI THIS IS BRAIN";
	std::string*	ptr_hello = &hello;
	std::string&	ref_hello = hello;

	std::cout << "memory address of the string: " << &hello << std::endl;
	std::cout << "memory address held by string pointer: "<< ptr_hello << std::endl;
	std::cout << "memory address held by string reference: "<< &ref_hello << std::endl;
	
	std::cout << "value of string: " << hello << std::endl;
	std::cout << "value of string pointer: " << *ptr_hello << std::endl;
	std::cout << "value of string reference: " << ref_hello << std::endl;
}