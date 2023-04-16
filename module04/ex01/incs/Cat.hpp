/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:21:57 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 10:11:54 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	protected:
		Brain *_catBrain;
		
	public:
		Cat(void);
		Cat(const Cat &src);
		Cat & operator=(const Cat &src);
		virtual ~Cat(void);
		
		Brain &	getBrain(void) const;
		virtual void makeSound(void) const;
};

#endif