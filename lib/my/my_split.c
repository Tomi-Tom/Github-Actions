/*
** EPITECH PROJECT, 2021
** STR_WORD_TO_ARRAY
** File description:
** put an str into an array
*/

#include "my.h"

int is_separator(char c, char const *sep)
{
    while (*sep) {
        if (c == *sep)
            return 1;
        sep++;
    }
    return 0;
}

int my_tablen(char const *str, char const *sep)
{
    int tot = 0;

    while (*str) {
        if (is_separator(*str, sep))
            tot++;
        while (is_separator(*str, sep)) {
            str++;
        }
        str++;
    }
    return tot;
}

int my_len_word(char const *str, char const *sep)
{
    int tot = 0;

    while (is_separator(str[tot], sep) && str[tot]) {
        tot++;
    }
    return tot;
}

char **my_split(char const *str, char const *sep)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **tab = malloc(sizeof(char *) * (my_tablen(str, sep) + 2));

    while (str[i]) {
        while (is_separator(str[i], sep) && str[i])
            i++;
        if (str[i])
            tab[j] = malloc(sizeof(char) * (my_len_word(&str[i], sep) + 1));
        k = i;
        while (is_separator(str[i], sep) == 0 && str[i]) {
            tab[j][i - k] = str[i];
            i++;
        }
        tab[j][i - k] = '\0';
        j++;
    }
    tab[j] = NULL;
    return tab;
}
