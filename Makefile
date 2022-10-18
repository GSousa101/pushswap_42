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
FT_LIB	=	$(FT)libft.a

# ft_printf
FT_PTF	=	./ft_printf/
PTF_LIB	=	$(FT_PF)ft_printf.a

# commands
all: obj $(FT_LIB) $(PTF_LIB) $(NAME)

obj:
	mkdir -p $(OBJDIR)
$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) -I $(FT) -I $(INCDIR) -c $< -o $@

# libraries
$(FT_LIB):
	make -C $(FT) all
$(PTF_LIB):
	make -C $(FT_PTF) all

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FT_LIB) $(PTF_LIB) -o $@

clean:
	rm -rf $(OBJDIR)
	make -C $(FT) clean
	make -C $(FT_PTF) clean

fclean: clean
	rm -f $(NAME)
	make -C $(FT) fclean
	make -C $(FT_PTF) fclean
	
re: fclean all

norm:
	norminette -CheckForbiddenSourceHeader

valgrind:
	valgrind

MAKEFLAGS	=	--silent

.PHONY:	all, re, fclean, clean, norminette
