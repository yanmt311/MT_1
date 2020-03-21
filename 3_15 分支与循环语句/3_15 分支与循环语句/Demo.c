#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//输出1-100之间的奇数
//思路：产生1-100间的数，再判断每个数是否为奇数

//int main()
//{
//	int i = 1;
//	for (i; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%3d",i);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%3d", i);
//		}
//		i++;
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%3d", i);
//		i = i + 2;
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("请输入三个数：");
//	scanf("%d%d%d\n", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("a = %d,b = %d,c = %d\n", a, b, c);
//	return 0;
//}

//三个数从很小到大
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d\t%d\t%d\t\n", a, b, c);
//
//	//或者输入固定的a，b，c
//	//int a=2;
//	//int b=3;
//	//int c=5;
//
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;//将两者最大的存在a中
//	}
//
//	if (a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;//将两者最大值存到a中
//	}
//
//	if (b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;//将两者最大值存到b中
//	}
//	printf("%d %d %d", a, b, c);//注意a存最大值，b存较大值，c存最小值
//	return 0;
//}
//

//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%4d", i);
//		}
//		i++;
//	}
//	printf("\n");
//	return 0;
//}


// 给定两个数，求这两个数的最大公约数

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = 0;
//	while (b%a != 0)
//	{
//		c = b%a;
//		a = c;
//		b = a;
//	}
//	printf("%d = %d*%d\%d", d, a, c,b);
//	return 0;
//}

////打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 1000;
//	while (year >= 1000 && year <= 2000)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%5d", year);
//			
//		}
//		year++;
//	}
//	printf("\n");
//	return 0;
//}

//打印100~200之间的素数
int main()
{
	int a = 0;
	int b = 0;
	for (a = 100; a <= 200; a++)
	{
		for (b = 2; b<a; b++)
		{
			if (a%b == 0)
				break;
		}
		if (b >= a)
		{
			printf("%d\n", a);
		}
	}
	return 0;
} 
