#define _CRT_SECURE_NO_WARNINGS 1


//程序 计算1-10 的阶乘相加 
//#include<stdio.h>
//int main ()
//{
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//
//	for(j=1; j<=10; j++)
//	{
//		ret=1;//若不赋初值，则每次ret是在上次ret 的基础上在想乘
//		for(i=1; i<=j; i++)
//		{
//			ret = ret*i;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}


//每次都要从1相乘，直接在上次的基础上乘以这次的数即可


//程序2 优化
#include<stdio.h>
int main ()
{
	int ret = 1;
	int j = 0;
	int sum = 0;

	for(j=1; j<=3; j++)
	{
		ret = ret*j;//在上次的基础上乘j
		sum += ret;
	}
	printf("sum = %d\n",sum);
	return 0;
}