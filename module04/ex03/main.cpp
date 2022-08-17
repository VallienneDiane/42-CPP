/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:07:16 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/17 16:10:14 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "Character.hpp"

int	main(void)
{
	Character	robot("Bobby");
	Character	witch("Lily");
	// Ice		*iceMatClone;
	// Cure		cureMat("cure");
	Ice			*iceMat = new Ice("ice");
	Ice			*iceMat2 = new Ice("ice");
	Ice			*iceMat3 = new Ice("ice");
	Cure		*cureMateria = new Cure("cure");
	
	std::cout << std::endl;
	// std::cout << WHITE << " --- Character use a materia --- " << std::endl;
	// iceMat.use(witch);
	// cureMat.use(robot);
	// std::cout << std::endl;
	
	// std::cout << WHITE << " --- Clone a materia and use it --- " << std::endl;
	// iceMatClone = iceMat.clone();
	// iceMatClone->use(robot);
	// std::cout << std::endl;

	std::cout << WHITE << " --- Equip & unequip a character with materias --- " << std::endl;
	witch.equip(iceMat);
	witch.equip(iceMat);
	witch.equip(cureMateria);
	witch.unequip(1);
	witch.equip(cureMateria);
	witch.equip(iceMat2);
	witch.equip(iceMat3);
	witch.equip(iceMat3);
	std::cout << std::endl;
	

	std::cout << std::endl;
	
	// iceMatClone = iceMat.clone();
	

	// bob.getName();
	// bob.use();
	
	// Cure test;

	// test.getType();

	// IMateriaSource* src = new MateriaSource();
	
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	
	// ICharacter* lea = new Character("lea");
	// AMateria* tmp;
	
	// tmp = src->createMateria("ice");
	// lea->equip(tmp);
	// tmp = src->createMateria("cure");
	// lea->equip(tmp);
	
	// ICharacter* bob = new Character("bob");
	
	// lea->use(0, *bob);
	// lea->use(1, *bob);
	
	// delete bob;
	// delete lea;
	// delete src;

	return (0);
}