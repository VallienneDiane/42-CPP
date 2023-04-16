/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:50:04 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 13:51:21 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
//***********************************************//
//					CONSTRUCTORS	             //
//***********************************************//
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("none") 
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) 
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): AForm("ShrubberyCreationForm", 145, 137) 
{
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	this->_target = src.getTarget();
	return (*this);
}
//***********************************************//
//						GETTERS		             //
//***********************************************//
std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}
//***********************************************//
//					FUNCTIONS	                 //
//***********************************************//
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= getExecGrade())
	{
		std::cout << executor.getName() << " draw a tree in the file" << std::endl;
		std::ofstream file(this->_target + "_shrubbery");
		std::string line;
		
		line.append("       		&&& &&  & && \n");
		line.append("		&& &\\/&\\|& ()|/ @, && \n");
		line.append("		&\\/(/&/&||/& /_/)_&/_& \n");
		line.append("	&() &\\/&|()|/&\\/ '% & _&& & \n");
		line.append("	&_\\_&&_\\ |& |&&/&__%_/_& && \n");
		line.append("	&&   && & &| &| /& & % ()& /&& \n");
		line.append("	()&_---()&\\&\\|&&-&&--%---()~ \n");
		line.append("		&&     \\||| \n");
		line.append("				||| \n");
		line.append("				||| \n");
		line.append("				||| \n");
		line.append("		, -=-~  .-^- _ \n");
		
		file << line << std::endl;
		file.close();
	}
	else
		throw GradeTooLowToExecute();
}
//***********************************************//
//					DESTRUCTOR                   //
//***********************************************//
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}