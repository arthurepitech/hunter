/*
** EPITECH PROJECT, 2022
** C Graphical Programming
** File description:
** display_game_over
*/

#include "../include/my_hunter.h"

void check_restart(my_hunter_t *h)
{
    while (sfRenderWindow_pollEvent(h->window, &h->event)) {
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
            destroy_all(h);
            h->g.game_over = 0;
            init_game(h);
            display_game(h);
        }
    }
}

void display_game_over(my_hunter_t *h)
{
    if (h->g.game_over == 1) {
        sfRenderWindow_drawSprite(h->window, h->g.game_over_s, NULL);
        get_high_score(h);
        check_restart(h);
    }
}
