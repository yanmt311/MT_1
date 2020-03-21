#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//生成1-100数
//	for (i = 1; i <= 100; i++)
//	{
//		//判断出现9的数
//		//个位数是9
//		//十位是9
//		if (i%10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else
//		{
//			if (i / 10 == 9)
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	//分析：分母依次增加，分子恒为1，并且偶数、奇数符号异号
//	int i = 0;
//	double sum = 0;
//	//int sign = 1;
//	//int ret = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		/*ret = ret + sign*(1/i);
//		sign = -sign;
//		sum = sum + ret;*/
//		if (1 == i % 2)
//		{
//			sum += 1.0 / i;
//		}
//		if (0 == i % 2)
//		{
//			sum += -1.0 / i;
//		}
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//求10 个整数中最大值
//int main()
//{
//	int j = 0;
//	int i = 0;
//	int max = 0;
//	//int arr[] = {11,34,2,78,9,47,23,88,76,98};
//	int arr[10];
//	printf("请输入10个数：>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
int main()
{
	//1*1 = 1
	//1*2 = 2  2*2 = 4 与行数有关
	//1*3 = 3  2*3 = 6  3*3 =9
	int i = 0;
	int j = 0;
	int a = 0;
	//打印九行
	for (i = 1; i < 10; i++)
	{
		//行的个数与行有关
		for (j = 1; j <= i; j++)
		{
			a = i*j;
			printf("%d*%d = %d ", j, i,a);
		}
		printf("\n");
	}	
	return 0;
}