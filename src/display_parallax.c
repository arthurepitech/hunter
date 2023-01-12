/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display_parallax
*/

#include "../include/my_hunter.h"

void display_parallax(my_hunter_t *h)
{
    sfRenderWindow_drawSprite(h->window, h->background.sky_s, NULL);
    sfRenderWindow_drawSprite(h->window, h->background.cloud_s, NULL);
    sfRenderWindow_drawSprite(h->window, h->background.sea_s, NULL);
    sfRenderWindow_drawSprite(h->window, h->background.decor_s, NULL);
}
