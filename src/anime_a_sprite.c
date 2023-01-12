/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** anime_a_sprite
*/

#include "../include/my_hunter.h"

void anime_a_sprite(my_hunter_t *h, int offset, int max_value)
{
    h->d.rect.left = h->d.rect.left + offset;
    if (h->d.rect.left >= max_value)
        h->d.rect.left = 0;
    h->d.position.x += h->d.speed;
    sfSprite_setTextureRect(h->d.sprite, h->d.rect);
}
