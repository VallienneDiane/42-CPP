/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:07:16 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 16:55:27 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include "IMateriaSource.hpp"
# include "Materia.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"

int	main(void)
{
	Cure test;

	test.getType();

	// IMateriaSource* src = new MateriaSource();
	
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	
	// ICharacter* bob = new Character("bob");
	
	// me->use(0, *bob);
	// me->use(1, *bob);
	
	// delete bob;
	// delete me;
	// delete src;
	return (0);
}