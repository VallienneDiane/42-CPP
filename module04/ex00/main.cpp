/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:12:41 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 14:25:40 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	// subject tests
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete(i);
	delete(j);
	delete(meta);
	std::cout << std::endl;

	// My tests
	Animal		Titi;
	Dog			Idefix;
	Cat			Garfield;
	WrongAnimal	Coffee;
	WrongCat	Grosminet;

	std::cout << std::endl;
	std::cout << Titi.getType() << std::endl;
	Titi.makeSound();
	std::cout << std::endl;
	std::cout << Idefix.getType() << std::endl;
	Idefix.makeSound();
	std::cout << std::endl;
	std::cout << Garfield.getType() << std::endl;
	Garfield.makeSound();
	std::cout << std::endl;
	std::cout << Coffee.getType() << std::endl;
	Coffee.makeSound();
	std::cout << std::endl;
	std::cout << Grosminet.getType() << std::endl;
	Grosminet.makeSound();
	std::cout << std::endl;
	return (0);
}