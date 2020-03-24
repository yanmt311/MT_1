#define _CRT_SECURE_NO_WARNINGS 1
//练习1：确定a的结果
//      注意理解循环中的break、continue作用
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}
//结果分析：
//第一次循环：a = 1，b = 1--->b小于20，if不成立，b % 3 == 1 % 3 == 1成立，b = b + 3, 此时b的值为4
//第二次循环：a = 2，b = 4--->b小于20，if不成立，b % 3 == 4 % 3 == 1成立，b = b + 3, 此时b的值为7
//第三次循环：a = 3，b = 7--->b小于20，if不成立，b % 3 == 7 % 3 == 1成立，b = b + 3, 此时b的值为10
//第四次循环：a = 4，b = 10--->b小于20，if不成立，b % 3 == 10 % 3 == 1成立，b = b + 3, 此时b的值为13
//第五次循环：a = 5，b = 13--->b小于20，if不成立，b % 3 == 13 % 3 == 1成立，b = b + 3, 此时b的值为16
//第六次循环：a = 6，b = 16--->b小于20，if不成立，b % 3 == 16 % 3 == 1成立，b = b + 3, 此时b的值为19
//第七次循环：a = 8，b = 22--->b大于20，if成立，循环break提出
//最后打印a：8


//练习2.1：数一下 1到 100 的所有整数中出现多少个数字9
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	//生成1-100的数
	for (i; i < 100; i++)
	{
		//个位含9
		if (i%10 == 9)
		{
			count++;
		}
		//十位含9
		if (i/10 == 9)
		{
			count++;
		}
	}
	printf("count = %d\n", count);
	return 0;
}
//结果分析：
//个位：9.19.29.39.49.59，69，79.89，99
//十位：90，91，92，93，94，95，96，97，98，99
//count = 20

//练习2.1：数含9的数的个数
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	//生成1-100的数
	for (i; i < 100; i++)
	{
		//个位含9
		if (i % 10 == 9)
		{
			count++;
		}
		//十位含9
		else if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count = %d\n", count);
	return 0;
}
//结果分析：
//个位：9.19.29.39.49.59，69，79.89，99
//十位：90，91，92，93，94，95，96，97，98，99
//十位、个位99重复----选择if...else ...
//count = 19


//练习3.1：计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//   注意除号/，两边的操作数都是整数，执行的是整数除法；只要有一个操作数为浮点数，执行的是浮点数除法
#include <stdio.h>
int main()
{
	//生成1-100的数
	int i = 0;
	double sum = 0;//注意浮点数的类型--float--double
	int flag = 1;
	for (i=1; i <= 100; i++)
	{
		sum += flag*(1.0 / i);
		flag = -flag;
	}
	printf("sum = %lf\n", sum);
	return 0;
}

//练习3.1:计算1/1+1/2+1/3+1/4+1/5 …… + 1/99 + 1/100 的值
#include <stdio.h>
int main()
{
	//生成1-100的数
	int i = 0;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += 1.0 / i;
	}
	printf("sum = %lf\n", sum);
	return 0;
}

//练习4：求10 个整数中最大值
//错误代码：----只满足正数的最大值的选择，如果里面全是负数，则最大值为0
#include <stdio.h>
int main()
{
	//生成随机的10个数----数组
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	printf("请输入十个数：>");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 1; i < 10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}
//分析结果：
//1 2 3 4 5 6 7 8 9 10  ----10
//-1 -2 -3 -4 -5 -6 -7 -8 -9 -10  ----0

//修改代码：
#include <stdio.h>
int main()
{
	//生成随机的10个数----数组
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	printf("请输入十个数：>");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//假定arr[0]是数组中最大的元素
	max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}


//练习5：在屏幕上输出9 * 9乘法口诀表
//分析：1*1=1
//     1*2=2 2*2=4
//     1*3=3 2*3=6 3*3=9
//     1*4=4 2*4=8 3*4=12 4*4=16

//列数可用行数决定
#include <stdio.h>
int main()
{
	int line = 0;
	for (line = 1; line <= 9; line++)
	{
		int row = 0;
		//打印一行
		for (row = 1; row <= line; row++)
		{
			printf("%d*%d=%-2d\t ", line, row, line*row);
		}
		printf("\n");
	}
	return 0;
}