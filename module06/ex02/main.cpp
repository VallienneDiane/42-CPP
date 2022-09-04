/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:41:23 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/04 13:20:14 by dvallien         ###   ########.fr       */
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
	int i;
	srand(time(NULL));
	
	i = rand() % 3;
	switch (i)
	{
		case 1:
			std::cout << "A is created" << std::endl;
			return (new(A));
		case 2:
			std::cout << "B is created" << std::endl;
			return (new(B));
		default:
			std::cout << "C is created" << std::endl;
			return (new(C));
	}
	return (NULL);
}

void	identify(Base* p)
{
	A*	ptrA;
	B*	ptrB;
	C*	ptrC;
	
	ptrA = dynamic_cast<A*>(p);
	if (ptrA)
		std::cout << "type A " << std::endl;
	ptrB = dynamic_cast<B*>(p);
	if (ptrB)
		std::cout << "type B" << std::endl;
	ptrC = dynamic_cast<C*>(p);
	if (ptrC)
		std::cout << "type C" << std::endl;
}

void	identify(Base& p)
{	
	try
	{
		A & refA = dynamic_cast<A &>(p);
		(void)refA;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B & refB = dynamic_cast<B &>(p);
		(void)refB;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C & refC = dynamic_cast<C &>(p);
		(void)refC;
	}
	catch(const std::exception& e)
	{
	}
}

int main(void)
{
	Base	*abc = generate();
	Base	&abcRef = *abc;
	
	identify(abc);
	identify(abcRef);

	delete (abc);
	return (0);
}