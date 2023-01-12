/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_eric_mode
*/

#include "../include/my_hunter.h"

void init_eric_mode(my_hunter_t *h)
{
    h->e.eric_t = sfTexture_createFromFile("assets/utils/eric_mode.png", NULL);
    h->e.eric_s = sfSprite_create();
    sfSprite_setTexture(h->e.eric_s, h->e.eric_t, sfTrue);
    sfSprite_setPosition(h->e.eric_s, (sfVector2f){50, 50});
}
