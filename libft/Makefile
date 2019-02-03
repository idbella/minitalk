# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sid-bell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/06 16:23:12 by sid-bell          #+#    #+#              #
#    Updated: 2019/01/30 08:50:32 by sid-bell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFILES=*.c
OFILES=*.o
all : $(NAME)
$(NAME) :
	gcc -c $(CFILES) -Wall -Wextra -Werror
	ar rc $(NAME) $(OFILES)
clean :
	rm -rf $(OFILES)
fclean : clean
	rm -rf $(NAME)
re : fclean all
