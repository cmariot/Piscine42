NAME =
		libft.a

SRC =
		./srcs/ft_putchar.c\
		./srcs/ft_swap.c\
		./srcs/ft_putstr.c\
		./srcs/ft_strlen.c\
		./srcs/ft_strcmp.c

OBJECTS =
		./srcs/ft_putchar.o\
         	./srcs/ft_swap.o\
         	./srcs/ft_putstr.o\
         	./srcs/ft_strlen.o\
         	./srcs/ft_strcmp.o
 
HEADER =
		./includes/ft.h


all: $(NAME)

$(NAME): 
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) 	

fclean:	clean
	rm -f $(NAME)

re: fclean all
	



regle_a:
	@echo "regle A"
regle_b:	regle_a
	echo "regle B" 
