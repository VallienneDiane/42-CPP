/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:29:37 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 10:38:34 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal & operator=(const WrongAnimal &src);
		void			makeSound(void) const;
		std::string		getType(void) const;
		~WrongAnimal(void);
	
	protected:
		std::string _type;
};

#endif