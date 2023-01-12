/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** display_utils
*/

#include "../include/my_hunter.h"

void display_cursor(my_hunter_t *h)
{
    h->mouse_pos = sfMouse_getPositionRenderWindow(h->window);
    h->mouse_pos.x -= 32;
    h->mouse_pos.y += 32;
    sfSprite_setPosition(h->cursor_s
        , (sfVector2f){h->mouse_pos.x, h->mouse_pos.y});
    sfRenderWindow_drawSprite(h->window, h->cursor_s, NULL);
}
