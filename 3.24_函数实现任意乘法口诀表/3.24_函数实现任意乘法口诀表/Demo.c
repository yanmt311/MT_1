#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//����һ��
//��ӡ9*9�˷��ھ���
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	//���δ�ӡ9��
//	for (line = 1; line <= 9; line++)
//	{
//		int row = 0;
//		//��ӡһ��
//		for (row = 1; row <= line; row++)
//		{
//			printf("%d*%d=%-2d\t", row,line,row*line);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ӡ����˷��ھ���
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("������˷��ھ���Ľ�����");
//	scanf("%d", &input);
//	int line = 0;
//	//���δ�ӡ����
//	for (line = 1; line <= input; line++)
//	{
//		int row = 0;
//		//��ӡһ��
//		for (row = 1; row <= line; row++)
//		{
//			printf("%d*%d=%-5d\t", row, line, row*line);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//������������ʵ��
#include <stdio.h>
void Multiplication_table(int input)
{
	int line = 0;
	//���δ�ӡ����
	for (line = 1; line <= input; line++)
	{
		int row = 0;
		//��ӡһ��
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
	printf("������˷��ھ���Ľ�����");
	scanf("%d", &input);
	Multiplication_table(input);
	return 0;
}