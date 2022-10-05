NAME =	push_swap

# source / objects 
SRC = 

OBJ = $(SRC:.c=.o)

INC = ./inc

all: $(NAME)

$(NAME): libft

libft:
	make -C $(LIBFT_DIR) all

clean:
	rm $(OBJ)/%

fclean: clean
	
re: fclean all

.PHONY:	
