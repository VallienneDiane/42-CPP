/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:50:35 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/17 16:30:51 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class MateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		MateriaSource & operator=(const MateriaSource & src);
		void learnMateria(AMateria*);
		// AMateria* createMateria(std::string const & type);
		~MateriaSource(void);
		
	private:
		AMateria	*_inventoryMat[4];	
};

#endif

