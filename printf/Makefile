NAME = libftprintf.a
ASFLAG = -rcs
RM = rm -rf
SRC = ft_printf.c ft_percent_p.c ft_source.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar $(ASFLAG) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

