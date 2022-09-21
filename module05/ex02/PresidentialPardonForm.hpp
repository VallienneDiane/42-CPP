/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:55:13 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 16:36:21 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
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
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm & operator=(const PresidentialPardonForm &src);
		~PresidentialPardonForm(void);
		
		PresidentialPardonForm(std::string target);
		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;
};

#endif
