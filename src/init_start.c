/*
** EPITECH PROJECT, 2022
** C Graphical Programming
** File description:
** init_start
*/

#include "../include/my_hunter.h"

void init_start(my_hunter_t *h)
{
    h->get_started_t =
        sfTexture_createFromFile("assets/utils/get_started.png", NULL);
    h->get_started_s = sfSprite_create();
    sfSprite_setTexture(h->get_started_s, h->get_started_t, sfTrue);
    sfSprite_setPosition(h->get_started_s, (sfVector2f){0, 0});
}
