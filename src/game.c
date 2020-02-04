/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** game
*/

#include "match.h"

void update_map(s_game *game)
{
    int m = game->im;
    for (; m > 0; m--, game->board[game->il]->line_idx--) {
        game->board[game->il]->line[game->board[game->il]->line_idx] = ' ';
    }
    game->board[game->il]->line_matches -= game->im;
    if (game->board[game->il]->line_matches == 0)
        game->lc--;
    if (game->lc == 0)
        game->gameover = 1;
}

int input_line(s_game *game, char *line)
{
    my_putstr("Line: ");
    if ((line = get_next_line(0)) == NULL) {
        free(line);
        return (84);
    }
    game->il = my_atoi(line);
    free(line);
    if (game->il < 1) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (2);
    }
    if (game->il > game->n) {
        my_printf("Error: this line is out of range\n");
        return (2);
    }
    if (game->board[game->il]->line_matches == 0) {
        my_printf("Error: this line has no matches left\n");
        return (2);
    }
    return (0);
}

int input_matches(s_game *game, char *matches)
{
    my_putstr("Matches: ");
    if ((matches = get_next_line(0)) == NULL) {
        free(matches);
        return (84);
    }
    game->im = my_atoi(matches);
    free(matches);
    if (matches_error(game, matches) == 2)
        return (2);
    if (game->im > game->m) {
        my_printf("Error: you cannot remove more than %d matches per turn\n",
        game->m);
        return (2);
    }
    if (game->im > game->board[game->il]->line_matches) {
        my_printf("Error: not enough matches on this line\n");
        return (2);
    }
    return (0);
}

int input(s_game *game)
{
    my_printf("Your turn:\n");
    if (pl_turn(game) == 84)
        return (84);
    if (game->gameover == 1) {
        game->pl = AI;
        return (0);
    }
    print_map(game);
    ai_turn(game);
    my_printf("AI's turn...\n");
    my_printf("AI removed %d match(es) from line %d\n", game->im,
    game->il);
    if (game->gameover == 1) {
        game->pl = PLAYER;
        return (0);
    }
    print_map(game);
    return (0);
}

int pl_turn(s_game *game)
{
    char *line = NULL, *matches = NULL;

    while (bad_input(game, line, matches) != 0);
    if (game->input == 1) {
        free(line);
        free(matches);
        return (84);
    }
    free(line), free(matches);
    update_map(game);
    my_printf("Player removed %d match(es) from line %d\n", game->im,
    game->il);
    game->turn = AI;
    return (0);
}