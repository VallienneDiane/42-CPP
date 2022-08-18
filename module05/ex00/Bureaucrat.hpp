/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:54:49 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/18 17:03:32 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat & operator=(const Bureaucrat &src);
		~Bureaucrat(void);
		
		std::string getName(void) const;
		int getGrade(void) const;
		int incrementGrade(void);
		int decrementGrade(void);
		class GradeTooHighException
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		std::string _name;
		int			_grade;
};

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &src);

#endif