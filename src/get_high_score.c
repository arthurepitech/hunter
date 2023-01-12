/*
** EPITECH PROJECT, 2022
** C Graphical Programming
** File description:
** get_high_score
*/

#include "../include/my_hunter.h"
#include <stdio.h>

void get_high_score(my_hunter_t *h)
{
    if (h->s.score >= h->s.high_score && h->e.eric_mode == 0) {
        h->s.high_score = h->s.score;
        fwrite(my_int_to_array(h->s.score)
            , my_strlen(my_int_to_array(h->s.score)), 1, h->s.score_board);
        fclose(h->s.score_board);
    }
}
