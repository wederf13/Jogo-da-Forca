#ifndef FORCA
#define FORCA

// the forca project header

// including an unreasonable
// amount of libraries:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// function declarations


// procedures declarations
void read_game_data(int theme, int level, char name[50]);
void game(int theme, int level, char name[50]);
void show_menu();
void show_project_info();
void show_exit_message();
void show_play_again_message();

#endif 
