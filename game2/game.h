#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10  //设置雷的个数
//初始化数组的内容为指定的内容
void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
//打印出show或者mine
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//设置雷
void SetMine(char board[ROWS][COLS], int row, int col);
//排查雷并且判断输赢
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);