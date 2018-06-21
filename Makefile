# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbatik <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 11:33:49 by zbatik            #+#    #+#              #
#    Updated: 2018/06/21 17:20:59 by zbatik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Wextra -Werror
FILES		= 	ft_atoi \
				ft_bzero \
				ft_countc \
				ft_element \
				ft_indexcin \
				ft_isalnum \
				ft_isalpha \
				ft_isascii \
				ft_isdigit \
				ft_islower \
				ft_isprint \
				ft_isupper \
				ft_isws \
				ft_itoa \
				ft_lstadd \
				ft_lstdel \
				ft_lstdelone \
				ft_lstiter \
				ft_lstmap \
				ft_lstnew \
				ft_max \
				ft_memalloc \
				ft_memccpy \
				ft_memchr \
				ft_memcmp \
				ft_memcpy \
				ft_memdel \
				ft_memmove \
				ft_memset \
				ft_min \
				ft_putchar \
				ft_putchar_fd \
				ft_putendl \
				ft_putendl_fd \
				ft_putnbr \
				ft_putnbr_fd \
				ft_putstr \
				ft_putstr_fd \
				ft_putstrarr \
				ft_sign \
				ft_strcat \
				ft_strchr \
				ft_strclr \
				ft_strcmp \
				ft_strcpy \
				ft_strdel \
				ft_strdup \
				ft_strequ \
				ft_striter \
				ft_striteri \
				ft_strjoin \
				ft_strlcat \
				ft_strlen \
				ft_strmap \
				ft_strmapi \
				ft_strncat \
				ft_strncmp \
				ft_strncpy \
				ft_strnequ \
				ft_strnew \
				ft_strnstr \
				ft_strrchr \
				ft_strsplit \
				ft_strstr \
				ft_strsub \
				ft_strtrim \
				ft_tolower \
				ft_toupper \
				ft_strnjoin \
				ft_strtake \
				ft_strdrop \
				ft_strreplace 

CFILES		= $(addsuffix .c, $(FILES))
OFILES		= $(addsuffix .o, $(FILES))

all: $(NAME)
$(NAME):
	gcc $(CFLAGS) -c $(CFILES) -I ./
	ar rcs $(NAME) $(OFILES)
clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette libft.h
	norminette $(wordlist 1, 20, $(CFILES))
	norminette $(wordlist 21, 40, $(CFILES))
	norminette $(wordlist 41, 60, $(CFILES))
	norminette $(wordlist 61, 80, $(CFILES))

.PHONY: all clean fclean re norm
