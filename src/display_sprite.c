/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display_sprite
*/

#include "../include/my_hunter.h"

void display_duck(my_hunter_t *h)
{
    h->time = sfClock_getElapsedTime(h->clock);
    h->seconds = h->time.microseconds / 1000000.0;
    sfRenderWindow_drawSprite(h->window, h->d.sprite, NULL);
    if (h->seconds > 0.1) {
        anime_a_sprite(h, 110, 330);
        sfClock_restart(h->clock);
    }
    if (h->d.position.x > 1920) {
        h->d.position.x = -200;
        h->d.position.y = rand() % 800;
        h->l.life -= 1;
    }
    sfSprite_setPosition(h->d.sprite, h->d.position);
}
