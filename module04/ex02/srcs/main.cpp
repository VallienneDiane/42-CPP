/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:12:41 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 11:07:46 by dvallien         ###   ########.fr       */
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
	AAnimal	*Garfield = new Cat();
	// AAnimal	*animal = new AAnimal(); // cannot instantiate an Animal cause it's class astract
	Dog		Idefix;
	
	std::cout << WHITE << std::endl;
	std::cout << Garfield->getType() << std::endl;
	Garfield->makeSound();
	std::cout << std::endl;
	Idefix.getBrain().setIdea(0, "Where is Obe ?");
	Idefix.getBrain().setIdea(1, "Oh ! A squirrel !");
	Idefix.getBrain().setIdea(2, "Run run run run");
	Idefix.getBrain().setIdea(151, "I want to strangle Ordralfabétix");
	std::cout << std::endl;
	std::cout << WHITE << Idefix.getBrain().getIdea(0) << std::endl;
	std::cout << WHITE << Idefix.getBrain().getIdea(1) << std::endl;
	std::cout << WHITE << Idefix.getBrain().getIdea(2) << std::endl;
	std::cout << WHITE << Idefix.getBrain().getIdea(125);

	std::cout << std::endl;
	delete Garfield;
	return (0);
}
