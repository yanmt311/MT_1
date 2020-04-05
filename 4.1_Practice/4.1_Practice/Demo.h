#define _CRT_SECURE_NO_WARNINGS 1
//case1:使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int *p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}


//字符串逆序--写一个函数，可以逆序一个字符串的内容。
//#include <stdio.h>
//#include <string.h>
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	char tmp = 0;
//
//	while (left<right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = {0};
//	//scanf("%s", arr);
//	gets(arr);
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

//计算求和
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222
#include <stdio.h>
#include <string.h>
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int ret = 0;//存储计算好的每一项
	scanf("%d%d", &a, &n);

	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}
//打印水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include <math.h>
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int sum = 0;
		int count = 1;
		//判断i是否为“水仙花数”
		//1. 计算i的位数
		int tmp = i;
		while (tmp/=10)
		{
			count++;
		}
		//2. 得到i的每一位，计算每一位的位数次方和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		//3. 判断
		if (sum == i)
		{
			printf("%d ", i);
		}
	}

	return 0;
}

//打印菱形
int main()
{
	int line = 0;
	scanf("%d", &line);//7
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line-1; i++)
	{
		int j = 0;
		for (j = 0; j<=i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}