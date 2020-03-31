#define _CRT_SECURE_NO_WARNINGS 1

//2---有疑问
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//3--有问题
//#include <stdio.h>
//int i;
//int main()
//{
//	i--;//-1
//	if (i > sizeof(i))//sizeof(i)---4
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//4
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6 a=6
//	// ++a：加给a+1，结果为6，用加完之后的结果给c赋值，因此：a = 6  c = 6
//
//	b = ++c, c++, ++a, a++;//c=7 b =7; b=7 c=8 ;b=6,a=7;b=7,a=8
//	//++c：c为7 c++：c值不变 ++a：a的值为7，a++：a值不变，b取a的值：7
//	// 表达式结束时，c++和a++会给a和c分别加1，此时c：8，a：8，b:7
//
//	b += a++ + c;//b=b+ a++ +c----7+8+8 =23 a=9
//	// a先和c加，结果为16，在加上b的值7，比的结果为23，最后给a加1，a的值为9
//
//	printf("a = %d b = %d c = %d\n:", a, b, c);//9 23 8
//	return 0;
//}


//6
//求两个数二进制中不同位的个数
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？输入例子 :1999 2299  输出例子 : 7

//分析：二进制中不同位的个数---用异或 不同为1  相同为 0
//方法一：error
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		while ((m^n)%2 == 1)
//		{
//			count++;
//			m = m << i;
//			n = n << i;
//		}
//	}
//	printf("%d \n", count);
//	return 0;
//}

//方法2：okay
//#include <stdio.h>
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int num = 0;
//	int count = 0;
//	num = m^n;
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

//7
//打印整数二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//分析：取奇数---1-31
//     取偶数---0-30
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);//10---00000000000000000000000000001010
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)`/,n
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//8
//统计二进制中1的个数
//写一个函数返回参数二进制中 1 的个数。比如： 15    0000 1111    4 个 1
//分析：二进制中1的个数---与1相与，若为1 ，则count++； 再左移<<1
//#include <stdio.h>
//int BinaryReturn(int x)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) == 1)
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = BinaryReturn(n);
//	printf("%d\n", ret);
//	return 0;
//}

//9
//交换两个变量（不创建临时变量）--不允许创建临时变量，交换两个整数的内容
#include <stdio.h>
void swap(int* x, int* y)
{
	*x = *x^*y;
	*y = *x^*y;
	*x = *x^*y;
}
int main()
{
	int n = 13;
	int m = 11;
	printf("n = %d m=%d\n", n, m);
	swap(&n, &m);
	printf("n = %d m=%d\n", n, m);
	return 0;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}