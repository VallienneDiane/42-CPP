/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:12:41 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 17:02:23 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
#include "../incs/WrongAnimal.hpp"
#include "../incs/WrongCat.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/Brain.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << WHITE << "---- Subject test ----" << std::endl;
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	std::cout << std::endl;
	delete j;
	delete k;
	std::cout << std::endl;
	std::cout << WHITE << "---- Show array is half cat half dog ----" << std::endl;
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
	std::cout << WHITE << "---- Set an idea ----" << std::endl;
	Dog		Idefix;

	Idefix.getBrain().setIdea(0, "Where is Obe ?");
	Idefix.getBrain().setIdea(1, "Oh ! A squirrel !");
	std::cout << Idefix.getBrain().getIdea(0) << std::endl;
	std::cout << WHITE << "---- Deep copy test ----" << std::endl;
	Dog		basic;
	Dog 	tmp = basic;
	std::cout << std::endl;
	return (0);
}
