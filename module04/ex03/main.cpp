/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:07:16 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/17 17:08:00 by dvallien         ###   ########.fr       */
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
	Ice				*iceMatClone;
	Cure			cureMat("cure");
	Ice				*iceMat = new Ice("ice");
	Ice				*iceMat2 = new Ice("ice");
	Ice				*iceMat3 = new Ice("ice");
	Cure			*cureMateria = new Cure("cure");
	MateriaSource	*materiaSrc = new MateriaSource();
	
	std::cout << std::endl;
	std::cout << WHITE << " --- Character use a materia --- " << std::endl;
	iceMat.use(witch);
	cureMat.use(robot);
	std::cout << std::endl;
	
	std::cout << WHITE << " --- Clone a materia and use it --- " << std::endl;
	iceMatClone = iceMat.clone();
	iceMatClone->use(robot);
	std::cout << std::endl;

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
	
	std::cout << WHITE << " --- Add materia --- " << std::endl;
	materiaSrc->learnMateria(iceMat);
	materiaSrc->learnMateria(iceMat2);
	materiaSrc->learnMateria(iceMat3);
	materiaSrc->learnMateria(cureMateria);
	std::cout << std::endl;
	
	std::cout << WHITE << " --- Create materia --- " << std::endl;
	materiaSrc->createMateria("ice");
	materiaSrc->createMateria("iron");
	std::cout << std::endl;

	// SUBJECTS TESTS
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