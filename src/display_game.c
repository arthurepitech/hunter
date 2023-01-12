/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display_game
*/

#include "../include/my_hunter.h"

void display_game(my_hunter_t *h)
{
    sfRenderWindow_display(h->window);
    sfRenderWindow_clear(h->window, sfBlack);
    parallax_background(h);
    display_parallax(h);
    display_eric_mode(h);
    display_score(h);
    display_life(h);
    display_cursor(h);
    if (h->start == 0)
        display_start(h);
    else
        display_duck(h);
    display_game_over(h);
}
