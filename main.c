/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main
*/

#include "my_project.h"

int main(int ac, char **av)
{
    if (ac == 2) {
        my_puterror("Error Syntax");
        return 84;
    }
    my_printf("Hello World %d\n", 42);
    my_printf("BIte %d\n", 42);
    my_putstr(av[0]);
    my_putchar('\n');
    my_put_nbr(ac);
    my_putchar('\n');
    my_put_nbr_base(ac, "01");
    return 0;
}