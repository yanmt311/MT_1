#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//case1:n!
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//获得每个数的阶乘
//	//3! = 3*2!
//	int i = 0;
//	int ret = 1;//不能从0开始，0乘任何数为0
//	for (i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	printf("%d! = %d\n",num, ret);
//	return 0;
//}

//case2:1!+2!+3!+...+n!
//1!+2!+3! = 1+2+6 =9
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	int ret = 1;
	int j = 0;
	int sum = 0;
	//获得1-n的数
	for (j = 1; j <= num; j++)
	{
		//获得n！
		int ret = 1;//若不进行ret = 1 ---会出现每次ret的叠加 3!=15 ---第一次1，第二次1*2=2 第三次2*6=12
		for (i = 1; i <= j; i++)
		{
			
			ret *= i;
		}
		sum += ret;
	}
	
	printf("%d\n", sum);
	return 0;
}

//优化：