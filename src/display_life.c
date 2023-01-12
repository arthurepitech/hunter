/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display_life
*/

#include "../include/my_hunter.h"

void display_sprite_life(my_hunter_t *h)
{
    sfRenderWindow_drawSprite(h->window, h->l.life_one, NULL);
    sfRenderWindow_drawSprite(h->window, h->l.life_two, NULL);
    sfRenderWindow_drawSprite(h->window, h->l.life_three, NULL);
}

void display_life(my_hunter_t *h)
{
    if (h->l.life >= 3)
        display_sprite_life(h);
    if (h->l.life == 2) {
        sfSprite_setTexture(h->l.life_three, h->l.life_lost, sfTrue);
        display_sprite_life(h);
    }
    if (h->l.life == 1) {
        sfSprite_setTexture(h->l.life_two, h->l.life_lost, sfTrue);
        sfSprite_setTexture(h->l.life_three, h->l.life_lost, sfTrue);
        display_sprite_life(h);
    }
    if (h->l.life == 0)
        h->g.game_over = 1;
}
