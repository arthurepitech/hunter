/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_hunter
*/

#include "../include/my_hunter.h"

int my_hunter(my_hunter_t *h)
{
    init_game(h);
    while (sfRenderWindow_isOpen(h->window)) {
        get_event(h);
        display_game(h);
    }
    get_high_score(h);
    destroy_all(h);
    return 0;
}
