/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** init_sound
*/

#include "../include/my_hunter.h"

void init_sound(my_hunter_t *h)
{
    h->music = sfMusic_createFromFile("assets/utils/music.ogg");
    sfMusic_play(h->music);
    sfMusic_setLoop(h->music, sfTrue);
    sfMusic_setVolume(h->music, 10);
    h->fire_sound = sfMusic_createFromFile("assets/utils/fire.ogg");
    sfMusic_setVolume(h->fire_sound, 50);
    h->duck_sound = sfMusic_createFromFile("assets/utils/duck.ogg");
    sfMusic_setVolume(h->duck_sound, 90);
}
