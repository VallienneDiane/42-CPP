/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:55:13 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/21 17:35:29 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
class AForm;
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm & operator=(const PresidentialPardonForm &src);
		~PresidentialPardonForm(void);
		
		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;
};

#endif
