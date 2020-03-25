#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//方法一：
//打印9*9乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	//依次打印9行
//	for (line = 1; line <= 9; line++)
//	{
//		int row = 0;
//		//打印一行
//		for (row = 1; row <= line; row++)
//		{
//			printf("%d*%d=%-2d\t", row,line,row*line);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印任意乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("请输入乘法口决表的阶数：");
//	scanf("%d", &input);
//	int line = 0;
//	//依次打印行数
//	for (line = 1; line <= input; line++)
//	{
//		int row = 0;
//		//打印一行
//		for (row = 1; row <= line; row++)
//		{
//			printf("%d*%d=%-5d\t", row, line, row*line);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//方法二：函数实现
#include <stdio.h>
void Multiplication_table(int input)
{
	int line = 0;
	//依次打印行数
	for (line = 1; line <= input; line++)
	{
		int row = 0;
		//打印一行
		for (row = 1; row <= line; row++)
		{
			printf("%d*%d=%-5d\t", row, line, row*line);
		}
		printf("\n");
	}
}
int main()
{
	int input = 0;
	printf("请输入乘法口决表的阶数：");
	scanf("%d", &input);
	Multiplication_table(input);
	return 0;
}