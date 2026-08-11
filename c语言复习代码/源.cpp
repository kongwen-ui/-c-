#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
//一.分支和循环练习：
//1.ASCll码转字符：73,32,99,97,110,32,100,111,32,105,116,33
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };/*或者char*/
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}
//2.出生日期输入和输出：年份1990-2015y,月份1-12m,日1-30d
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);//可以限定宽度
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//2是限定打印宽度，0是用来填充的
//	printf("date=%02d\n", date);
//	return 0;
//}
//3.输入学生的学号和三科成绩并输出：
//int main()
//{
//	int n = 0;
//	float c = 0, m = 0, e = 0;
//	scanf("%d;%f;%f;%f", &n,&c, &m, &e);
//	printf("The each subject of No.%d is %.2f,%.2f,%.2f\n", n, c, m, e);
//}
//4.printf的返回值：
//int main()
//{
//	int n = printf("Hello World");
//	printf("\n%d\n",n);
//	return 0;
//}
//5.转义字符：
//int main()
//{
//	printf("printf(\"Hello World\\n\");\n");//请注意，这里Hello World因为双引号被看成另一个字符串所以要加转义字符
//	printf("cout<<\"Hello World\"<<endl;");
//	return 0;
//}
//6.找最大数：
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 4; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//}
//7.计算球体的体积：Π=3.1415926
//int main()
//{
//	float r = 0.0f;
//	float v = 0.0f;
//	scanf("%f", &r);
//	v = (4 / 3.0) * 3.1415926 * r * r * r;
//	printf("%.3f\n", v);
//	return 0;
//}
//8.计算体重指数：
//int main()
//{
//	float BMI = 0.0f;
//	int w = 0;
//	int h = 0;
//	scanf("%d %d", &w, &h);
//	BMI = w / (h * 0.01 * h * 0.01);
//	printf("%.2f", BMI);
//	return 0;
//}
//9.计算1！+ 2！+ 3！+ .........10!
//int main()  //这是最好的代码，其他的是自己写的
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;   // 1 2 6 
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}
//int ret_x(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum += ret_x(i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//10.在一个有序数组中查找具体的某个数字n（二分查找）
//效率是log2n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left+(right-left)/ 2;  //这种写法可以很好的防止mid溢出整形的最大值
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int n =17;
//	int i = 0;
//	int p = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("找到了，p=%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//11.编写代码，演示多个字符从两端移动，向中间汇聚：
//int main()
//{
//	char arr1[] = "Welcome to Bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//int right=sizeof(arr1)/sizeof(arr1[0])-2;
//	//这里是因为strlen是算\0之前的字符，而sizeof把\0也算进去了
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);   //windows的函数，可以设定程序执行的速度，单位是毫秒；
//		//清空屏幕
//		system("cls"); //system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//12.编写代码实现，模拟用户登录情景，并且只能登陆三次。
//只允许输入三次失误，如果密码正确，提示登陆成功，如果三次输入均失误，则退出程序
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码->");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)  //这里用strcmp，而不是==，是因为==比较的是两个字符串首元素的地址
//			//如果返回值是0，则代表两个字符串相等
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入均错误，退出程序\n");
//	}
//	return 0;
//}