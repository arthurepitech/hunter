/*
** EPITECH PROJECT, 2022
** C Graphical Programming
** File description:
** init_game_over
*/

#include "../include/my_hunter.h"

void init_game_over(my_hunter_t *h)
{
    h->g.game_over_t =
        sfTexture_createFromFile("assets/utils/game_over.png", NULL);
    h->g.game_over_s = sfSprite_create();
    sfSprite_setTexture(h->g.game_over_s, h->g.game_over_t, sfTrue);
    sfSprite_setPosition(h->g.game_over_s, (sfVector2f){0, 0});
}
