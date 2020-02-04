/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** error
*/

#include "match.h"

int check_args(s_game *game)
{
    if ((game->m < 1) && (game->n < 2 || game->n > 99)) {
        write(1, "wrong arguments first must be greater than 1"\
        " and smaller than 100 and second must be greater than 0\n", 100);
        return (1);
    }
    if (game->m < 1) {
        write(1, "number of matches to remove must be greater than 0\n", 51);
        return (1);
    }
    if (game->n < 2 || game->n > 99) {
        write(1, "number of lines need to be greater than"\
        " 1 and smaller than 100\n", 63);
        return (1);
    }
    return (0);
}

int check_winner(s_game *game)
{
    if (game->pl == PLAYER) {
        write(1, "I lost... snif... but I'll get you next time!!\n", 47);
        return (1);
    }
    if (game->pl == AI) {
        write(1, "You lost, too bad...\n", 21);
        return (2);
    }
    return (0);
}

int game_loop(s_game *game)
{
    init_board(game);
    print_map(game);
    while (game->lc != 0) {
        if (input(game) == 84)
            return (84);
    }
    print_map(game);
    return (0);
}

int matches_error(s_game *game, char *matches)
{
    if (game->im == 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (2);
    }
    if (game->im < 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (2);
    }
    return (0);
}

int init_map1(s_game *game, int i, int t)
{
    if (i > 0 && i < game->n + 1) {
        game->board[i]->line_matches = t;
        t += 2;
    } else
        game->board[i]->line_matches = 0;
    return (t);
}