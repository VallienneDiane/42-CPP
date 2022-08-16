/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:12:41 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 11:44:07 by dvallien         ###   ########.fr       */
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
	Animal	*tab_animal[10];
	int		i;
	// Dog		basic;
	
	// Dog tmp = basic;
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
	return (0);
}
