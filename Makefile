NAME =	push_swap

SRCDIR = "./include/"

# source / objects 
SRC = push_swap.c

OBJ = $(addprefix $(SRCDIR), $(SRC:.c=.o))

INC = ./inc

all: $(NAME)

$(NAME): libft $(OBJ)

libft:
	make -C $(LIBFT_DIR) all

clean:
	rm $(OBJ)/%

fclean: clean
	
re: fclean all

.PHONY:	
