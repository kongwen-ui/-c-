#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3   //这样写方便随时修改棋盘的大小
#define COL 3
//初始化棋盘：
void Initboard(char board[ROW][COL], int row, int col);

//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋找没有下棋的随机数下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢：
char IsWin(char board[ROW][COL], int row, int col);