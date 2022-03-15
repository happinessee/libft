# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 13:10:45 by hyojeong          #+#    #+#              #
#    Updated: 2022/03/15 15:00:29 by hyojeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
NAME2 = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_toupper.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
	ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
	ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJECTS = $(SRCS:.c=.o)
BONUS_OBJS = $(BOUNS:.c=.o)

$(OBJECTS:.o) : $(SRCS:.c)
	$(CFLAGS) -c $< -o $@ -I

$(BONUS_OBJS:.o) : $(BONUS:.c)
	$(CFLAGS) -c $< -o $@ -I

$(NAME) : $(OBJECTS)
	ar rc $@ $^

$(NAME2) : $(OBJECTS) $(BONUS_OBJS)
	ar rc $@ $^

all : $(NAME)

clean :
	rm -f $(OBJECTS) $(BONUS_OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

bonus : $(NAME2)