NAME	=	pb

CC		= 	c++
CFLAGS	=	-std=c++17 -Wall -Wextra -Werror -g

SRCDIR	=	src
OBJDIR	=	obj
INCDIR	=	inc

FILES	=	main.cpp \
			Contact.cpp \
			PhoneBook.cpp

SRCS	=	$(addprefix $(SRCDIR)/, $(FILES))
OBJS	=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean:
	@rm -rf $(OBJDIR)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
