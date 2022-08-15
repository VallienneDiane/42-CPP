/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:12:41 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 11:51:34 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* metalic = new Dog();
	const Animal* garfield = new Cat();
	// const WrongAnimal* grosminet = new WrongCat();
	
	// Each type of animal print his own sound 
	std::cout << std::endl;
	std::cout << idefix->getType() << " " << std::endl;
	std::cout << garfield->getType() << " " << std::endl;
	
	std::cout << std::endl;
	garfield->makeSound();
	idefix->makeSound();
	meta->makeSound();
	
	std::cout << std::endl;
	delete(idefix);
	delete(garfield);
	delete(meta);

	// Wrong Cat print sound of Wronf Animal without keyword virtual
	// std::cout << std::endl;
	// std::cout << grosminet->getType() << " " << std::endl;
	// grosminet->makeSound();
	// delete(grosminet);
	return (0);
}