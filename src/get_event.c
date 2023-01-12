/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** get_event
*/

#include "../include/my_hunter.h"

void check_if_touch(my_hunter_t *h)
{
    if (h->mouse_pos.x >= h->d.position.x &&
        h->mouse_pos.x <= h->d.position.x + 110 &&
        h->mouse_pos.y >= h->d.position.y &&
        h->mouse_pos.y <= h->d.position.y + 110) {
        sfMusic_play(h->duck_sound);
        h->d.position.x = -500;
        h->d.position.y = 150 + rand() % 550;
        sfSprite_setPosition(h->d.sprite, h->d.position);
        h->s.score += 1;
        sfText_setString(h->s.score_nb, my_int_to_array(h->s.score));
    } else {
        h->d.position.y = h->d.position.y;
        h->l.life--;
    }
}

void mouse_event(my_hunter_t *h)
{
    if (h->event.mouseButton.button == sfMouseLeft) {
        h->d.position = sfSprite_getPosition(h->d.sprite);
        sfMusic_play(h->fire_sound);
        sfMusic_setPitch(h->fire_sound, 1 + (rand() % 100) / 100.0);
        check_if_touch(h);
    }
}

void get_event(my_hunter_t *h)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(h->window);
    while (sfRenderWindow_pollEvent(h->window, &h->event)) {
        if (h->event.type == sfEvtClosed)
            sfRenderWindow_close(h->window);
        if (h->event.type == sfEvtMouseButtonPressed)
            mouse_event(h);
    }
}
