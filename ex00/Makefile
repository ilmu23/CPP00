# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 15:26:08 by ivalimak          #+#    #+#              #
#    Updated: 2024/05/10 15:38:50 by ivalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++11

FILES	=	megaphone.cpp

SRCDIR	=	src
OBJDIR	=	obj

SRCS	=	$(addprefix $(SRCDIR)/, $(FILES))
OBJS	=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	@printf "\e[36;1m>\e[m Compiling %s\n" $@
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "\e[36;1m>\e[m \e[1mDone!\e[m\n"

$(OBJDIR):
	@printf "\e[36;1m>\e[m Creating objdir\n"
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@printf "\e[36;1m>\e[m Compiling %s\n" $@
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -rf $(OBJDIR)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
