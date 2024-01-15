NAME = pushswap.a

SRCS = \
	pushswap.c

OBJ = $(SRCS:.c=.o)

AR = ar rcs

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(AR) $(NAME) $(OBJ)
	$(CC) $(CFLAGS) -o pushswap $(NAME) $(LIBFT)  

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	cd $(LIBFT_DIR) && $(MAKE)
clean:
	$(RM) $(OBJ)
	cd $(LIBFT_DIR) && $(MAKE) clean

fclean: clean
	$(RM) $(NAME)
	cd $(LIBFT_DIR) && $(MAKE) clean
	
re: fclean all


.PHONY: all clean fclean re