#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数，打印乘法口诀表 输入9是9*9乘法口诀表，输入12是12*12乘法口诀表


#include <stdio.h>

void printf_table (int n)
{
	int i = 0;
	//控制多少行
	for(i=1; i<=n; i++)//n代表行数
	{
		int j = 0;
		//控制每一行
		for(j=1; j<=i; j++)//i代表每一行
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}

}

int main()
{
	int line = 0;
	scanf("%d",&line);//输入行来确定行
	printf_table(line);//打印乘法口诀表函数
	return 0;
}