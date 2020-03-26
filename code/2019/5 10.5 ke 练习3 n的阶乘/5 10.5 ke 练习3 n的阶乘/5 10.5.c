#define _CRT_SECURE_NO_WARNINGS 1


//求n的阶乘
#include<stdio.h>
int main ()
{
	int i = 0;
	int n = 0;
	int ret = 1;//阶乘从1开始
	scanf("%d",&n);//输入一个n的数

	for(i=1; i<=n; i++)
	{
		ret=ret*i;
	}
	printf("ret =%d!= %d\n",n,ret);
	return 0;
}