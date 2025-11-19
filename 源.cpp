#define _CRT_SECURE_NO_WARNINGS
//一.选择语句和循环语句
// 
//1.if 语句：
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a <= 20)
//		printf("青少年");
//	else if (a > 20 && a <= 30)
//		printf("壮年");
//	else if (a > 30 && a <= 60)
//		printf("中年");
//	else
//		printf("老家伙");
//	return 0;
//}
//题目：表示1~100以内的奇数
//#include<stdio.h>
//int main()
//{
//	int a, i;
//	a = 0;
//	for (i = 0; i < 100; i += 2)  
//	{
//		a = 1 + i;
//		printf("%d\n", a);
//	}
//
//
//	return 0;
//}
// 
//2.switch语句：
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1");
//		break;
//	case 2:
//		printf("星期2");
//		break;
//	case 3:
//		printf("星期3");
//		break;
//	case 4:
//		printf("星期4");
//		break;
//	case 5:
//		printf("星期5");
//		break;
//	case 6:
//		printf("星期6");
//		break;
//	case 7:
//		printf("星期7");
//		break;
//	default:
//		printf("你输错了");
//	}
//	return 0;
//}

//3.while语句：
//#include<stdio.h>
//int main()
//{
//	int  i;
//	i = 1;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;    //它的作用是结束它后面的语句返回while判断试;
//		printf("%d\n", i);
//	}
//
//	return 0;
//}
//  while在getchar和putchar结合：
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)  //getchar是用来获取一个字符的；
//		putchar(ch);  //用来输出getchar获取的字符；
//	return 0;
/*}*/  //按ctrl z 它就会自动停下来。
//}   
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入你的密码->");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;   //这里是为了消除\n对它的影响
//	}
//	printf("请确认你的密码->");
//	int ret = getchar();
//	if (ret == 'y')
//		printf("yes");
//	else
//		printf("no");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}   //这个是这个是让他只能输入0~9的数；
//林老师上课代码----二进制到十进制的转换
#include<stdio.h>
int main()
{
	int n, i;
	int a[70];  //这是一个数组有七十个元素，因为一个整形4个字节，int定义的n最多可以有64位数所以用【70】来容纳
	scanf("%d",&n);
	i = 0;
	while (n!=0)  //当n等于0时停下，用的是短除法，但要将数字倒过来写
	{
		a[i] = n % 2;//刚开始等于0，放第一个位，求他的模也就是余数
		i++;//让它慢慢自增
		n = n / 2;
	}
	if (i == 0)
		printf("0");//这是一个补丁，因为上面while循环里0不适用；
	else
		for (i--; i >= 0; i--)//当i从while循环里出来的时候是最大值，所以这里让它自减以达到倒序的效果
			printf("%d", a[i]);
	return 0;
}



