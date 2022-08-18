/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:07:16 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/18 11:50:36 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "Character.hpp"

int	main(void)
{
	// MY TESTS
	Character		robot("Bobby");
	Character		witch("Lily");
	// Cure			*cureMat = new Cure("cure");
	// Ice				*iceMat = new Ice("ice");
	// Ice				*iceMatClone = iceMat->clone();
	Ice				*iceMat2 = new Ice("ice");
	Ice				*iceMat3 = new Ice("ice");
	IMateriaSource	*materiaSrc = new MateriaSource();
	
	// (void)robot;
	// (void)witch;
	// (void)iceMatClone;
	// (void)cureMat;
	// (void)iceMat;
	// (void)iceMat2;
	// (void)iceMat3;
	// (void)materiaSrc;
	
	std::cout << std::endl;
	std::cout << WHITE << " --- Character use a materia --- " << std::endl;
	// iceMat->use(witch);
	// cureMat->use(robot);
	std::cout << std::endl;
	
	// std::cout << WHITE << " --- Clone a materia and use it --- " << std::endl;
	// iceMatClone->use(robot);
	// std::cout << std::endl;

	// std::cout << WHITE << " --- Equip & unequip a character with materias --- " << std::endl;
	// witch.equip(iceMat);
	// witch.equip(iceMat);
	// witch.equip(cureMat);
	// witch.unequip(1);
	// witch.equip(cureMat);
	witch.equip(iceMat2);
	witch.equip(iceMat3);
	witch.equip(iceMat3);
	// std::cout << std::endl;
	
	std::cout << WHITE << " --- Add materia --- " << std::endl;
	// materiaSrc->learnMateria(iceMat);
	materiaSrc->learnMateria(iceMat2);
	materiaSrc->learnMateria(iceMat3);
	// materiaSrc->learnMateria(cureMat);
	std::cout << std::endl;
	
	std::cout << WHITE << " --- Create materia --- " << std::endl;
	materiaSrc->createMateria("ice");
	materiaSrc->createMateria("ice");
	std::cout << std::endl;
	
	// delete cureMat;
	// delete iceMat;
	// delete iceMatClone;
	// delete iceMat2;
	// delete iceMat3;
	delete materiaSrc;

	// SUBJECTS TESTS
	// IMateriaSource* src = new MateriaSource();
	
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// std::cout << std::endl;
	
	// ICharacter* lea = new Character("Lea");
	// AMateria* tmp;
	
	// tmp = src->createMateria("ice");
	// lea->equip(tmp);
	// tmp = src->createMateria("cure");
	// lea->equip(tmp);
	// std::cout << std::endl;
	
	// ICharacter* bob = new Character("Bob");
	
	// lea->use(0, *bob);
	// lea->use(1, *bob);
	
	// std::cout << std::endl;
	// delete bob;
	// delete lea;
	// delete src;

	return (0);
}