/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:12:41 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 11:53:56 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	// My test
	std::cout << "---- My test ----" << std::endl;
	Animal	*tab_animal[10];
	int		i;
	i = -1;
	while (++i < 10)
	{
		if (i % 2)
			tab_animal[i] = new Dog();
		else
			tab_animal[i] = new Cat();
	}
	i--;
	std::cout << std::endl;
	while (i >= 0)
	{
		delete tab_animal[i];
		i--;
	}
	std::cout << std::endl;
	
	// Deep Copy Test
	std::cout << "---- Deep copy test ----" << std::endl;
	Dog		basic;
	Dog tmp = basic;
	std::cout << std::endl;

	// Subject test
	std::cout << "---- Subject test ----" << std::endl;
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	std::cout << std::endl;
	
	delete j;
	delete k;
	return (0);
}
