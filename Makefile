NAME = push_swap
BONUS = checker

SRCS = sort.c firstpush.c setup_rules.c utilsfunction.c parsing.c algo.c errors.c utilsfunction1.c setuprules1.c main.c
CHECKER_SRCS = checker_bonus.c get_next_line.c get_next_line_utils.c checker_utils.c checker_utils1.c setup_rules_bonus.c setuprules1_bonus.c  checker_utils2.c
SRCSLIBFT =  libft/ft_atoi.c libft/ft_itoa.c libft/ft_putchar_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strlen.c libft/ft_strcmp.c libft/ft_putstr_fd2.c libft/ft_putchar_fd2.c libft/ft_putnbr_fd2.c libft/ft_printfx.c libft/ft_printadres.c libft/ft_printf.c libft/ft_printfu.c libft/ft_is_string_digit.c libft/ft_strncmp.c libft/ft_isdigit.c
OBJ = $(SRCS:.c=.o)
OBJLIBFT = $(SRCSLIBFT:.c=.o)
CHECKER_OBJ = $(CHECKER_SRCS:.c=.o)

AR = ar rcs
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3 #-fsanitize=address
RM = rm -f
LIBFT = libft/libft.a
all: $(NAME)

bonus : $(BONUS)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

$(BONUS): $(CHECKER_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(BONUS) $(CHECKER_OBJ) $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT): $(OBJLIBFT)
	make -C libft

clean:
	$(RM) $(OBJ) $(CHECKER_OBJ)
	make clean -C libft

fclean: clean
	$(RM) $(NAME) $(BONUS)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re
