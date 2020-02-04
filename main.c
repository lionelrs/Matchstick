/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include "match.h"

void free_game(s_game *game)
{
    for (int i = 0; i < game->n + 2; i++) {
        free(game->board[i]->line);
        free(game->board[i]);
    }
    free(game->board);
    free(game->arr);
    free(game);
}

int init_map(s_game *game, int c)
{
    int t = 1;
    if ((game->arr = malloc(sizeof(int) * (game->n + 2))) == NULL)
        return (84);
    game->arr[0] =  -1;
    for (int i = 0, u = game->n; i < game->n + 2; i++) {
        if ((game->board[i] = malloc (sizeof(s_line))) == NULL)
            return (84);
        game->board[i]->line_nb = i;
        if ((game->board[i]->line = malloc(sizeof(char) * c + 2)) == NULL)
            return (84);
        if (i > 0 && i < game->n + 1) {
            game->board[i]->line_idx = c - (u + 1);
            u--;
        }
        else
            game->board[i]->line_idx = 0;
        t = init_map1(game, i, t);
    }
    game->board[game->n + 2] = NULL;
    return (0);
}

void fill_map(s_game *game, int c)
{
    int k = 0, j = 1, ind = 0;
    for (int idx = 1; idx < game->n + 1; idx++) {
        game->board[idx]->line[0] = '*';
        k = c - j - 2, ind = 1;
        for (; ind < (k / 2) + 1; ind++) {
            game->board[idx]->line[ind] = ' ';
        }
        for (int p = 0; p < j; p++, ind++) {
            game->board[idx]->line[ind] = '|';
        }
        for (int p = 0; p < (k / 2); p++, ind++) {
            game->board[idx]->line[ind] = ' ';
        }
        game->board[idx]->line[ind] = '*';
        game->board[idx]->line[ind + 1] = '\n';
        game->board[idx]->line[ind + 2] = '\0';
        j += 2;
    }
    init_arr(game);
}

int init_board(s_game *game)
{
    int c = 1;

    if ((game->board = malloc(sizeof(s_line) * (game->n + 3))) == NULL)
        return (84);
    for (int i = 0; i < game->n; i++) {
        c += 2;
    }
    if (init_map(game, c) == 84)
        return (84);
    for (int i = 0; i < c; i++) {
        game->board[0]->line[i] = '*';
        game->board[game->n + 1]->line[i] = '*';
    }
    game->board[0]->line[c] = '\n';
    game->board[0]->line[c + 1] = '\0';
    game->board[game->n + 1]->line[c] = '\n';
    game->board[game->n + 1]->line[c + 1] = '\0';
    fill_map(game, c);
    return (0);
}

int main(int ac, char **av)
{
    int win = 0;
    s_game *game;
    if ((game = malloc(sizeof(s_game))) == NULL)
        return (0);
    game->turn = PLAYER, game->gameover = 0, game->im = 0,
    game->il = 0, game->il = 0, game->im = 0, game->input = 0;
    if (ac != 3) {
        free(game);
        return (0);
    } else {
        game->n = my_atoi(av[1]), game->m = my_atoi(av[2]), game->lc = game->n;
        if (check(game) == 0)
            return (0);
        win = check_winner(game), free_game(game);
        return (win);
    }
}
