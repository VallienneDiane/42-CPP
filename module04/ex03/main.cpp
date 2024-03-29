/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:07:16 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 11:42:35 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "Character.hpp"

int	main(void)
{
	std::cout << WHITE << " --- Create characters --- " << std::endl;
	Character		robot("Bobby");
	Character		witch("Lily");
	
	std::cout << WHITE << " --- Create materias --- " << std::endl;
	Ice				*ice1 = new Ice("ice");
	Ice				*ice2 = ice1->clone();
	Cure			*cure1 = new Cure("cure");
	
	std::cout << WHITE << " --- Create source --- " << std::endl;
	MateriaSource	*source = new MateriaSource();
	
	std::cout << WHITE << " --- Source learn materia --- " << std::endl;
	source->learnMateria(ice1);
	source->learnMateria(cure1);
	
	std::cout << WHITE << " --- Create materia from source --- " << std::endl;
	AMateria *ice3 = source->createMateria("ice");
	AMateria *cure2 = source->createMateria("cure");
	
	std::cout << WHITE << " --- Character equip/unequip materias --- " << std::endl;
	witch.equip(ice2);
	witch.equip(ice2);
	witch.unequip(0);
	witch.equip(cure2);
	witch.equip(ice3);
	witch.equip(ice2);
	
	std::cout << WHITE << " --- Use materias, empty index --- " << std::endl;
	witch.use(3, robot);
	
	std::cout << WHITE << " --- Use materias --- " << std::endl;
	witch.use(0, robot);
	witch.use(1, robot);
	
	std::cout << std::endl;
	delete source;

	std::cout << std::endl;
	std::cout << WHITE << " --- SUBJECT TESTS --- " << std::endl;
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;
	
	ICharacter* lea = new Character("Lea");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	lea->equip(tmp);
	tmp = src->createMateria("cure");
	lea->equip(tmp);
	std::cout << std::endl;
	
	ICharacter* bob = new Character("Bob");
	
	lea->use(0, *bob);
	lea->use(1, *bob);
	
	std::cout << std::endl;
	delete bob;
	delete lea;
	delete src;

	return (0);
}