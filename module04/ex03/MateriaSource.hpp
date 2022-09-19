/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:50:35 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 15:10:57 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_inventoryMat[4];
		
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		MateriaSource & operator=(const MateriaSource & src);
		~MateriaSource(void);
		
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};

#endif

