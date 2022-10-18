NAME	=		push_swap

############# compiler ############
CC	=	cc
CFLAGS	=	-Wextra -Wall -Werror -g

SRCDIR	=	./src/
INCDIR	=	./include/
OBJDIR	=	./obj/

############## source / objects #########
SRC	=	push_swap.c push.c rotate.c reverse_rotate.c \
	 	swap.c 

OBJ	=	$(addprefix $(SRCDIR), $(SRC:.c=.o))

############## ft library ###########
FT		=	./libft/
FT_LIB	=	$(addprefix $(FT), libft.a)

############ ft_printf ##########
FT_PTF	=	./ft_printf/
LIB_PTF	=	$(addprefix $(FT_PTF), libftprintf.a)

############ commands ############

all: obj $(FT_LIB) $(LIB_PTF) $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) -I $(FT) -I $(INCDIR) -c $< -o $@

$(FT_LIB):
	make -C $(FT) all

$(LIB_PTF):
	make -C $(FT_PTF) all

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FT_LIB) $(LIB_PTF) -o $@

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
