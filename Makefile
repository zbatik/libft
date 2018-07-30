# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbatik <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 11:33:49 by zbatik            #+#    #+#              #
#    Updated: 2018/07/30 12:30:59 by zbatik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LIB     = libft.a
FLAGS	= -Wall -Wextra -Werror
DIRS    = char/ conv/ lst/ math/ put/ read/ mem/ str/
CFILES	= $(addsuffix *.c,$(DIRS))
OBJDIR	= obj/

all : $(OBJ_DIR)
	gcc $(FLAGS) $(CFILES) -c
	mkdir -p $(OBJDIR)
	mv *.o $(OBJDIR)
	ar rc $(LIB) $(join $(OBJDIR),*.o)
	ranlib $(LIB)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
