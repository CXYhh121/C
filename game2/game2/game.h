#define _CRT_SECURE_NO_WARNINGS
#ifndef __GAME_H__
#define __GAME_H__
#include  <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define ROW 3
#define COL 3

void Initboard(char board[ROW][COL], int row, int col);
void Display(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
//'X'电脑赢
//'0'玩家赢
//'Q'平局
//' '继续



#endif // __GAME_H__
