#define _CRT_SECURE_NO_WARNINGS
//一.选择语句和循环语句

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
//} //按ctrl z 它就会自动停下来。
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
////林老师上课代码----二进制到十进制的转换
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	int a[70];  //这是一个数组有七十个元素，因为一个整形4个字节，int定义的n最多可以有64位数所以用【70】来容纳
//	scanf("%d",&n);
//	i = 0;
//	while (n!=0)  //当n等于0时停下，用的是短除法，但要将数字倒过来写
//	{
//		a[i] = n % 2;//刚开始等于0，放第一个位，求他的模也就是余数
//		i++;//让它慢慢自增
//		n = n / 2;
//	}
//	if (i == 0)
//		printf("0");//这是一个补丁，因为上面while循环里0不适用；
//	else
//		for (i--; i >= 0; i--)//当i从while循环里出来的时候是最大值，所以这里让它自减以达到倒序的效果
//			printf("%d", a[i]);
//	return 0;
//}
// 
// 
//4.for循环语句:
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	for (i = 1; i <= 10; i++)
//		printf("%d", i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;  //这里的continue和while循环里的continue作用不同，这里它后面返回到的是i++；
//		printf("%d", i);
//	}
//	return 0;
//}
//最好在i<10的时候写的是开区间，这样可以增加可读性；
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)  //再写for循环的时候最好不要省略初始化，不然会导致达不到预期的效果
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	return 0;
//	}
//最后只会打印出三个hehe;
// 
// 
// for循环也可以这样写：
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}*/
// 
// 
//林老师上课代码-----冒泡排序
//#include<stdio.h>
//int main()
//{
//	int a[100] = { 12,11,15,19,14,18,17,13,16,10 };
//	int i, n, t;
//	n = 10;
//	for(i=0;i<n-1;i++)//这是一个冒泡序列；注意是n-1；
//		if (a[i] > a[i + 1])
//		{
//			t = a[i];
//			a[i] = a[i + 1];
//			a[i + 1] = t;
//		}
//	for (i = 0; i < n; i++)
//		printf("%d\n", a[i]);
//
//	return 0;
//
//}//这是求最大值的冒泡序列让最大值跑到最右边；
//让它按照从小到大排序：
//#include<stdio.h>
//int main()
//{
//	int a[100] = { 12,11,15,19,14,18,17,13,16,10 };
//	int i, t, n, k;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	for(k=1;k<n;k++)
//		for (i = 0; i < n - k; i++)
//		{
//			if (a[i] > a[i + 1])
//			{
//				t=a[i];  //注意这里不能写成a[i]=t,因为t没有初始化；
//				a[i] = a[i + 1];
//				a[i + 1] = t;  //注意不能反过来写；
//			}
//		}
//	for (i = 0; i < n; i++)
//		printf("%d\n", a[i]);
//	return 0;
//}//这个程序是用来手动输入排序；
//#include<stdio.h>
//int main()
//{
//	int a[100] = { 12,11,15,19,14,18,17,13,16,10 };
//	int i, p, n, min;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	min = a[0];
//	p = 0;
//	for (i = 1; i < n; i++)
//		if (a[i] <= min)
//		{
//			min = a[i];
//			p = i;
//		}
//	printf("%d %d", min, p);
//	return 0;
//}//这个程序是找出最小值并输出其下标；
// 
//
//#include<stdio.h>
//int main()
//{
//	int a[100] = { 12,11,15,19,14,18,17,13,16,10 };
//	int i, p, n, x;
//	scanf("%d %d", &n,&x);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	for(i=0;i<n;i++)
//		if (a[i] == x)
//		{
//			p = i;
//			break;
//		}
//	printf("%d", p);
//	return 0;//指出给定x的下标；
//}
//找出与平均值绝对偏差最大的；
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a[100] = { 0 };
//	int i, n = 10, p;
//	double avg, max, b[100];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	avg = 0;
//	for (i = 0; i < n; i++)
//		avg += a[i];
//	avg = avg / n;
//	for (i = 0; i < n; i++)
//		b[i] = fabs(a[i] - avg);
//	max = b[0];
//	p = 0;
//	for(i=1;i<n;i++)
//		if (max < b[i])
//		{
//			max = b[i];
//			p = i;
//		}
//	printf("%d", a[p]);
//	return 0;
//}
//
//5.do while语句：
//#include <stdio.h>
//int main()
//{
//	int i = 5;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	} 
//	while (i < 10);
//	printf("%d", i * 2);//说明break是跳出整个循环体；
//    return 0;
//}
//#include <stdio.h>//continue跳出本次循环，进入下一次循环；
//int main()
//{
//	int i = 5;
//
//	do
//	{
//		
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	} while (i < 10);
//	printf("%d", i * 2);
//	return 0;
//}


//4.goto语句：
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");//原理是调用系统命令来实现的，shutdown是关机命令，-s是关机，-t是时间，60是60秒；
//dfhia:
//	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");//取消关机命令，-a是取消；
//	}
//	else
//	{
//		goto dfhia;
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}





//二.函数：

//1.自定义函数：
//（1）变换变量函数错误示范：
 /*#include<stdio.h>
void Swap2(int x, int y)      //这里的x和y是形参；//在调用函数的时候会把实参的值传递给形参；
                             //所以这里的x和y是两个新的变量；
                             //在函数体内对x和y的操作不会影响到实参；
                             //所以这里的交换是无效的；
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int num1 = 1;
	int num2 = 2;
	Swap2(num1, num2);
	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
	return 0;
}*/
//（2）变换变量函数正确示范：
//#include <stdio.h>
//void Swap2(int* px, int* py)   //这里的px和py是形参，是两个指针变量；
//                               //指针变量用来存放变量的地址；//在调用函数的时候传递的是实参的地址；
//                               //所以这里的px和py存放的是实参的地址；//在函数体内通过解引用操作符*来访问实参；
//void Swap2(int* px, int* py)   //这里的px和py是形参，是两个指针变量；
//{                             
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}

//2.自定义函数的练习：
//(1)判断素数：
//#include<stdio.h>
//int isPrime(int x)  //当函数不需要修改a和b的值时可以不用传地址过去；
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
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	if (isPrime(y) == 1)
//		printf("是素数");
//	else
//		printf("不是素数");
//	return 0;
//}
//(2)判断一年是不是闰年:
//#include<stdio.h>
//int isLeapYear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//	}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (isLeapYear(year) == 1)
//		printf("是闰年");
//	else
//		printf("不是闰年");
//	return 0;
//}
//(3)写一个函数，实现整型有序数组的二分查找：
//#include<stdio.h>
//int binarySearch(int arr[], int size, int key)
//{
//	int left = 0;
//	int right = size - 1;   //注意这里是size-1，因为下标是从0开始的；
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;    //防止溢出
//		if (arr[mid] == key)
//			return mid;        //找到了，返回下标
//		else if (arr[mid] < key)
//			left = mid + 1;     //在右半部分继续查找
//		else
//			right = mid - 1;     //在左半部分继续查找
//	}
//	return -1;         //没找到，返回-1
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
//	int size = sizeof(arr) / sizeof(arr[0]);//为什么要除以arr[0]的大小，因为arr是一个整型数组，
// 所以arr[0]的大小就是一个整型的大小；
//	int key;
//	printf("请输入要查找的数字: ");
//	scanf("%d", &key);
//	int result = binarySearch(arr, size, key);
//	if (result != -1)
//		printf("找到了，数字 %d 在下标 %d 处。\n", key, result);
//	else
//		printf("没找到，数字 %d 不在数组中。\n", key);
//	return 0;
//}
//sizeof(arr)的值是40，因为arr有10个整型元素，每个整型元素4个字节，所以总共40个字节；
//(4).调用函数使得num的至增加一：
//#include<stdio.h>
//int f(int num)
//{
//	return num + 1;
//}
//int main()
//{
//	int num = 0;
//	printf("%d", f(num));
//	return 0;
//}

//3.函数的嵌套调用和链式访问：
//什么叫嵌套定义：嵌套定义是指一个函数的定义在另一个函数内部进行。这种行为可以使得内层函数的作用域仅限于外层函数。
//(1)函数的嵌套调用：
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//(2)函数的链式访问：
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//strcat函数的作用是将两个字符串连接起来；
//	printf("%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//解释一下这个语句的执行过程：
//	//最里面的printf先执行，打印出43，返回值是2，因为打印了两个字符，然后外层的printf执行，打印出2，返回值是1，
//	// 因为打印了一个字符，最后最外层的printf执行，打印出1，返回值是1，因为打印了一个字符；
//	//注：printf函数的返回值是打印在屏幕上字符的个数；
//	return 0;
//}

//4.函数的定义和声明：
//函数的声明：告诉编译器函数的名称、返回类型和参数类型。
//函数的定义.
//
//5.函数的递归：
//递归函数是指在函数体内调用函数本身的函数。
//(1)练习一：
//接受一个整型值（无符号），按照顺序打印它的每一位。
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//先从最里面那一层开始执行打印；
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}
//(2)练习二：
//编写函数不允许创建临时变量，求字符串的长度.(非常变态)
//#include <stdio.h>
//int Strlen(const char* str)//
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + Strlen(str + 1);
//}
//int main()
//{
//	
//	const char* p ="abcdef" ;
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}
/*
6.函数的递归和迭代：
（1）练习一：
求n的阶乘。*/   //算法：n*fac(n-1)
//#include<stdio.h>
//int fac(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int fac(int n)
//{
//	int i = 1,ret=1;
//	for (; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}
//

//(2)练习二：
//求第n个斐波那契数。
#include<stdio.h>
//int count = 0;
//int fib(int n)      //这道题目用递归的方法来写，会大量消耗资源；可能会栈溢出；效率非常低；
//{
//  if(n==3)
//     count++;
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	int a=1, b=1, c=0;
//	while (n > 2)
//	{
//		n -= 1;
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	//printf("%d", count);
//	return 0;
//}




//三。数组：

//1.一维数组：
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = sz - 1; i >= 0; i--) //倒序打印数组元素；
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
// }
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i<sz; i++) //倒序打印数组元素；
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);//打印各个元素的地址发现地址是连续分布的且相差4个字节
//
//	}
//	return 0;
//}
//2.二维数组：
//二维数组的三种定义方式：
//int main()
//{
//	/*(1)*/int arr1[3][4] = { 1,2,3,4,2,3,4,5,5,3,2 };
//	/*(2)*/int arr2[3][4] = { {1,2},{3,4},{5,6} };
//	/*(3)*/int arr3[][4] = { {1,2,3,4},{2,3} };
//	return 0;
//}
//输入和打印二维数组：
// int main()
//{
//	int arr1[3][4] = { 1,2,3,4,2,3,4,5,5,3,2 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 打印二维数组每个元素的地址：可知二维数组的元素储存也是连续的
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,2,3,4,5,5,3,2 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr1[%d][%d]=%p\n",i,j, &arr1[i][j]);
//		}
//	}
//	return 0;
//}
//3.数组作为函数参数：
//冒泡排序：
//void bubble_sort(int *arr, int sz)  //也可以写成int arr[];
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j+1];
//				arr[j+1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//4.数组越界：
//int main()
//{
//	int arr1[3][4] = { {1,2,3,4},{2,3,45,3} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//5.数组名:
//数组名确实可以表示首元素的地址但是有两个例外：
//（1）sizeof(数组名)，这个求出的是整个数组的大小，单位字节，数组名代表的是整个数组，
//（2）&数组名，取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);  //首元素地址
//	printf("-----------------------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);  //首元素地址
//	printf("-----------------------\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1); //数组的地址
//	return 0;
//}
//二维数组的数组名也表示首元素地址；

//四.操作符：

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//1.算术操作符：+ - * % /
//int main()
//{
//	int a = 7 % 2;//取模操作符两边的操作数必须是整数
//	int b = 7 / 2;//两边有浮点数才会做小数运算；
//	printf("%d %d", a, b);
//	return 0;
//}
//2.移位操作符：左移<<  右移>>  移动的是二进制位   左移补0 右移补符   不能移动负数 <<-1 是错的未定义
//int main()
//{
//	int a = 7;//00000000000000000000000000000111 -补码
////7 << 1 --->   00000000000000000000000000001110 --> 14
//	/*int b = a << 1;*/
//	int b = a >> 1; //00000000000000000000000000000011
//	printf("%d\n", a);
//	printf("%d\n", b);
//}

//3.位操作符：& | ^   都是按二进制位来的
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011 --- 3的补码
//    //11111111111111111111111111111011 --- -5的补码
//	//10000000000000000000000000000101 --- -5的原码
//	//00000000000000000000000000000011 --- 按位与的结果  同时为1才是1
//	//11111111111111111111111111111011 --- 按位或的结果  有1就为1，同时0才是0
//	//10000000000000000000000000000101 --- -5
//	//11111111111111111111111111111000 --- 按位异或的结果  相同为0，不同为1
//	//10000000000000000000000000001000 --- -8
//	int b = -5;
//	//int c = a & b;
//	//int c = a | b;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}
//不能创建第三个临时变量，实现两个数的交换
//int main()
//{
//	int a = 1; //001  
//	int b = 7; //111
//	int c = 0;
//	printf("交换前a=%d b=%d\n", a, b);
//	//a = a + b;   //这是法一，但是会有溢出的问题
//	//b = a - b;
//	//a = a - b;
//	//法二：异或操作符支持交换率 0^a=a a^a=0
//	a = a ^ b;  //001^111
//	b = a ^ b;  //001^111^111 --- 0^001 ---a
//	a = a ^ b;  //001^111^111^001^111 --- 相当于a^a^b ---b
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}
//求一个整数存储在内存中的二进制中的1的个数：
//int main()   //法一 //这个方法只能处理正数
//{
//	int i = 0;
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//法二
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;//计数
//	for (i = 0; i < 32; i++)  //-12  10000000000000000000000000001100
//	                           //    11111111111111111111111111110011
//		                       //    11111111111111111111111111110100 --- 29
//	{                                
//
//		if (num & (1 << i))       
//			count++;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//法三：
//#include <stdio.h>
//int main()
//{
//	int num = -1;     
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);    //这是消除最右边的一个1的算法 
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}


//4.赋值操作符：没什么好说
//5.单目操作符：
// ! 逻辑反操作
//-负值
//+ 正值
//& 取地址
//sizeof      操作数的类型长度（以字节为单位）
//~对一个数的二进制按位取反
//--          前置、后置--
//++前置、后置++
//* 间接访问操作符(解引用操作符)
//(类型)强制类型转换
//int main()
//{
//	int a = 0;
//	int sz = sizeof(a);  //计算变量所占内存空间大小，单位是字节
//	//int sz = sizeof(int);    //计算类型所创建的变量占空间的大小，单位是字节
//	printf("%d\n", sz);
//	return 0;
//}
//int main()
//{
//	int a = 13;  //1+4+8 0 2 3
//	a |= (1 << 4);  //这个就是让a的某一位变成1  29
//	//00000000000000000000000000001101 -- 13
//	//00000000000000000000000000000001 -- 1
//	//00000000000000000000000000010000 -- 1<<4
//	//00000000000000000000000000011101 -- a|=(1<<4)
//	printf("%d\n", a);
//	a &= (~(1 << 4)); //13
//	//00000000000000000000000000001101 -- 13
//	//00000000000000000000000000000001 -- 1
//	//00000000000000000000000000010000 -- 1<<4
//	//11111111111111111111111111101111 -- ~(1<<4)
//	//00000000000000000000000000001101 -- a&=(~(1<<4))
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	//sizeof 是操作符可以不加括号但是计算类型的时候要加
//	//strlen 是函数要加括号
//	int arr[] = { 0 };
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof (int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof arr);
//	//printf("%d\n", sizeof int); //这个是不可以的
//	return 0;
//}
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)  4
//}
//void test2(char ch[])                    //为什么两个都是4呢？因为这里传过来的是地址地址的内存就是一样的
//{
//	printf("%d\n", sizeof(ch));//(4) 4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)  40
//	printf("%d\n", sizeof(ch));//(3)   10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//问：
//（1）、（2）两个地方分别输出多少？
//（3）、（4）两个地方分别输出多少？
//

//6.关系操作符：
//>
//>=
//<
//<=
//!=用于测试“不相等”
//== 用于测试“相等”
//int main()
//{
//	if ("abc" == "afjasdjf")  //这样写是错的 因为这样是在比较两个字符串的首字符的地址
//	{
//		int a = 1;
//	}
//	return 0;
//}

//7.逻辑操作符： 逻辑与&&  逻辑或||
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a<b && b==5;  //两边表达式都正确才为1
//	int d = a < b || b == 4; //有一边对就为1
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}
//360笔试题   //&& 左边为假，右边就不计算了
// || 左边为真，右边就不计算了
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;  //1 3 3 4
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
////程序输出的结果是什么？  1 2 3 4  
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; //2 3 3 5
//	i = a++||++b||d++;  //2 2 3 4  //有结果之后就不继续走了
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//8.条件操作符（三目操作符）
//int main()
//{
//	int a = 4;
//	int b = 0;
//	//a > 5 ? b = 3 : b = -1;
//	b = (a > 5 ? 3 : -1);
//	printf("%d\n", b);
//	return 0;
//}

//9.逗号表达式：//整个表达式的最后一个表达式是式子的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//11. 下标引用、函数调用和结构成员：
//[]这个是一个双目操作符，arr和7分别是它的操作数
//int main()
//{
//	//arr[7] --> *(arr+7) --> *(7+arr) --> 7[arr]           *(arr+7)就是第8个元素
//	int arr[10] = { 0 };
//	arr[7] = 1;
//	7[arr] = 2;
//	printf("%d\n", 7[arr]);
//	return 0;
//}
//结构成员调用：
//. 结构体.成员名
//-> 结构体指针->成员名
//struct stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_stu(struct stu* ps)
//{
//	//strcpy((*ps).name, "zhangsan");
//	//(*ps).age = 20;
//	//(*ps).score = 100.0;
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//void print_stu(struct stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//int main()
//{
//	struct stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}
 
//五.指针：

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//1.指针是什么？
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//*pa说明是指针，int 说明是指向int类型
//	return 0;
//}
// x86 -- 32位机器
// x64 -- 64位机器

//2.指针和指针类型：
//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//	//sizeof返回的是无符号整型 unsigned int
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344; //0x是16进制数，一个数字有四个二进制位，所以两个数字为一个字节，
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = (char*)&a; //这里强制使用char类型来接受a，会导致只能调用一个字节只改了44；
//	*pc = 0;
//	printf("%d", a);
//	//结论：
//	//指针类型决定了指针在被解引用的时候访问几个字节
//	//char类型的指针访问1个字节
//	//int类型的指针访问4个字节
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	//char* pc = &a;  //这样子会报错
//	char* pc =(char*) & a;
//	printf("pa=%p\n", pa);
//	printf("pa=%p\n", pa+1);
//	printf("pc=%p\n", pc); 
//	printf("pc=%p\n", pc+1);
//	//pa=001DFE90
//	//pa = 001DFE94
//	//pc = 001DFE90
//	//pc = 001DFE91
//	//我们可以发现int类型增加了4个字节，而char类型则增加了1个字节，另外地址是标记1个字节的加1就是一个字节
//	//结论2：
//	//指针的类型决定了+1 —1 操作时跳过了几个字节
//	//决定了指针的步长
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int* pi = &a;
//	float* pf = (float*) & a; //这样写虽然不会报错，但是会让编译器使用整数的解答方式来解答浮点数，得到一个特别大的数
//	*pf = 100.0;
//	//*pi = 100;
//	return 0;
//}

//3.野指针：
//int main()
//{
//	int* p;
//    //没有初始化这就是一个野指针；
//	//里面放的是随机值0xcccccccc;
//	return 0;
//}
//指针的越界访问：
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}
//指针指向的空间释放:
//int *test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	//这样子也是野指针，因为a是局部变量，一出函数就会被销毁；
//	return 0;
//}
//怎么避免野指针：
// 1. 指针初始化
//2. 小心指针越界
//3. 指针指向空间释放即使置NULL
//4. 避免返回局部变量的地址
// 5. 指针使用之前检查有效性
//int main()
//{
//	//int* p =NULL;
//	//*p = 100;
//	//给指针初始化成NULL
//	int* p3 = NULL;
//	if (p3 != NULL)
//	{
//		*p3 = 100;
//	}
//	return 0;
//}
//int *test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();   //虽然说变量a被销毁了，但是因位为没有对&a地址中的值进行改动所以*p还是可以得到10
//	printf("haha\n");  
//	printf("abcdef\n");  //但是加了这两个语句，可能就会改动所以这样写还是不行的；
//	if (p != NULL)
//	{
//		printf("%d\n", *p);  //打印出来的结果是7
//	}
//	return 0;
//}


//4.指针运算：
//4.1指针加减整数：
//#define N_values 5
//int main()
//{
//	float values[N_values];
//	float* vp = values;
//	for (vp = values; vp < &values[N_values];)
//	{
//		*vp++ = 0;  //后置++ 先赋值再加加
//	}
//	//*vp++ 和 (*vp)++ 的区别是*vp++是对地址vp进行++；而（*vp）++ 是对整个值进行++
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组下标的写法
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//	/*int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}*/
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//4.2指针-指针：
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);  //指针-指针的值是两个地址之间的元素个数，这是规定
//	printf("%d\n", &arr[0] - &arr[9]);   //求出来是-9
//	return 0;
//	//不是所有指针都可以相减，只有指向同一块空间才可以
//}
//int my_strlen(const char* str)
//{
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;*/
//	const char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
//4.3指针的运算：
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与
//指向第一个元素之前的那个内存位置的指针进行比较。

//5.指针和数组：
//int main()
//{
//	int arr[10] = { 0 };
//	//arr是首元素地址
//	//&arr[0]
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p------%p\n", &arr[i], p + i);
//	}
//	return 0;
//}
//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", i[arr]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//	return 0;
//}

//6.二级指针：
//int main()
//{
//	int a =10;
//	int* pa = &a;//一级指针
//	int** ppa = &pa;//二级指针
//	//**ppa = 20;
//	*pa = 20;
//	printf("%p\n", ppa);
//	//*ppa存放的是&a也就是pa的值;
//	//ppa存放的是&pa
//	//*ppa说明ppa是指针,而int* 说明ppa的指向对象是int*类型
//	return 0;
//}

//7.指针数组：
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr[10];
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* parr[10] = { pa,pb,pc };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 5,6,7,8 };
//	int arr3[4] = { 5,0,7,5 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//六.结构体：
//struct peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p1,p2; //p1 p2是两个全局的结构体变量
//struct peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};
//struct st
//{
//	struct peo p;  //在结构体里可以调用另一个结构体
//	int num;
//	float f;
//};
//void print1(struct peo p1)
//{
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//}
//void print2(struct peo* p2)  //最好使用传地址的方式来传参防止内存消耗过多
//{
//	printf("%s %s %s %d\n", p2->name, p2->tele, p2->sex, p2->high);
//}
//int main()
//{
//	struct peo p1 = {"zhangsan","13400962720","男",175};  //结构体变量的创建
//	struct st p2 = { {"lisi","13748774839","女",160},100,3.14f }; //结构体里有结构体变量创建方式
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", p2.p.name, p2.p.tele, p2.p.sex, p2.p.high, p2.num, p2.f);
//	//这是结构体成员的调用方式
//	print1(p1);
//	print2(&p1);
//	return 0;
//}


//七.调试：

//#include<stdio.h>
//#include<string.h>
//1.常用的快捷键：
//F5
//启动调试，经常用来直接跳到下一个断点处。
//F9
//创建断点和取消断点
//断点的重要作用，可以在程序的任意位置设置断点。
//这样就可以使得程序在想要的位置随意停止执行，继而一步步执行下去。
//F10
//逐过程，通常用来处理一个过程，一个过程可以是一次函数调用，或者是一条语句。
//F11
//逐语句，就是每次都执行一条语句，但是这个快捷键可以使我们的执行逻辑进入函数内
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//2.一个很巧的代码：
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");   //这是一个死循环,原因是arr[12]的地址和i的地址重合了所以i会重新变成0
//	}
//	return 0;
//}

//3.strcpy函数的实现：
//版本一：
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxx";
//	char arr2[] = "hello bit";
//	//strcopy在拷贝字符的时候会把源字符串中的\0也拷贝过去
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//版本二：
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1++ = *arr2++;
//	}
//	*arr1 = *arr2;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxx";
//	char arr2[] = "hello bit";
//	//strcopy在拷贝字符的时候会把源字符串中的\0也拷贝过去
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//版本三：
//#include<assert.h>
//void my_strcpy(char* arr1, const char* arr2)  //加const让这个值不会被修改
//{
//	assert(arr2 != NULL);
//	assert(arr1 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxx";
//	char arr2[] = "hello bit";
//	//strcopy在拷贝字符的时候会把源字符串中的\0也拷贝过去
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//strcpy的返回值是char*
//为了实现链式访问
//strcpy函数返回的是目标空间的起始地址
//#include<assert.h>
//char* my_strcpy(char* arr1, const char* arr2)  //加const让这个值不会被修改
//{
//	char* ret = arr1;
//	assert(arr2 != NULL);
//	assert(arr1 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxx";
//	char arr2[] = "hello bit";
//	//strcopy在拷贝字符的时候会把源字符串中的\0也拷贝过去
//	
//	//strcpy(arr1, arr2);
//	printf("%s\n",my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}

//4.const的作用：
//int main()
//{
//	const int num = 10;  //const 让这个值无法被修改
//	//num = 20;
//	int* p = &num; //鹏哥说可以用指针来修改但是现版本下已经不行了
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}
//用const来修饰指针变量：
//int main()
//{
//	int a = 10;
//	const int* p = &a;  //1.放在左边*P不能通过p来改变了
//	int* const p = &a;  //2.放在右边p不能改变p=&n;不行
//
//	return 0;
//}

//5.求字符串长度：
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}




















