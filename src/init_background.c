/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_background
*/

#include "../include/my_hunter.h"

void parallax_background(my_hunter_t *h)
{
    sfVector2f sky_pos = sfSprite_getPosition(h->background.sky_s);
    sfVector2f cloud_pos = sfSprite_getPosition(h->background.cloud_s);
    sfVector2f sea_pos = sfSprite_getPosition(h->background.sea_s);
    sfVector2f decor_pos = sfSprite_getPosition(h->background.decor_s);
    if (sky_pos.x <= -1920)
        sfSprite_setPosition(h->background.sky_s, (sfVector2f){0, 0});
    if (cloud_pos.x <= -1920)
        sfSprite_setPosition(h->background.cloud_s, (sfVector2f){0, 0});
    if (sea_pos.x <= -1920)
        sfSprite_setPosition(h->background.sea_s, (sfVector2f){0, 0});
    if (decor_pos.x <= -1920)
        sfSprite_setPosition(h->background.decor_s, (sfVector2f){0, 0});
    sfSprite_move(h->background.sky_s, (sfVector2f){-0.6, 0});
    sfSprite_move(h->background.cloud_s, (sfVector2f){-0.8, 0});
    sfSprite_move(h->background.sea_s, (sfVector2f){-1.2, 0});
    sfSprite_move(h->background.decor_s, (sfVector2f){-1.5, 0});
}

void init_background(my_hunter_t *h)
{
    h->background.sky_t = sfTexture_createFromFile(SKY_PATH, NULL);
    h->background.sky_s = sfSprite_create();
    sfSprite_setTexture(h->background.sky_s, h->background.sky_t, sfTrue);
    h->background.sky_rect = (sfIntRect){0, 0, 1920, 1080};
    h->background.cloud_t = sfTexture_createFromFile(CLOUD_PATH, NULL);
    h->background.cloud_s = sfSprite_create();
    sfSprite_setTexture(h->background.cloud_s, h->background.cloud_t, sfTrue);
    h->background.cloud_rect = (sfIntRect){0, 0, 1920, 1080};
    h->background.sea_t = sfTexture_createFromFile(SEA_PATH, NULL);
    h->background.sea_s = sfSprite_create();
    sfSprite_setTexture(h->background.sea_s, h->background.sea_t, sfTrue);
    h->background.sea_rect = (sfIntRect){0, 0, 1920, 1080};
    h->background.decor_t = sfTexture_createFromFile(DECOR_PATH, NULL);
    h->background.decor_s = sfSprite_create();
    sfSprite_setTexture(h->background.decor_s, h->background.decor_t, sfTrue);
    h->background.decor_rect = (sfIntRect){0, 0, 1920, 1080};
}
