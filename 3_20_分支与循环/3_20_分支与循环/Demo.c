#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//����1-100��
//	for (i = 1; i <= 100; i++)
//	{
//		//�жϳ���9����
//		//��λ����9
//		//ʮλ��9
//		if (i%10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else
//		{
//			if (i / 10 == 9)
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	//��������ĸ�������ӣ����Ӻ�Ϊ1������ż���������������
//	int i = 0;
//	double sum = 0;
//	//int sign = 1;
//	//int ret = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		/*ret = ret + sign*(1/i);
//		sign = -sign;
//		sum = sum + ret;*/
//		if (1 == i % 2)
//		{
//			sum += 1.0 / i;
//		}
//		if (0 == i % 2)
//		{
//			sum += -1.0 / i;
//		}
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//��10 �����������ֵ
//int main()
//{
//	int j = 0;
//	int i = 0;
//	int max = 0;
//	//int arr[] = {11,34,2,78,9,47,23,88,76,98};
//	int arr[10];
//	printf("������10������>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
int main()
{
	//1*1 = 1
	//1*2 = 2  2*2 = 4 �������й�
	//1*3 = 3  2*3 = 6  3*3 =9
	int i = 0;
	int j = 0;
	int a = 0;
	//��ӡ����
	for (i = 1; i < 10; i++)
	{
		//�еĸ��������й�
		for (j = 1; j <= i; j++)
		{
			a = i*j;
			printf("%d*%d = %d ", j, i,a);
		}
		printf("\n");
	}	
	return 0;
}