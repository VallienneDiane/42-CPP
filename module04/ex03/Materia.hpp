/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:24:25 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 16:51:05 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_H
# define MATERIA_H
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
class AMateria;
# include "ICharacter.hpp"

/**********************************************/
/*			       Abstract class             */
/*	 -> pure method (= 0)          			  */
/*	 -> can't be implemented                  */
/*   -> derived class can use the pure method */
/* ********************************************/
class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &src);
		AMateria & operator=(const AMateria &src);
		std::string const & getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter & target);
		virtual ~AMateria(void);
		
	protected:
		std::string _type;
};

#endif