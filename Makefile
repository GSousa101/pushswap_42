NAME	=		push_swap

# compiler
CC	=	cc
CFLAGS	=	-Wextra -Wall -Werror -g

SRCDIR	=	./src/
INCDIR	=	./include/
OBJDIR	=	./obj/

# source / objects 
SRC	=	push_swap.c push.c rotate.c reverse_rotate \
	 	swap.c 

OBJ	=	$(addprefix $(SRCDIR), $(SRC:.c=.o))

# ft library
FT		=	./libft/
FT_LIB	=	./libft/libft.a

# commands
all: obj $(FT_LIB) $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) -I $(FT) -I $(INCDIR) -c $< -o $@

$(FT_LIB):
	make -C $(FT) all

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FT_LIB) -o $@

clean:
	rm -rf $(OBJDIR)
	make -C $(FT) clean

fclean: clean
	rm -f $(NAME)
	make -C $(FT) fclean
	
re: fclean all

norm:
	norminette -CheckForbiddenSourceHeader

valgrind:
	valgrind

.PHONY:	
