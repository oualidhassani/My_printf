NAME = libftprintf.a
SRCS = \
		ft_printf.c ft_printfx.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_printadres.c ft_printfu.c

OBJ = $(SRCS:.c=.o)

AR = ar rcs

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)

	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re