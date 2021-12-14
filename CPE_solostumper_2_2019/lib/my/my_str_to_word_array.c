/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include "my.h"
#include <stdlib.h>

int chara(char c)
{
    if (c >= '0' && c <= '9' || c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int number(char const *str)
{
    int a;
    int b;

    while (str[a] != '\0') {
        if (chara(str[a]) == 1 && chara(str[a + 1]) != 1)
            b++;
        a++;
    }
    return (b);
}

int len(char *str, int x)
{
    while (str[x] != '\0') {
        if (chara(str[x]) != 1)
            return (x);
        x++;
    }
    return (x);
}

char **my_str_to_word_array(char const *str)
{
    int y = number(str);
    char **res = malloc(10000);
    int a;
    int b;
    int c;

    while (b < y) {
        c = 0;
        res[b] = malloc(100000);
        while (str[a] != '\0' && chara(str[a]) != 0) {
            res[b][c] = str[a];
            c++;
            a++;
        }
        res[b][c] = '\n';
        res[b][c + 1] = '\0';
        a++;
        b++;
    }
    free(res);
    return (res);
}
