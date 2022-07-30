# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 18:30:10 by dvallien          #+#    #+#              #
#    Updated: 2022/07/30 17:35:27 by dvallien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie

PATH_OBJS	=	./.OBJS/

INCLUDES	=	HumanA.hpp	\
				HumanB.hpp	\
				Weapon.hpp

SRC			= 	main.cpp		\
				HumanA.cpp		\
				HumanB.cpp		\
				Weapon.cpp

OBJS		=	$(addprefix $(PATH_OBJS), $(SRC:.cpp=.o))


CPPC		=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPPC) $(OBJS) -o $(NAME)

$(PATH_OBJS)%.o :	%.cpp $(INCLUDES)
					@mkdir -p $(PATH_OBJS)
					$(CPPC) $(CPPFLAGS) -c $< -o $@

clean :
			$(RM) $(PATH_OBJS)

fclean :		
			$(RM) $(PATH_OBJS) $(NAME)
			
re :		fclean all
			
.PHONY:		all clean fclean re