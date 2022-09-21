/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:52:29 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 16:38:49 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
class AForm;
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm & operator=(const RobotomyRequestForm &src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm(std::string target);
		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;
};

#endif
