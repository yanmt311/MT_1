#define _CRT_SECURE_NO_WARNINGS 1

//2---������
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//3--������
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
//	// ++a���Ӹ�a+1�����Ϊ6���ü���֮��Ľ����c��ֵ����ˣ�a = 6  c = 6
//
//	b = ++c, c++, ++a, a++;//c=7 b =7; b=7 c=8 ;b=6,a=7;b=7,a=8
//	//++c��cΪ7 c++��cֵ���� ++a��a��ֵΪ7��a++��aֵ���䣬bȡa��ֵ��7
//	// ���ʽ����ʱ��c++��a++���a��c�ֱ��1����ʱc��8��a��8��b:7
//
//	b += a++ + c;//b=b+ a++ +c----7+8+8 =23 a=9
//	// a�Ⱥ�c�ӣ����Ϊ16���ڼ���b��ֵ7���ȵĽ��Ϊ23������a��1��a��ֵΪ9
//
//	printf("a = %d b = %d c = %d\n:", a, b, c);//9 23 8
//	return 0;
//}


//6
//���������������в�ͬλ�ĸ���
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ���������� :1999 2299  ������� : 7

//�������������в�ͬλ�ĸ���---����� ��ͬΪ1  ��ͬΪ 0
//����һ��error
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

//����2��okay
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
//��ӡ���������Ƶ�����λ��ż��λ
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//������ȡ����---1-31
//     ȡż��---0-30
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
//ͳ�ƶ�������1�ĸ���
//дһ���������ز����������� 1 �ĸ��������磺 15    0000 1111    4 �� 1
//��������������1�ĸ���---��1���룬��Ϊ1 ����count++�� ������<<1
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
//����������������������ʱ������--����������ʱ������������������������
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