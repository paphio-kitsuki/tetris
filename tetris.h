#ifndef TETRIS_H
# define TETRIS_H

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <sys/time.h>
# include <ncurses.h>

# define R 20
# define C 15
# define T 1
# define F 0

typedef struct {
    char **array;
    int width, row, col;
} Struct;

#endif