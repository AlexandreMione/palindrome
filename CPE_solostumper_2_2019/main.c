/*
** EPITECH PROJECT, 2020
** Palindrome
** File description:
** main
*/

#include "include/my.h"

int error(int ac)
{
    if (ac < 2) {
        my_printf("Error: missing arguments.\n");
        return (84);
    }
    if (ac > 2) {
        my_printf("Error: too many arguments.\n");
        return (84);
    }
}

int main(int ac, char **av)
{
    char *str;
    int x;
    int y;

    if (error(ac) == 84)
        return (84);
    y = my_strlen(av[1]) - 1;
    str = my_revstr(av[1]);
    my_strlowcase(av[1]);
    my_strlowcase(str);
    while (str[x] != '\0') {
        if (str[x] == av[1][y]) {
            x++;
            y--;
        }
        if (str[x] != av[1][y]) {
            my_printf("not a palindrome.\n");
            break;
        }
        if (y == -1)
            my_printf("palindrome!\n");
    }
    return (0);
}
