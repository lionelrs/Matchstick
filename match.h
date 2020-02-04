/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** match
*/

#ifndef MATCH_H_
#define MATCH_H_

#include "print.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <get_next_line.h>

typedef enum players
{
    PLAYER,
    AI,
} e_pl;

typedef struct move
{
    int pile_index;
    int stones_removed;
} s_move;

typedef struct lines
{
    char *line;
    int line_nb;
    int line_matches;
    int line_idx;
} s_line;

typedef struct game
{
    e_pl pl;
    s_line **board;
    int turn;
    int gameover;
    int m;
    int n;
    int im;
    int il;
    int lc;
    int *arr;
    int input;
    s_move moves;
} s_game;

int arr_len(int *arr);
void my_strcat(char *s1, char *s2);
void my_strcpy(char *s1, char *s2);
int my_strlen(char *str);
int my_atoi(char *str);
void update_map(s_game *game);
int input_line(s_game *game, char *line);
int input_matches(s_game *game, char *matches);
int input(s_game *game);
int pl_turn(s_game *game);
void free_game(s_game *game);
int init_map(s_game *game, int c);
void fill_map(s_game *game, int c);
int init_board(s_game *game);
int check_args(s_game *game);
void print_map(s_game *game);
void ai_turn(s_game *game);
void check_av_line(s_game *game);
int rand_a_b(int a, int b);
int check_winner(s_game *game);
int game_loop(s_game *game);
void init_arr(s_game *game);
int matches_error(s_game *game, char *matches);
int init_map1(s_game *game, int i, int t);
int check(s_game *game);
int bad_input(s_game *game, char *line, char *matches);

#endif
