/*
** EPITECH PROJECT, 2022
** C Graphical Programming
** File description:
** display_start
*/

#include "../include/my_hunter.h"

void display_start(my_hunter_t *h)
{
    sfRenderWindow_drawSprite(h->window, h->get_started_s, NULL);
    while (sfRenderWindow_pollEvent(h->window, &h->event)) {
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue)
            h->start = 1;
    }
}
