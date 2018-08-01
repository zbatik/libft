# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbatik <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 11:33:49 by zbatik            #+#    #+#              #
#    Updated: 2018/08/01 11:38:16 by zbatik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LIB     = libft.a
FLAGS	= -Wall -Wextra -Werror
DIRS    = char/ conv/ lst/ math/ put/ file/ mem/ str/
CFILES	= $(addsuffix *.c,$(DIRS))
OBJDIR	= obj/

all : $(LIB)
	gcc $(FLAGS) $(CFILES) -c
	mkdir -p $(OBJDIR)
	mv *.o $(OBJDIR)

$(LIB) :
	ar rc $(LIB) $(join $(OBJDIR),*.o)
	ranlib $(LIB)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
