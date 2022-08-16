/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:29:19 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 11:31:11 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &src);
		Dog & operator=(const Dog &src);
		Brain &	getBrain(void) const;
		virtual void makeSound(void) const;
		virtual ~Dog(void);
		
	private:
		Brain *_dogBrain;
};

#endif