#define _CRT_SECURE_NO_WARNINGS 1


//���� ����1-10 �Ľ׳���� 
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
//		ret=1;//��������ֵ����ÿ��ret�����ϴ�ret �Ļ����������
//		for(i=1; i<=j; i++)
//		{
//			ret = ret*i;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}


//ÿ�ζ�Ҫ��1��ˣ�ֱ�����ϴεĻ����ϳ�����ε�������


//����2 �Ż�
#include<stdio.h>
int main ()
{
	int ret = 1;
	int j = 0;
	int sum = 0;

	for(j=1; j<=3; j++)
	{
		ret = ret*j;//���ϴεĻ����ϳ�j
		sum += ret;
	}
	printf("sum = %d\n",sum);
	return 0;
}