#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//初始化数组的内容为指定的内容
void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印出show或者mine
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------扫雷游戏-------------\n");
	for (j = 0; j <= col; j++)   //打印列标
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行标
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//打印每个元素
		}
		printf("\n");
	}
	printf("------------扫雷游戏-------------\n");
}

//设置雷
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//取得的范围是0-8，加个1变成1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';//放置雷为‘1’
			count--;
		}
	}
}

//排查雷并且判断输赢
int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0';
}
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)//设置循环条件为已经排查出不是雷的个数小于不是雷的个数
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//限定范围为9*9
		{
			if (show[x][y] != '*')//防止重复排查
			{
				printf("该坐标排查过了，不能重复排查\n");
			}
			else
			{
				//如果是雷
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else//如果不是雷
				{
					win++;
					//统计mine数组中x,y坐标周围有几个雷
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';//转换成_count(mine,数字字符
					DisplayBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)//刚好排完了
	{
		printf("恭喜你扫雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}