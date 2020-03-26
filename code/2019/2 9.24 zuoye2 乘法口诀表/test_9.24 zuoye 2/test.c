#define _CRT_SECURE_NO_WARNINGS 1

//乘法口诀表

#include <stdio.h>

int main()
{
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9

int i=0;
for(i=1;i<=9;i++)//行
	{
		//打印一行
		int j=0;
		for(j=1;j<=i;j++)//列
		{
			printf("%d*%d=%-2d",i,j,i*j);//左对齐为-2d；右对齐为2d（左补零）
		}
		printf("\n");
	}
return 0;
}
