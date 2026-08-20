#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
//注意，这里所给的标题均是鹏哥C语言B站课程对应的课，并非一定对应标题内容，比如函数练习实则有分支循环的内容

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

//二.函数练习：
//1.写代码将三个整数按从大到小输出：
// 我自己写的代码：
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		printf("%d ", a);
//		if (b > c)
//		{
//			printf("%d %d", b, c);
//		}
//		else if (c > b)
//		{
//			printf("%d %d", c,b);
//		}
//		
//	}
//	else if(b>a&&b>c)
//	{
//		printf("%d ", b);
//		if (a > c)
//		{
//			printf("%d %d", a,c);
//		}
//		else if (c > a)
//		{
//			printf("%d %d", c,a);
//		}
//	}
//	else if (c > a && c > b)
//	{
//		printf("%d ", c);
//		if (a > b)
//		{
//			printf("%d %d", a,b);
//		}
//		else if (b > a)
//		{
//			printf("%d %d", b,a);
//		}
//	}
//	return 0;
//}
// 鹏哥写的代码：
//void swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a<c)
//	{
//		swap(&a, &c);
//	}
//	if (b<c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//3.写一个代码打印1-100之间所有三的倍数的数字：
//int main()
//{
//	int i = 0;
//	//for (i = 3; i < 100; i++)  //版本一
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	for (i = 3; i < 100; i+=3) //版本二
//	{
//	  printf("%d ", i);
//	}
//	return 0;
//}
//4.写一个代码求两个数的最大公约数：
// 自己写的：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max_yue = 0;
//	if (a > b)
//	{
//		for (int i = b; i >1 ; i--)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				max_yue = i;
//				break;
//			}
//		}
//	}
//	if (a < b)
//	{
//		for (int i = a; i >1 ; i--)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				max_yue = i;
//				break;
//			}
//		}
//	}
//	printf("%d\n", max_yue);
//	return 0;
//}
//鹏哥法一：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;  //逗号表达式求两个变量的最小值
//	while (min)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			break;
//		}
//		min--;
//	}
//	printf("%d\n",min );
//	return 0;
//}
//鹏哥法二：辗转相除法
//24 % 18 --6
//a<----b<---c
//18 % 6 ---0
//a    b就是了     c
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a= b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//5.编写程序求1-100的所有整数中出现几个数字9
//自己写的,有点蠢了
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		int c = i;
//		for (int j=0; j < 2;j++)
//		{
//		
//			if ( c% 10 == 9)
//			{
//				count++;
//			}
//			c = c / 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//鹏哥版本：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)  //不能写成else if 因为if 和else if只有一个能执行
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//6.计算1/1-1/2+1/3-1/4+1/5-.......+1/99-1/100
// 我写的
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= (1.0)/i;
//		}
//		else
//		{
//			sum += (1.0)/i;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//鹏哥写的，我去此人思路不亚于我
//int main()
//{
//	int i = 0;
//	double sum = 0;   //要注意这里得是储存浮点数的浮点型
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//7.求10个整数中的最大值：
//我和鹏哥的写法一样，视频里有个天才竟然用二分查找，二分查找只能给有序数组用，既让有序了，最后一个数就是最大值了
//int main()
//{
//	int arr[10] = { 1,3,5,7,8,90,8,3,54,10 };
//	int i = 0;
//	int max = arr[0]; //不能初始化为0，因为可能有负数
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//8.在屏幕上打印99乘法口诀表：
//自己写的
//1*1  1*2 1*3
//2*1 2*2 2*3
//我写的和鹏哥差不多但是加了鹏哥的-2d
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i * j);//这里的-2d是左对齐，右对齐是2d
//		}
//		printf("\n");
//	}
//	return 0;
//}

//三.数组练习：
//1.字符串逆序：
//将字符数组中的字符反向排列，不是倒着打印
//法一：
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 2; //注意，这里减2是因为sizeof会把\0算进去
//	while (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		right--;
//		left++;
//	}
//	int i = 0;
//	//for (i = 0; i < sz - 1; i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	printf("%s", arr);
//	return 0;
//}
//法二：递归(一个参数)
//void reverse(char* arr)
//{
//	char temp = *arr;
//	int sz = strlen(arr);
//	*arr = *(arr + sz - 1);
//	*(arr + sz - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse(arr + 1);
//	}
//	*(arr + sz - 1) = temp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}
//法三：递归(两个参数)
//void reverse(char arr[],int left,int right)
//{
//	char temp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = temp;
//	if (left < right)
//	{
//		reverse(arr, left + 1, right - 1);
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//	reverse(arr,left,right);
//	printf("%s\n",arr);
//	return 0;
//}
//2.计算一个数的每一位之和（用递归） 
// 自己写的：
//int Digitsum(int a)
//{
//	int sum = 0;
//	int c = 0;
//	if (a > 0)
//	{
//		c = a % 10;
//		sum=sum + c+ Digitsum(a / 10);
//	}
//	return sum;
//}
//int main()
//{
//	int a = 1234;
//	int sum = 0;
//	int b=Digitsum(a);
//	printf("%d\n", b);
//	return 0;
//}
//鹏哥写的：
//int Digitsum(unsigned int a)
//{
//	if (a > 9)
//		return Digitsum(a / 10) + a % 10;
//	else
//		return a;
//}
//int main()
//{
//	unsigned int a = 1234;
//	int sum=Digitsum(a);
//	printf("%u\n", sum);
//	return 0;
//}
//3.使用递归实现n的k次方：
//n*n^(k-1)
//double f(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	if(k>0)
//	return n * f(n, k - 1);
//	if (k < 0)
//		return 1.0 / f(n, -k);
//	
//}
//int main()
//{
//	int n = 2;
//	int k = 6;
//	scanf("%d %d", &n, &k);
//	double ret = f(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//4.两个数组一样大，交换两个数组的内容：
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//5.创建一个整形数组，完成对数组的操作：
//实现init函数，初始化数组的元素全为0
//实现print函数打印数组的每个元素
//实现reverse,完成数组元素的逆置
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	
//	//init(arr, sz);
//	//print(arr, sz);
//	reverse(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


