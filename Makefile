# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hvalenci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 20:15:11 by hvalenci          #+#    #+#              #
#    Updated: 2019/09/06 20:28:50 by hvalenci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./*.c

OBJ = ./*.o

HEADER = ./libft.h

all : $(NAME)

$(NAME) :
	@gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER)
	@ar rc $(NAME) $(OBJ)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all
