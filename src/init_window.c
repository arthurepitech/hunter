/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** open_window
*/

#include "../include/my_hunter.h"

void init_window(my_hunter_t *h)
{
    h->window = sfRenderWindow_create((sfVideoMode){1920, 1080, 32}
        , "My Hunter", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(h->window, 120);
    sfRenderWindow_setMouseCursorVisible(h->window, sfFalse);
    sfRenderWindow_setVerticalSyncEnabled(h->window, sfTrue);
    sfRenderWindow_setPosition(h->window, (sfVector2i){0, 0});
    sfRenderWindow_setSize(h->window, (sfVector2u){1920, 1080});
    sfMouse_setPositionRenderWindow((sfVector2i){960, 540}, h->window);
}
