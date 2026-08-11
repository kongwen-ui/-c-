#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("*****  1.play        *****\n");
	printf("*****  0.exit        *****\n");
	printf("**************************\n");

}
void game()
{
	char mine[ROWS][COLS] = { 0 }; //存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出来的雷的信息
	//初始化数组的内容为指定的内容
	//mine 数组在没有布置雷的时候都是‘0’
	Initboard(mine, ROWS, COLS, '0');
	//show 数组在没有排查雷的时候都是‘*’
	Initboard(show, ROWS, COLS, '*');
	//设置雷
	SetMine(mine, ROW, COL);
	//打印出show或者mine
	DisplayBoard(show, ROW, COL);
    //排查雷并且判断输赢
	FineMine(mine,show, ROW, COL);
}
int main()
{
	int input = 0;
	//设置随机数的起点
	srand((unsigned int)time(NULL));//需要添加两个头文件
	do
	{
		menu();
	    printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}