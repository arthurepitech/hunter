/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display_eric_mode
*/

#include "../include/my_hunter.h"

void display_eric_mode(my_hunter_t *h)
{
    if (h->e.eric_mode == 1)
        sfRenderWindow_drawSprite(h->window, h->e.eric_s, NULL);
}
