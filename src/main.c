/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** main
*/

#include "../include/my_hunter.h"
#include <stddef.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    my_hunter_t *h = malloc(sizeof(my_hunter_t));
    if (ac == 1)
        return my_hunter(h);
    for (int i = 1; av[i] != NULL; i++) {
        if (check_flag(av[i], h) == 84)
            return 84;
    }
    free(h);
    return 0;
}
