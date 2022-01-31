##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

## ===========================================================
## ===========================[VAR]===========================
## ===========================================================

NAME			=			binaire

NAME_TEST		=			unit_test

## ==========================[PATHS]==========================

SRC_PATH		=			srcs/

## ===========================[SRC]===========================

SRC				=

OBJ				=			$(SRC:.c=.o)

## =========================[OPTIONS]=========================

FLAGS			=			-Wall -Wextra -Werror

CPPFLAGS		=			-I include

LDFLAGS			=			-L lib -lmy

CRIT			=			-lcriterion --coverage

## ===========================================================
## ==========================[RULES]==========================
## ===========================================================

all:
		make all -C lib/my
		make $(NAME)

$(NAME):	$(OBJ)
		gcc $(FLAGS) -o $(NAME) main.c $(OBJ) $(CPPFLAGS) $(LDFLAGS)

re:			fclean	all

clean:
		make clean -C lib/my

fclean:		clean
		make fclean -C lib/my
		rm -rf $(NAME)
		rm -rf $(NAME_TEST)
		rm -rf *gcda
		rm -rf *gcno

tests_run:
	gcc -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(INC) $(CRIT)

## ===========================[END]===========================

.PHONY:	all	re	clean	fclean	tests_run