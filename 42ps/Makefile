# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 09:30:19 by afindo            #+#    #+#              #
#    Updated: 2022/02/28 12:39:12 by afindo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
LIBFT_PATH	=	./libft/
INCL		=	./inc/

CFLAGS		=	-I$(LIBFT_PATH)inc/ -I $(INCL) $(FLAGS)


LINKS		=	-L $(LIBFT_PATH) -lft

NAME_PSWAP	=	push_swap


SRCS_PATH	=	src/

SRCS_BOTH	=	check_arg.c \
				elem.c\
				stack.c \
				operation.c \
				utils.c \
				free.c \
				push_swap.c \
				insert.c	\
				print.c		\
				do_operation.c		\
				sort_small.c

SRCS_PSWAP2	=	$(addprefix $(SRCS_PATH)src_pswap/, $(SRCS_PSWAP)) \
				$(addprefix $(SRCS_PATH), $(SRCS_BOTH))

OBJ_PSWAP	=	$(SRCS_PSWAP2:.c=.o)

OBJ_PATH	=	$(OBJ_PSWAP) \
				$(OBJ_CHK)


all : libs $(NAME_PSWAP)

$(NAME_PSWAP) : libs $(OBJ_PSWAP)
	@$(CC) -o $(NAME_PSWAP) $(OBJ_PSWAP) $(CFLAGS) $(LINKS)


clean:
	@/bin/rm -rf $(OBJ_PATH)
	@make -C $(LIBFT_PATH) clean
	@echo "\033[31mObjects files \033[1;31m$(OBJS_LIST)\033[1;0m\033[31m removed.\033[0m"

fclean: clean
	@/bin/rm -rf $(NAME_PSWAP)
	@/bin/rm -rf $(LIBFT_PATH)libft.a
	@echo "\033[31mBin \033[1;31m$(NAME)\033[1;0m\033[31m removed.\033[0m"

re: fclean all

libs:
	@make -C $(LIBFT_PATH)

.PHONY: all re clean fclean libs
