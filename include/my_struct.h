/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my_struct
*/

#ifndef MY_STRUCT_H_
    #define MY_STRUCT_H_
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Window/Window.h>
    #include <stdio.h>

    #define SKY_PATH "assets/background/sky.png"
    #define CLOUD_PATH "assets/background/cloud.png"
    #define SEA_PATH "assets/background/sea.png"
    #define DECOR_PATH "assets/background/decor.png"

typedef struct background_s {
    sfTexture *sky_t;
    sfSprite *sky_s;
    sfIntRect sky_rect;
    sfTexture *cloud_t;
    sfSprite *cloud_s;
    sfIntRect cloud_rect;
    sfTexture *sea_t;
    sfSprite *sea_s;
    sfIntRect sea_rect;
    sfTexture *decor_t;
    sfSprite *decor_s;
    sfIntRect decor_rect;
} background_t;

typedef struct eric_mode_s {
    int eric_mode;
    sfTexture *eric_t;
    sfSprite *eric_s;
} eric_mode_t;

typedef struct life_s {
    int life;
    sfTexture *life_lost;
    sfTexture *life_good;
    sfSprite *life_one;
    sfSprite *life_two;
    sfSprite *life_three;
} life_t;

typedef struct score_s {
    int score;
    sfText *score_text;
    sfText *score_nb;
    sfFont *font;
    sfFont *font_nb;
    FILE *score_board;
    int high_score;
    sfText *high_score_text;
    sfText *high_score_nb;
} score_t;

typedef struct duck_s {
    int speed;
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f position;
} duck_t;

typedef struct game_over_s {
    int game_over;
    sfTexture *game_over_t;
    sfSprite *game_over_s;
} game_over_t;

typedef struct my_hunter_s {
    background_t background;
    eric_mode_t e;
    life_t l;
    score_t s;
    duck_t d;
    game_over_t g;
    int start;
    sfRenderWindow *window;
    sfEvent event;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfMusic *music;
    sfMusic *fire_sound;
    sfMusic *duck_sound;
    sfSprite *cursor_s;
    sfTexture *cursor_t;
    sfVector2i mouse_pos;
    sfSprite *get_started_s;
    sfTexture *get_started_t;
} my_hunter_t;

#endif /* !MY_STRUCT_H_ */
