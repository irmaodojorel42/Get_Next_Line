# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 16:04:12 by ceribeir          #+#    #+#              #
#    Updated: 2023/04/26 13:57:12 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libgetnextline.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC = get_next_line_utils.c get_next_line.c

RM = rm -f

AR = ar -rcs

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) a.out

re: fclean all

run: re
	$(CC) $(CFLAGS) main.c -L. -lgetnextline
	