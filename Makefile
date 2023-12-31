
NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

AR = ar -rcs

SRC = ft_printf.c \
		ft_printf_utils.c \
		ft_printf_utils2.c

OBJECTS = $(SRC:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -I . -c $< -o $@

$(NAME): $(OBJECTS)
		$(AR) $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: fclean re all clean