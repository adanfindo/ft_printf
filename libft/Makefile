# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afindo <afindo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 10:31:49 by afindo            #+#    #+#              #
#    Updated: 2023/01/25 10:31:49 by afindo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_isdigit ft_memset ft_strjoin ft_strtrim ft_isprint\
ft_putchar_fd ft_strlcat ft_substr ft_atoi ft_itoa ft_putendl_fd\
ft_strlcpy ft_tolower ft_bzero ft_memcpy ft_putnbr_fd ft_strlen\
ft_toupper ft_calloc ft_memchr ft_putstr_fd ft_strmapi ft_isalnum\
ft_memcmp ft_split ft_strncmp ft_isalpha ft_memcpy ft_strchr\
ft_strnstr ft_isascii ft_memmove ft_strdup ft_strrchr ft_striteri

FILES_B = ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone\
		ft_lstiter ft_lstlast ft_lstnew ft_lstsize\
		ft_lstmap


NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

INCS = includes

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $< -I${INCS}

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
