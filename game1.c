/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** game1
*/

#include "match.h"

int check(s_game *game)
{
    if (check_args(game) == 1) {
        free(game);
        return (0);
    }
    if (game_loop(game) == 84) {
        free_game(game);
        return (0);
    }
    return (1);
}

int bad_input(s_game *game, char *line, char *matches)
{
    int l = input_line(game, line), m;
    if (l == 84) {
        game->input = 1;
        return (0);
    }
    else if (l == 2)
        bad_input(game, line, matches);
    else {
        m = input_matches(game, matches);
        if (m == 84) {
            game->input = 1;
            return (0);
        }
        else if (m == 2)
            bad_input(game, line, matches);
        else {
            game->input = 0;
            return (0);
        }
    }
}