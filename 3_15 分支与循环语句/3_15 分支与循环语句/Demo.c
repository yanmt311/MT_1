#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//���1-100֮�������
//˼·������1-100����������ж�ÿ�����Ƿ�Ϊ����

//int main()
//{
//	int i = 1;
//	for (i; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%3d",i);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%3d", i);
//		}
//		i++;
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%3d", i);
//		i = i + 2;
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("��������������");
//	scanf("%d%d%d\n", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("a = %d,b = %d,c = %d\n", a, b, c);
//	return 0;
//}

//�������Ӻ�С����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d\t%d\t%d\t\n", a, b, c);
//
//	//��������̶���a��b��c
//	//int a=2;
//	//int b=3;
//	//int c=5;
//
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;//���������Ĵ���a��
//	}
//
//	if (a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;//���������ֵ�浽a��
//	}
//
//	if (b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;//���������ֵ�浽b��
//	}
//	printf("%d %d %d", a, b, c);//ע��a�����ֵ��b��ϴ�ֵ��c����Сֵ
//	return 0;
//}
//

//дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%4d", i);
//		}
//		i++;
//	}
//	printf("\n");
//	return 0;
//}


// ���������������������������Լ��

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = 0;
//	while (b%a != 0)
//	{
//		c = b%a;
//		a = c;
//		b = a;
//	}
//	printf("%d = %d*%d\%d", d, a, c,b);
//	return 0;
//}

////��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 1000;
//	while (year >= 1000 && year <= 2000)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%5d", year);
//			
//		}
//		year++;
//	}
//	printf("\n");
//	return 0;
//}

//��ӡ100~200֮�������
int main()
{
	int a = 0;
	int b = 0;
	for (a = 100; a <= 200; a++)
	{
		for (b = 2; b<a; b++)
		{
			if (a%b == 0)
				break;
		}
		if (b >= a)
		{
			printf("%d\n", a);
		}
	}
	return 0;
} 
