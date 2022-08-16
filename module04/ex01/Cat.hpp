/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:21:57 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 11:32:17 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &src);
		Cat & operator=(const Cat &src);
		virtual void makeSound(void) const;
		virtual ~Cat(void);
	
	protected:
		Brain *_catBrain;
};

#endif