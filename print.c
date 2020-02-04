/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** print
*/

#include "match.h"

int rand_a_b(int a, int b)
{
    int x;
    if (b == 1)
        x = 1;
    else
        x = rand() % (b-a) + a;
    return (x);
}

void init_arr(s_game *game)
{
    game->arr[game->n] = -1;
    for (int i = 0, j = 1; game->arr[i] != -1; i++, j++) {
        game->arr[i] = game->board[j]->line_nb;
    }
}

void check_av_line(s_game *game)
{
    static int i = 0, j = 1;
    for (; j < game->n + 1; j++) {
        if (game->board[j]->line_matches != 0) {
            game->arr[i] = game->board[j]->line_nb;
            i++;
        }
    }
    game->arr[i] = -1;
    j = 0, i = 0;
}

void ai_turn(s_game *game)
{
    check_av_line(game);
    srand(time(NULL));
    int len = arr_len(game->arr), r = rand() % len, m, a;
    a = (game->board[game->arr[r]]->line_matches >= game->m) ?
    game->m : game->board[game->arr[r]]->line_matches;
    m = rand_a_b(1, a);
    game->il = game->arr[r];
    game->im = m;
    game->turn = PLAYER;
    update_map(game);

}

void print_map(s_game *game)
{
    for (int i = 0; game->board[i] != NULL; i++) {
        my_printf("%s", game->board[i]->line);
    }
    my_printf("\n");
}
