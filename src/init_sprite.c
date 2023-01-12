/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_sprite
*/

#include "../include/my_hunter.h"

void init_sprite(my_hunter_t *h)
{
    h->d.sprite = sfSprite_create();
    h->d.texture = sfTexture_createFromFile("assets/sprites/duck.png", NULL);
    sfSprite_setTexture(h->d.sprite, h->d.texture, sfTrue);
    sfSprite_setPosition(h->d.sprite, (sfVector2f){-200, 500});
    h->d.rect = (sfIntRect){0, 0, 110, 110};
    sfSprite_setTextureRect(h->d.sprite, h->d.rect);
}
