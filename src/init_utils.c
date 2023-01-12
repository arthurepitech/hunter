/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_utils
*/

#include "../include/my_hunter.h"

void init_utils(my_hunter_t *h)
{
    if (h->e.eric_mode == 1)
        h->d.speed = 20;
    else
        h->d.speed = 50;
    h->start = 0;
    h->d.position.x = -200;
    h->d.position.y = 500;
    h->clock = sfClock_create();
    h->cursor_t = sfTexture_createFromFile("assets/utils/cursor.png", NULL);
    h->cursor_s = sfSprite_create();
    sfSprite_setTexture(h->cursor_s, h->cursor_t, sfTrue);
    sfSprite_setScale(h->cursor_s, (sfVector2f){0.5, 0.5});
}
