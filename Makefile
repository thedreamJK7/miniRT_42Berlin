CC = cc
CFLAGS = -g -Wall -Wextra -Werror -I$(MLX_DIR)

SRCS = ./main.c

OBJS = $(SRCS:.c=.o)

MLX_DIR = ./minilibxlinux
MLX_LIB = $(MLX_DIR)/libmlx.a
MLX_FLAGS = -L$(MLX_DIR) -lmlx -lX11 -lXext
MAKE = make

NAME = so_long

# Main rule
all: $(NAME)

# Linking rule
$(NAME): $(OBJS) $(MLX_LIB) 
	$(CC) $(CFLAGS) $(OBJS) $(MLX_FLAGS) -o $(NAME)

$(MLX_LIB):
	$(MAKE) -C $(MLX_DIR)

# Rule to compile .c files to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Cleaning rules
clean:
	rm -f $(OBJS) $(LIBFT_OBJS)
	$(MAKE) -C $(MLX_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(MLX_DIR) clean

re: fclean all

.PHONY: fclean clean re all
