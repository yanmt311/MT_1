#define _CRT_SECURE_NO_WARNINGS 1

//求两个数二进制中不同位的个数
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :1999 2299  结果为：7

//方法1：获取二进制数，进行一一对比，若不同count++ ---该算法效率低
//方法2：利用异或 --- 不同为1 
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	printf("请输入两个数：");
	scanf("%d%d", &n, &m);
	int temp = n^m; //异或后一个整体
	int count = 0;
	while (temp)
	{
		temp = temp&(temp - 1);//相邻位比较，为1则循环，为0输出 ---类似统计个数的优化方案
		count++;
	}
	printf("%d\n", count);
	return 0;
}

//方法二：
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &n, &m);
//	int count = 0;
//	unsigned int num = m^n;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}