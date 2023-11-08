FILES = ft_print_hexa\
				ft_print_ptr\
				ft_printf\
				ft_print_int\
				ft_print_unsigned\
				ft_printf_classic\

CFILES = $(FILES:%=%.c)
OFILES = $(FILES:%=%.o)

# Compiler and Flags
CC = gcc
CFLAGS = -Werror -Wextra -Wall

# Name of the taget
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OFILES)
	@ar rcs $@ $(OFILES)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove object files
clean:
	@rm -f $(OFILES)

# Full clean rule to remove object files and the library
fclean:
	@rm -f $(NAME)

# Rebuild rule
re: fclean all

.PHONY: all clean fclean re 