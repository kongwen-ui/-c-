#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
// 数据类型
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}
//sizeof是求它的大小，丰富的数据类型是为了充分地利用空间
//4.变量，常量
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);       #scanf是输入函数
//	int sum = num1 + num2;
//	printf("%d,\n", sum);
//	return 0;
//}
//变量的作用域和生理周期
//1. 局部变量的作用域是变量所在的局部范围。
//2. 全局变量的作用域是整个工程
//作用域约等于生命周期
//#include<stdio.h>     //这个是头文件
//int main()  //主函数
//{
//	
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//	
//	return 0;
//}
//3.5常量
//字面常量：如30，3.14，宝宝等.
//const 修饰的常变量：这能让变量无法被修改；如const int a=10,本质是变量；
//证明他是变量：
//int main()
//{
//	int arr[10] = { 0 };
//	return 0;
//}
//#define 定义的标识符常量:它定义出来是一种常量，同时它不像int那样只能定义整形，它可以定义字符串
//#include<stdio.h>
//#define MAX "abcde"
//int main()
//{
//	printf("%s\n", MAX);
//		return 0;
//}
//枚举常量:
//enum color   //枚举常量
//{
//    man,
//    women,
//    secret
//};
//int main()
//{
//    enum color c = man;         //如果定义的是一个没有在枚举常量里的，会报错
//    return 0;
//}
//4. 字符串 + 转义字符 + 注释
//4.1字符串：
// \0是字符串的结束标志
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr);
//	printf("%s\n", a1rr2);
//	printf("%s\n", arr3);
//	return 0;
//}
//4.2转义字符：
//#include<stdio.h>
//int main()
//{
//	printf("%c",'\130');
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// \62被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}
// 
// 
//5,选择语句和循环语句：
//#include<stdio.h>
//int main()
//{
//	printf("加入比特\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//		printf("要努力敲代码呀\n");
//	}
//	if (line < 20000)
//	{
//		printf("还要继续加油啊\n");
//	}
//	else
//	{
//		printf("恭喜你获得一份好工作\n");
//	}
//	return 0;
//
//8.函数
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请在下面输入你的值");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}
//9.数组
//9.1数组的定义： 
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,3,5,5,56,2,2,2};
//	printf("%d\n", arr[9]);
//
//	return 0;
//}
//10.操作符：
//#include<stdio.h>
//
//int main()
//{
//	int a;
//	a = 10;
//	
//	printf("%d", sizeof(a));
//	return 0;
//}
//11.关键字typedef:
//#include<stdio.h>
//typedef unsigned int uint_32;
//int main()
//{
//	//观察num1和num2,这两个变量的类型是一样的
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;
//	return 0;
//}
//12.关键字static:
//(1)修饰局部变量：
//#include<stdio.h>
//static void test()
//{
//	static int a = 1;//使得局部变量a出了作用域没有被销毁，参加下一次循环。
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
//
//
//
#/*include<stdio.h>
#include<math.h>
int main()
{
	double y, x;
	y = 0;
	scanf("%.4lf", &x);
	if (x > 0 && x < 10)
	{
		if (x <= 1)
		{
			y = 2 * pow(x, 3) - sin(x + 3);
			printf("%.4lf", y);
		}
		else
		{
			y = pow(3.5, x);
			printf("%.4lf", y);
		}
	}
	else printf("%.4lf", sqrt(fabs(x + 5)));

}*/
//
//#include<stdio.h>
//int main()
//{
//	int m,n,s,i;
//	i = 1;
//    scanf("%d %d", &m, &n);
//	while (i % m != 0 &&  i % n != 0)
//		i++;
//	printf("%d", i);
//}
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a <= 20)
		printf("青少年");
	else if (a > 20 && a <= 30)
		printf("壮年");
	else if (a > 30 && a <= 60)
		printf("中年");
	else
		printf("老家伙");
	return 0;
}