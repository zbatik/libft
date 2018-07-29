# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbatik <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 11:33:49 by zbatik            #+#    #+#              #
#    Updated: 2018/07/29 14:53:53 by zbatik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FT_NAME = libft.a
SRC_DIR	= ./
INC_DIR	= ./includes
OBJ_DIR	= ./obj

RAW_SRC	:= $(shell find $(SRC_DIR) -type f | grep -E "\.c$$")
RAW_DIRS:= $(shell find $(SRC_DIR) -type d -mindepth 1)
SRCDIRS = $(RAW_DIRS:./src/%=%)
SRC		= $(RAW_SRC:./src/%=%)
OBJ		= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all: $(OBJ_DIR) $(FT_NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(addprefix $(OBJ_DIR)/,$(SRCDIRS))

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(FT_INC) -o $@ -c $<

$(FT_NAME): $(OBJ)
	ar rc $(FT_NAME) $(OBJ)
	ranlib $(FT_NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(FT_NAME)

re: fclean all

norm:
	norminette *.h
	norminette $(wordlist 1, 20, $(CFILES))
	norminette $(wordlist 21, 40, $(CFILES))
	norminette $(wordlist 41, 60, $(CFILES))
	norminette $(wordlist 61, 80, $(CFILES))

.PHONY: all clean fclean re norm
