/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:41:23 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/26 10:05:28 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/* Dynamic cast : can only be used with pointers and references to classes  		*/
/*             : takes place at execution and not at compilation like other cast	*/
/*             : one method in the class has to be virtual							*/

Base	*generate(void)
{
	
	std::cout << ORANGE << "-- Generate an instance of type A, B or C --" << std::endl;
	int i;
	srand(time(NULL));
	
	i = rand() % 3;
	switch (i)
	{
		case 1:
			std::cout << ORANGE << "A is generate" << std::endl;
			return (new(A));
		case 2:
			std::cout << ORANGE << "B is generate" << std::endl;
			return (new(B));
		default:
			std::cout << ORANGE << "C is generate" << std::endl;
			return (new(C));
	}
	return (NULL);
}

void	identify(Base* p)
{
	std::cout << GREEN << "-- Identify by pointer --" << std::endl;
	A*	ptrA;
	B*	ptrB;
	C*	ptrC;
	
	ptrA = dynamic_cast<A*>(p);
	ptrB = dynamic_cast<B*>(p);
	ptrC = dynamic_cast<C*>(p);
	if (ptrA)
		std::cout << "Identify * : type is A " << std::endl;
	else if (ptrB)
		std::cout << "Identify * : type is B" << std::endl;
	else if (ptrC)
		std::cout << "Identify * : type is C" << std::endl;
	else
		std::cout << "Identify * : Not type A, B or C" << std::endl;
		
}

void	identify(Base& p)
{	
	std::cout << BLUE << "-- Identify by reference --" << std::endl;
	try
	{
		A &refA = dynamic_cast<A&>(p);
		std::cout << "Identify & : type is A " << std::endl;
		(void)refA;
		return;
	}
	catch(const std::exception& e) {}
	try
	{
		B &refB = dynamic_cast<B&>(p);
		std::cout << "Identify & : type is B " << std::endl;
		(void)refB;
		return;
	}
	catch(const std::exception& e) {}
	try
	{
		C &refC = dynamic_cast<C&>(p);
		std::cout << "Identify & : type is C " << std::endl;
		(void)refC;
		return;
	}
	catch(const std::exception& e) {}
	std::cout << "Identify & : Not type A, B or C" << std::endl;
}

int main(void)
{
	Base	*abc = generate();
	Base	*def = abc;
	Base	*isNull = new Base();
	
	// Basic test with an instance generate and send ref or pointer to identify the type //
	std::cout << std::endl;
	std::cout << GREEN << "abc : ";
	identify(abc);			// pointer
	std::cout << std::endl;
	std::cout << BLUE << "*abc : ";
	identify(*abc); 		// reference
	
	std::cout << std::endl;
	std::cout << GREEN << "def : ";
	identify(def);

	std::cout << std::endl;
	std::cout << "isNull : ";
	identify(isNull);
	std::cout << std::endl;
	std::cout << BLUE << "*isNull : ";
	identify(*isNull);

	delete (abc);
	delete(isNull);
	return (0);
}