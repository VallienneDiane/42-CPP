/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:29:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/21 17:35:16 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
class AForm;
class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm(void);
		
		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;
};

#endif
