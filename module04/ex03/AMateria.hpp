/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:42:02 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 11:53:43 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"
# include <iostream>
# include <string>
# include "ICharacter.hpp"
class ICharacter;

/**********************************************/
/*			       Abstract class             */
/*	 -> pure method (= 0)          			  */
/*	 -> can't be implemented                  */
/*   -> derived class can use the pure method */
/* ********************************************/
class AMateria
{
	protected:
		std::string _type;
		
	public:
		AMateria(void);
		AMateria(const AMateria &src);
		AMateria & operator=(const AMateria &src);
		virtual ~AMateria(void);
	
		AMateria(std::string const & type);
		std::string const & getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter & target);
};

#endif