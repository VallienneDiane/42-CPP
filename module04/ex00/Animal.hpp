/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:13:31 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/14 17:11:54 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal &src);
		Animal & operator=(const Animal &src);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		~Animal(void);
	
	protected:
		std::string _type;
};

#endif