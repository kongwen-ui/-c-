//#define _CRT_SECURE_NO_WARNINGS
//一.实验一
//1.分段函数求值：
//描述：
//求下列分段函数y的值：
//求下列分段函数y的值：
//t8.png
//输入：
//输入1个实数，是x的值。
//输出：
//输出1个实数，是y的值，保留3位小数，第4位四舍五入。
//样例输入：
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double y, x;
//	y = 0;
//	scanf("%lf", &x);
//	if (x > 0 && x < 10)
//	{
//		if (x <= 1)
//		{
//			y = 2 * pow(x, 3) - sin(x + 3);
//			printf("%.3lf", y);
//		}
//		else
//		{
//			y = pow(3.5, x);
//			printf("%.3lf", y);
//		}
//	}
//	else
//	{
//		y = sqrt(fabs(x + 5));
//		printf("%.3lf", y);
//	}
//}
//
//2.整除运算：
//描述：
//输入一个整数x，判断其能否既被3整除也被7整除。如果能被3和7整除，则输出“Yes”，否则输出“No”。
//输入：
//在一行中给出一个整数x。
//输出：
//在一行中输出一个字符串，即判断结果“Yes”或“No”。
//样例输入：
//#include<stdio.h>
//main()
//{
//	int X;
//	scanf("%d", &X);
//	if (X % 3 == 0 && X % 7 == 0)
//		printf("Yes");
//	else
//		printf("No");
//}
//
//3.网购运费：
//描述
//输入寄送货物的重量w，根据某快递公司的运费计算方案，计算并输出快递运费p。某快递公司的运费计算方案如下：
//无标题.png
//输入
//在一行中给出一个浮点数w（ - 10000≤w≤10000），即输入的寄送货物的重量。
//输出
//在一行中输出一个浮点数p（保留小数点后1位），即输出的快递费用。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	float p, w;
//	p = 0;
//	scanf("%f", &w);
//	if (w >= -10000 && w <= 2)
//	{
//		p = 7.5;
//		printf("%.1f", p);
//	}
//	if (w <= 10000 && w > 2)
//	{
//		p = (w - 2) * 1.8 + 7.5;
//		printf("%.1f", p);
//	}
//	return 0;
//}
//
//4.三角形类型：
//描述
//输入3条线段长度，判断这3条线段构成的三角形类型。如果不能构成三角形，则输出“No Triangle”，如果可以构成三角形，判断构成何种三角形（等边三角形、等腰三角形、不等边三角形），分别输出“Equilateral Triangle”、“Isosceles Triangle”或“Scalene Triangle”。
//输入
//在一行中给出3个整数，分别代表三角形的3条边a（0＜x≤1000）、b（0＜b≤1000）、c（0＜c≤1000），整数之间用空格分隔。
//输出
//在一行中输出一个字符串，即“No Triangle”、“Equilateral Triangle”、“Isosceles Triangle”或“Scalene Triangle”。
//样例输入：
//#include <stdio.h>
//main()
//{
//	int a, b, c;
//
//
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b<c || b - a>c)
//	{
//
//		printf("No Triangle");
//	}
//
//	else
//	{
//
//		if (a == b && b == c && c == a)
//		{
//
//			printf("Equilateral Triangle");
//		}
//		else
//			if ((a == b && b != c) || (b == c && a != b))
//			{
//
//				printf("Isosceles Triangle");
//			}
//			else
//			{
//
//				printf("Scalene Triangle");
//			}
//	}
//
//}
//
//5.竞赛获奖：
//描述
//某学校举办技能竞赛，竞赛分为笔试、机试和面试3个部分。输入某学生3科竞赛成绩，如果总成绩在285~300之间，输出“Gold Medal”；如果总成绩在270~284，输出“Silver Medal”；如果总成绩在240~269，输出“Bronze Medal”；如果总分低于240，但其中某科成绩特别优秀（单科不低于95），输出“Honor Medal”；其他情况，输出“No Medal”。
//输入
//在一行中给出3个整数，分别表示笔试成绩w（0＜w≤100）、机试成绩c（0＜c≤100）和面试成绩f（0＜f≤100），整数之间用空格隔开。
//输出
//在一行中输出一个字符串，即“Gold Medal”、“Silver Medal”、“Bronze Medal”、“Honor Medal”或“No Medal”。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	int w, c, f;
//	int sum = 0;
//	scanf("%d %d %d", &w, &c, &f);
//	sum = w + c + f;
//	if (sum >= 285 && sum <= 300)
//		printf("Gold Medal");
//	else if (sum >= 270 && sum <= 284)
//		printf("Silver Medal");
//	else if (sum >= 240 && sum <= 269)
//		printf("Bronze Medal");
//	else if (sum < 240 && (w >= 95 || c >= 95 || f >= 95))
//		printf("Honor Medal");
//	else
//		printf("No Medal");
//	return 0;
//}
//
//6.计算油费：
//描述
//假设某城市现在89号汽油价格为6.17元 / 升、92号汽油价格为5.58元 / 升、95号汽油价格为5.96元 / 升。某加油站为了吸引顾客推出“自助服务”和“员工服务”两个服务等级，分别可得到5 % 和2 % 的优惠。请编写程序，输入顾客的加油量n、汽油品种t（89、92或95）和服务类型s（a为自助服务，h为员工服务），计算并输出应付款（保留小数点后2位）。
//输入
//在一行中给出两个整数和一个字符，分别表示顾客的加油量n（0＜n≤100）、汽油品种t（89、92或95）和服务类型s（a为自助服务，h为员工服务）。两个整数及字符之间均用一个空格隔开。
//输出
//在一行中输出一个浮点数（保留2位小数点），即应付的油费。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	int n, t;
//	char s;
//	scanf("%d %d %c", &n, &t, &s);
//
//	if (s == 'a')
//	{
//		if (t == 89)
//			printf("%.2f", n * (6.17 * 0.95));
//		if (t == 92)
//			printf("%.2f", n * (5.58 * 0.95));
//		if (t == 95)
//			printf("%.2f", n * (5.96 * 0.95));
//
//	}
//	else
//	{
//		if (t == 89)
//			printf("%.2f", n * (6.17 * 0.98));
//		if (t == 92)
//			printf("%.2f", n * (5.58 * 0.98));
//		if (t == 95)
//			printf("%.2f", n * (5.96 * 0.98));
//
//	}
//
//
//	return 0;
//}
//
//7.最小公倍数：
//描述
//输入两个正整数m和n，求解并输出给定两个整数的最小公倍数。
//输入
//在一行中输入两个整数m（10≤m≤1000）和n（10≤n≤1000）。
//输出
//在一行中输出一个整数，即m和n的最小公倍数。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	int m, n, s, i;
//	scanf("%d%d", &m, &n);
//	i = 1;
//	while (i % m != 0 || i % n != 0)
//		i++;
//	printf("%d", i);
//}
//
//8.整除求和：
//描述
//输入一个正整数n，求解并输出1~n之间能被3整除、但不能被7整除的所有整数之和。
//输入
//在一行中输入一个整数n（1≤n≤1000）。
//输出
//在一行中输出一个整数，即1~n之间能被3整除、但不能被7整除的所有整数之和。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	int n, i, s;
//	s = 0;
//	i = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		if ((i % 3) == 0 && (i % 7) != 0)
//			s = s + i;
//		i++;
//	}
//	printf("%d", s);
//}
//
//
//
二.实验二
1.描述
输入一个正整数n，求解并输出1~n之间能被3整除、但不能被7整除的所有整数之和。
输入
在一行中输入一个整数n（1≤n≤1000）。
输出
在一行中输出一个整数，即1~n之间能被3整除、但不能被7整除的所有整数之和。
样例输入：
#include<stdio.h>
int main()
{
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 7 != 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
2.完数判断：
描述
完全数是指它所有的真因子（即除了自身以外的正因子）的和恰好等于它本身。输入一个正整数n，判断该整数是否为完全数。如果是完全数，则输出“Yes”，否则输出“No”。
输入
在一行中输入一个整数n（1≤n≤1000）。
输出
在一行中输出一个字符串，即“Yes”或“No”。
样例输入：
#include<stdio.h>
int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
		printf("Yes");
	else
		printf("No");
	return 0;
}
3.斐波那契数列：
描述
已知斐波那契数列1、1、2、3、5、8、13、…，编写程序，输入一个正整数n，输出斐波那契数列的第n项。
输入
在一行中输入一个整数n（3≤n≤40）。
输出
在一行中输出一个整数，即斐波那契数列的第n项。
样例输入：
#include<stdio.h>
int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	scanf("%d", &n);
	if (n == 1 || n == 2)
	{
		printf("1");
	}
	else
	{
		for (int i = 3; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d", c);
	}
	return 0;
}
4.三角形图案：
描述
编写程序打印n行图形，其中1≤n≤1000。
   A
  BBB
 CCCCC
当上一行是字母ZZZ……ZZZ时，下一行是AAA……AAA，再下一行是BBB……BBB，……。
输入
输入1个整数n。
输出
输出n行金字塔图形。
样例输入：
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	char ch = 'A';
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("%c", ch);
		}
		printf("\n");
		if (ch == 'Z')
			ch = 'A';
		else
			ch++;
	}
	return 0;
}
5.选手得分：
描述
某大赛共有n位评委参与评分，评分规则为“去掉一个最高分，去掉一个最低分，然后再求平均分”。输入一个正整数n，表示评委的人数，接着再输入n个整数，表示每位评委的评分，根据评分规则，计算并输出选手的得分。
输入
在第一行中输入整数n（5≤n≤100）；在第二行中输入n个整数score（0≤score≤100），整数之间用空格隔开。
输出
在一行中输出一个浮点数（保留小数点后1位），即选手的得分。
样例输入：
#include<stdio.h>
int main()
{
	int n = 0;
	int score[100] = { 0 };
	int max = 0, min = 100, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
		if (score[i] > max)
			max = score[i];
		if (score[i] < min)
			min = score[i];
		sum += score[i];
	}
	sum = sum - max - min;
	printf("%.1f", (float)sum / (n - 2));
	return 0;
}
6.素数统计：
描述
输入两个正整数m和n，统计并输出m~n之间素数的个数。
输入
在一行中输入两个整数m（2≤m≤1000）和n（10≤n≤1000），且满足m小于n。
输出
在一行中输出一个整数，即m~n之间素数的个数。
样例输入：
#include<stdio.h>
int main()
{
	int m = 0, n = 0;
	int count = 0;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++)
	{
		int flag = 1;
		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}



三.实验三：
1.最小值与位置：
描述
从输入的n个整数序列（序列中元素存在相同情况）中找出最小值及其对应的最大下标（下标从0开始）。
输入
在第一行中输入一个整数n（1≤n≤100）；在第二行中输入n个整数，整数之间用空格隔开。
输出
在一行中输出整数序列的最小值及其对应的最大下标，中间用空格隔开
样例输入：
#include<stdio.h>
int main()
{
	int n = 0;
	int arr[100] = { 0 };
	int min = 10000;
	int index = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] <= min) //找最小值及其最大下标
		{
			min = arr[i];
			index = i;
		}
	}
	printf("%d %d", min, index);
	return 0;
}

2.查找整数：
描述
从输入的n个整数序列中查找给定的整数x。如果找到，则输出x的位置（从0开始计数）；如果没有找到，则输出“ - 1”。
输入
在第一行中输入一个正整数n（0＜n≤100）和一个整数x；在第二行中输入n个整数（n个整数均不相同），整数之间用空格隔开。
输出
在一行中输出一个整数，即x的位置或 - 1。
样例输入：
#include<stdio.h>
int main()
{
	int n = 0, x = 0;
	int arr[100] = { 0 };
	int index = -1;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == x) //查找整数x的位置
		{
			index = i;
		}
	}
	printf("%d", index);
	return 0;
}

3.绝对偏差：
描述
从输入的n个学生成绩中，找出所有成绩中与平均值绝对偏差最大的学生成绩。
输入
在一行中输入一个整数n（0＜n≤100）；在第二行中输入n个整数，整数之间用空格隔开。
输出
在一行中输出一个整数，即与平均值绝对偏差最大的学生成绩。
样例输入：
#include<stdio.h>
int main()
{
	int n = 0;
	int arr[100] = { 0 };
	int sum = 0;
	double avg = 0.0;
	int maxDevScore = 0;
	double maxDev = -1.0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avg = (double)sum / n; //计算平均值
	for (int i = 0; i < n; i++)
	{
		double dev = arr[i] > avg ? arr[i] - avg : avg - arr[i]; //计算绝对偏差
		if (dev > maxDev) //找出最大绝对偏差及对应成绩
		{
			maxDev = dev;
			maxDevScore = arr[i];
		}
	}
	printf("%d", maxDevScore);
	return 0;
}

4.排序算法：
描述
对输入的n个整数序列按从大到小的顺序输出。
输入
在第一行中输入一个整数n（0＜n≤100）；在第二行中输入n个整数，整数之间用空格隔开。
输出
在一行中输出从大到小的有序数列，整数之间用空格隔开。
样例输入：
#include<stdio.h>
int main()
{
	int n = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//冒泡排序
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1]) //从大到小排序
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

5.统计次数：
描述
对输入的n个整数序列进行统计，输出出现次数最多的整数及其出现次数。
输入
在第一行中输入整数n（10≤n≤100）；在第二行中给出n个整数，整数之间用空格隔开。
输出
在一行中输出两个整数，即出现次数最多的整数及其出现次数，整数之间用空格隔开。
样例输入：
#include<stdio.h>
int main()
{
	int n = 0;
	int arr[100] = { 0 };
	int maxNum = 0;
	int maxCount = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j]) //统计arr[i]出现的次数
			{
				count++;
			}
		}
		if (count > maxCount) //找出出现次数最多的整数及其次数
		{
			maxCount = count;
			maxNum = arr[i];
		}
	}
	printf("%d %d", maxNum, maxCount);
	return 0;
}

6.找中位数：
描述
从输入的n个无序的整数序列中求出中位数。所谓中位数是指一组数据按从小到大的顺序依次排列，如果该组数据的个数是奇数，则中位数就是最中间那个数；如果该组数据的个数是偶数，则中位数是最中间两个数据的平均数。
输入
在第一行中输入一个整数n（10≤n≤100）；第二行输入n个整数，整数之间用空格隔开。
输出
在一行中输出一个浮点数（保留小数点后一位有效数字），即输入整数序列的中位数
样例输入：
#include<stdio.h>
int main()
{
	int n = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//冒泡排序
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]) //从小到大排序
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	double median = 0.0;
	if (n % 2 == 1) //奇数个数
	{
		median = arr[n / 2];
	}
	else //偶数个数
	{
		median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
	}
	printf("%.1f", median);
	return 0;
}

//四.实验四：
//1.删除字符：
//描述
//从给定字符串中删除指定位置的字符。
//输入
//在第一行中输入一个以回车结束的非空字符串s（不超过100个字符）；在第二行中输入一个整数p。
//输出
//将s的p号位字符删除后输出。
//#include<stdio.h>
//#include<string.h> 
//int main()
//{
//	char s[100];
//	gets(s);
//	int i, p, n, t;
//	n = strlen(s);
//	scanf("%d", &p);
//	for (i = 0; i < n; i++)
//	{
//		if (i == p)
//			s[i] = s[i + 1];
//
//		if (i > p)
//		{
//			t = s[i];
//			s[i] = s[i + 1];
//			s[i + 1] = t;
//		}
//	}
//	puts(s);
//	return 0;
//}
//
//2.查找指定字符：
//描述
//从给定字符串中查找某指定的字符。
//输入
//在第一行中输入一个字符；在第二行中输入一个以回车结束的非空字符串（不超过100个字符）。
//输出
//如果找到指定的字符，则在一行中输出一个整数，该整数是所指定字符在字符串中所对应的最大下标（下标从0开始）；否则输出“NotFound”。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch;
//	char s[100];
//	int i, n, index;
//	index = -1;
//	scanf("%c", &ch);
//	getchar(); //吸收回车符
//	gets(s);
//	n = strlen(s);
//	for (i = 0; i < n; i++)
//	{
//		if (s[i] == ch)
//			index = i;
//	}
//	if (index != -1)
//		printf("%d", index);
//	else
//		printf("NotFound");
//	return 0;
//}
//
//3.对称字符串：
//描述
//判断一个字符串是否为对称字符串，即该字符串作镜向变换后和原串一样。
//输入
//在第一行中输入一个以回车结束的非空字符串（不超过100个字符）。
//输出
//如果输入字符串是对称字符串则输出“Yes”, 否则输出“No”。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[100];
//	int i, n, flag;
//	flag = 1;
//	gets(s);
//	n = strlen(s);
//	for (i = 0; i < n / 2; i++)
//	{
//		if (s[i] != s[n - 1 - i])
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}
//
//4.字符统计：
//描述
//统计一个字符串中，元音字母的个数。
//输入
//在一行中输入一个以回车结束的非空字符串（不超过100个字符）。
//输出
//在一行中输出一个整数，即元音字母的个数。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[100];
//	int i, n, count;
//	count = 0;
//	gets(s);
//	n = strlen(s);
//	for (i = 0; i < n; i++)
//	{
//		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
//			s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//
//5.统计单词：
//描述
//统计一个字符串中，单词（一串连续的字母）的个数。
//输入
//在第一行中输入一个以回车结束的非空字符串（不超过1000个字符）。
//输出
//在一行中输出一个整数，即输入字符串中单词的个数。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[1000];
//	int i, n, count;
//	count = 0;
//	gets(s);
//	n = strlen(s);
//	for (i = 0; i < n; i++)
//	{
//		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) //判断是否为字母
//		{
//			if (i == 0 || !((s[i - 1] >= 'a' && s[i - 1] <= 'z') || (s[i - 1] >= 'A' && s[i - 1] <= 'Z'))) //判断是否为单词的第一个字母，感叹号的作用是取反，i=0的作用是防止数组越界
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//
//
//
//6.整数提取：
//描述
//将包含在一个字符串中的整数（至多一个）提取出来。
//输入
//在第一行中输入一个以回车结束的非空字符串（不超过100个字符）。
//输出
//在输入的字符串中，取出包含的整数，并乘2后输出, 若没有包含整数则输出0。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[100];
//	int i, n;
//	gets(s);
//	n = 0;
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] >= '0' && s[i] <= '9')
//		{
//			n = n * 10 + (s[i] - '0');
//		}
//		
//	}
//	printf("%d", n * 2);
//}


//五.实验五：

//1.统计完全平方数：
//描述
//完全平方数是指能表示为某个整数的平方的数。定义一个函数isSquare(int k)，该函数用于判断k是否为完全平方数，若k是完全平方数则函数返回1，否则返回0。编写程序，输入两个整数m和n，调用isSquare函数，统计并输出m~n之间完全平方数的个数。
//输入
//在一行中输入两个非负整数m和n（m＜n），整数之间用空格隔开。
//输出
//在一行中输出一个整数，即统计的结果。
//样例输入：
//#include<stdio.h>
//#include<math.h>
//int isSquare(int k)
//{
//	int s = (int)sqrt(k); //计算k的平方根并取整
//	if (s * s == k)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int m, n;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		if (isSquare(i) == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//
//2.可逆素数：
//描述
//可逆素数是指一个素数将其各位数字的顺序倒过来构成的反序数也是素数。定义一个函数isPrime(int x)，该函数用于判断整数x是否为素数，若x是素数则函数返回1，否则返回0；然后再定义一个函数Reverse(int x)，该函数返回整数x反序数（即将各位数字的顺序倒过来）。编写程序，输入两个正整数m和n，调用isPrime和Reverse函数，求m~n之间所有可逆素数，并按从小到大的次序输出。
//输入
//在一行中输入两个正整数m和n（m＜n），整数之间用空格隔开。
//输出
//在一行中输出多个整数，即m~n之间可逆素数，整数之间用空格隔开。
//样例输入：
//#include<stdio.h>
//int isPrime(int x)
//{
//	if (x < 2)
//		return 0;
//	for (int i = 2; i <= x / 2; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int Reverse(int x)
//{
//	int rev = 0;
//	while (x != 0)
//	{
//		rev = rev * 10 + x % 10;
//		x = x / 10;
//	}
//	return rev;
//}
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		if (isPrime(i) == 1)
//		{
//			int rev = Reverse(i);
//			if (isPrime(rev) == 1)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}
//
//
//3.特殊整数求和：
//描述
//在自然数中找出包含2个9以上的整数，如99，199，979，1999，91939等等，设这些整数按由小到大的顺序排好：99，199，299，399，499，599，699，799，899，909，919，929，939……，求前n项之和，其中1≤n≤1000。
//定义一个函数num(int x, int k)，该函数用于统计x中包含几个k。编写程序，调用num(x, 9)函数，求出包含2个9的整数，进而求出前n项这类整数之和。
//输入
//输入一个整数n。
//输出
//输出一个整数，2个9以上的整数前n项之和。
//样例输入：
//#include<stdio.h>
//int num(int x, int k)
//{
//	int count = 0;
//	while (x != 0)
//	{
//		if (x % 10 == k)//取个位数字与k比较
//			count++;
//		x = x / 10;//去掉个位数字
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	int count = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	int i = 1;
//	while (count < n)
//	{
//		if (num(i, 9) >= 2)
//		{
//			sum += i;
//			count++;
//		}
//		i++;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//4.字符串加密：
//描述
//朱迪斯·恺撒在其政府的秘密通信中使用恺撒密码进行信息加密，恺撒加密因而得其名。恺撒密码的基本思想是将待加密的信息（称为明文）中的每个字母在字母表中向后移动常量key，得到加密信息（称为密文）。例如，假设字母表为英文字母表，key等于3，则对于明文computer systems将加密为frpsxwhu vbvwhpv。请编写一个程序，对输入字符串中英文大小写字母根据key进行凯撒密码加密，而其他字符不进行加密处理，然后输出加密后的字符串。
//输入
//在第一行输入一个字符串（不超过100个字符），第二行中输入一个正整数key。
//输出
//在一行中输出一个字符串，即加密后的字符串。
//样例输入：
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[100];
//	int key;
//	gets(s);
//	scanf("%d", &key);
//	int n = strlen(s);
//	for (int i = 0; i < n; i++)
//	{
//		if (s[i] >= 'a' && s[i] <= 'z') //小写字母
//		{
//			s[i] = (s[i] - 'a' + key) % 26 + 'a'; //(s[i] - 'a' + key) % 26，表示字母移动后的相对位置，再加上'a'得到新的字符
//		}
//		else if (s[i] >= 'A' && s[i] <= 'Z') //大写字母
//		{
//			s[i] = (s[i] - 'A' + key) % 26 + 'A';
//		}
//	}
//	puts(s);
//	return 0;
//}
//
//5.三角型图案：
//
//描述
//编写程序打印n行如下图形，其中1≤n≤1000。
//  A
// BCD
//EFGHI
//………………
//输出的字母均为大写，字母顺序为：A, B, C……Z, A, B, C......（26个大写字母往复循环）。
//输入
//输入1个整数n。
//输出
//输出如上n行金字塔图形。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char ch = 'A';
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n - i; j++) //n-i表示每行前面的空格数
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= 2 * i - 1; k++) //2*i-1表示每行字符的个数
//		{
//			printf("%c", ch);
//			if (ch == 'Z')
//				ch = 'A'; //当ch为Z时，下一行重新变为A
//			else
//				ch++;
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
六.实验六：


//1.矩阵各列之和：
//描述
//输入一个m行n列的矩阵，输出该矩阵各列元素之和。
//输入
//在第一行中输入两个正整数m和n（1≤m≤20，1≤n≤20），整数之间用空格隔开；接着输入m行数据，每行有n个整数，整数之间用空格隔开。
//输出
//在一行中输出n个整数，即每列整数的总和，整数之间用空格隔开。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	int a[20][20];
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		int s= 0;
//		for (int i = 0; i < m; i++)
//		{
//			s += a[i][j];
//		}
//		printf("%d ", s);
//	}
//	return 0;
//}
//
//2.矩阵对角线之和：
//描述
//输入一个5行5列的矩阵，计算并输出该矩阵次对角线上的所有元素之和。所谓次对角线是指从矩阵的右上角至左下角的连线。
//输入
//输入5行数据，每行有5个整数，整数之间用空格隔开。
//输出
//在一行中输出一个整数，即矩阵次对角线上的所有元素之和。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	int a[5][5];
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		sum += a[i][4 - i]; //次对角线元素的下标关系
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//3.判断上三角矩阵：
//描述
//输入一个n行n列的矩阵，判断该矩阵是否为上三角矩阵。所谓上三角矩阵是指主对角线以下的元素都为0的矩阵，而主对角线为从矩阵的左上角至右下角的连线。
//输入
//在一行中输入一个整数n（0＜n≤20）；接着输入n行数据，每行有n个整数，每个整数之间用空格隔开。
//输出
//在一行中输出一个字符串。如果输入的矩阵是上三角矩阵，则输出“Yes”，否则输出“No”。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	int n;
//	int a[20][20];
//	int flag = 1;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 1; i < n; i++) //遍历主对角线以下的元素
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (a[i][j] != 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//	if (flag == 1)
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}
//
//4.矩阵运算：
//描述
//有一个n行m列（0＜n＜20，0＜m＜20）的二维数组b，编写一个程序计算每一列的最小值，并将此最小值顺序存放在一个一维数组中，最后按顺序输出该一维数组。
//输入
//输入n + 1行，第1行有2个整数，分别表示n和m，两数之间用空格隔开；后面有n行数据，每行有m个整数，整数之间用空格隔开。
//输出
//输出1行，包含m个整数，即每列的最小值，整数之间用空格隔开。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	int b[20][20];
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	for (int j = 0; j < m; j++)
//	{
//		int min = b[0][j];
//		for (int i = 1; i < n; i++)
//		{
//			if (b[i][j] < min)
//				min = b[i][j];
//		}
//		printf("%d ", min);
//	}
//	return 0;
//}
//
//5.矩阵运算2：
//描述
//有1个n×n的整数矩阵，将其右下三角部分（包括次对角线元素）的最大值输出。
//QQ20241221 - 222546.png
//其右下三角部分（红线三角形内）元素最大值是90
//输入
//输入第一行有1个整数是n，接下去是n行×n列的矩阵，矩阵的每个元素都是整数，其中1 <= n <= 100。
//输出
//输出1个整数，是上述矩阵右下三角部分（包括次对角线元素）的最大值。
//样例输入：
//#include<stdio.h>
//int main()
//{
//	int n;
//	int a[100][100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	int max = a[0][n - 1]; //初始化最大值为右上角元素
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = n - 1 - i; j < n; j++) //遍历右下三角部分元素
//		{
//			if (a[i][j] > max)
//				max = a[i][j];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
