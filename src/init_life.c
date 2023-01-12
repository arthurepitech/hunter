/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_life
*/

#include "../include/my_hunter.h"

void init_life(my_hunter_t *h)
{
    if (h->e.eric_mode == 1)
        h->l.life = 999;
    else
        h->l.life = 3;
    h->l.life_good = sfTexture_createFromFile("assets/utils/cible.png", NULL);
    h->l.life_lost =
        sfTexture_createFromFile("assets/utils/cible_miss.png", NULL);
    h->l.life_one = sfSprite_create();
    h->l.life_two = sfSprite_create();
    h->l.life_three = sfSprite_create();
    sfSprite_setTexture(h->l.life_one, h->l.life_good, sfTrue);
    sfSprite_setTexture(h->l.life_two, h->l.life_good, sfTrue);
    sfSprite_setTexture(h->l.life_three, h->l.life_good, sfTrue);
    sfSprite_setPosition(h->l.life_one, (sfVector2f){725, 100});
    sfSprite_setPosition(h->l.life_two, (sfVector2f){815, 100});
    sfSprite_setPosition(h->l.life_three, (sfVector2f){905, 100});
    sfSprite_setScale(h->l.life_one, (sfVector2f){2, 2});
    sfSprite_setScale(h->l.life_two, (sfVector2f){2, 2});
    sfSprite_setScale(h->l.life_three, (sfVector2f){2, 2});
}
