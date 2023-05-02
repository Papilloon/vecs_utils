# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parallels <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/31 11:04:32 by parallels         #+#    #+#              #
#    Updated: 2023/04/04 12:21:19 by parallels        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= vec_utils.a

CC	= clang -Wall -Wextra -Werror

SRCS	= dot_vec.c \
	  new_vec.c \
	  init_vec.c \
	  vec_normalized.c \
	  vec_substract_coef.c \
	  vec_add_with_coef.c \
	  vec_clamp.c \
	  t_vec_min_max.c \
	  vec_multiply.c \
	  vec_substract_vecs.c \
	  vec_cross.c \
	  init_quat.c \
	  vec_rotate.c \
	  quat_cross.c \
	  init_mat.c \
	  vec_add.c \
	  mat_look_at.c \
	  quat_normalized.c \
	  vec_reflect.c \
	  vec_angle_bet.c \
	  vec_angleAxis.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
