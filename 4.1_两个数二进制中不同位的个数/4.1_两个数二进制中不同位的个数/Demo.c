#define _CRT_SECURE_NO_WARNINGS 1

//���������������в�ͬλ�ĸ���
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :1999 2299  ���Ϊ��7

//����1����ȡ��������������һһ�Աȣ�����ͬcount++ ---���㷨Ч�ʵ�
//����2��������� --- ��ͬΪ1 
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	printf("��������������");
	scanf("%d%d", &n, &m);
	int temp = n^m; //����һ������
	int count = 0;
	while (temp)
	{
		temp = temp&(temp - 1);//����λ�Ƚϣ�Ϊ1��ѭ����Ϊ0��� ---����ͳ�Ƹ������Ż�����
		count++;
	}
	printf("%d\n", count);
	return 0;
}

//��������
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("��������������");
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