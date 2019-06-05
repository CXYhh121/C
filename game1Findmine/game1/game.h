#define _CRT_SECURE_NO_WARNINGS
#ifndef __GAME_H__
#define __GAME_H__
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10
void Initboard(char arr[ROWS][COLS], int rows, int cols, char set);
void Display(char arr[ROWS][COLS], int row, int col);
void Setmine(char arr[ROWS][COLS], int row, int  col);
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
int  GetmineCount(char mine[ROWS][COLS], int x, int y);
//void SafeMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col,int x,int y);
#endif  //__GAME_H__
