/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:30:55 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 16:51:40 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include <iostream>
# include <string>
# include "Materia.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string type);
		Ice(const Ice &src);
		Ice & operator=(const Ice &src);
		virtual AMateria* clone(void) const;
		~Ice(void);
};

#endif