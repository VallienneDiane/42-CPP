# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 11:41:14 by dvallien          #+#    #+#              #
#    Updated: 2022/05/23 15:59:34 by dvallien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

PATH_OBJS	=	./.OBJS/

INCLUDES	=	PhoneBook.hpp	\
				Contact.hpp

SRC			= 	PhoneBook.cpp	\
				main.cpp

OBJS		=	$(addprefix $(PATH_OBJS), $(SRC:.cpp=.o))

CPPC		=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPPC) $(OBJS) -o $(NAME)

$(PATH_OBJS)%.o :	%.cpp
					@mkdir -p $(PATH_OBJS)
					$(CPPC) $(CPPFLAGS) -c $< -o $@

clean :
			$(RM) $(PATH_OBJS)

fclean :		
			$(RM) $(PATH_OBJS) $(NAME)
			
re :		fclean all
			
.PHONY:		all clean fclean re