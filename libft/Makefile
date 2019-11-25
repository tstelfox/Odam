# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tmullan <tmullan@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/02 00:43:01 by tmullan        #+#    #+#                 #
#    Updated: 2019/11/25 22:49:44 by tmullan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_toupper.c \
		ft_tolower.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_isalnum.c \
		ft_isdigit.c \
		ft_isalpha.c \
		ft_atoi.c \
		ft_strncmp.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlcpy.c \
		ft_calloc.c \
		ft_strnstr.c \
		ft_strlcat.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_split.c \

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstmap_bonus.c \

HEAD = libft.h

OBJ = $(SRCS:.c=.o)

BOBJ = $(BONUS:.c=.o)

FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(FLAGS) $(HEAD)
	ar rc $(NAME) $(OBJ)

bonus:
	gcc -c $(BONUS) $(FLAGS) $(HEAD)
	ar rc $(NAME) $(BOBJ)

clean:
	rm -f $(OBJ) $(BOBJ) libft.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
