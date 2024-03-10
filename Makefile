NAME = push_swap
BONUS = checker

SRCS = sort.c firstpush.c setup_rules.c utilsfunction.c parsing.c algo.c errors.c utilsfunction1.c setuprules1.c main.c
CHECKER_SRCS = checker_bonus.c get_next_line.c

OBJ = $(SRCS:.c=.o)
CHECKER_OBJ = $(CHECKER_SRCS:.c=.o)

AR = ar rcs
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3 #-fsanitize=address
RM = rm -f
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

bonus : $(BONUS)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

$(BONUS): $(CHECKER_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(BONUS) $(CHECKER_OBJ) $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@cd $(LIBFT_DIR) && $(MAKE)

clean:
	$(RM) $(OBJ) $(CHECKER_OBJ)
	@cd $(LIBFT_DIR) && $(MAKE) clean

fclean: clean
	$(RM) $(NAME) $(BONUS)
	@cd $(LIBFT_DIR) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
