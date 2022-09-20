# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 18:30:10 by dvallien          #+#    #+#              #
#    Updated: 2022/09/20 13:07:09 by dvallien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	diamondtrap

CPPC		=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

DIR_SRCS	:= ./srcs
DIR_OBJS	:= ./objs
DIR_INCS	:= ./incs

INCS		:=	ClapTrap.hpp	\
				ScavTrap.hpp	\
				FragTrap.hpp	\
				DiamondTrap.hpp

SRCS		:= 	ClapTrap.cpp	\
				ScavTrap.cpp	\
				FragTrap.cpp	\
				DiamondTrap.cpp		\
				main.cpp

LST_OBJS		:= $(SRCS:.cpp=.o)

INCS := $(addprefix $(DIR_INCS)/, $(INCS))
SRCS := $(addprefix $(DIR_SRCS)/, $(SRCS))
OBJS := $(addprefix $(DIR_OBJS)/, $(LST_OBJS))

all :		$(NAME)

$(NAME) :	$(OBJS) $(INCS) Makefile
			$(CPPC) $(OBJS) -o $(NAME)

$(DIR_OBJS):
		mkdir -p $(DIR_OBJS)

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.cpp $(INCS) Makefile | $(DIR_OBJS)
		$(CC) $(CFLAGS) -c $< -o $@

clean :
			$(RM) $(OBJS)
			$(RM) $(DIR_OBJS)

fclean : clean
			$(RM) $(NAME)
			
re :		fclean all
			
.PHONY:		all clean fclean re