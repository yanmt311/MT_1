#define _CRT_SECURE_NO_WARNINGS 1

//case1��ʵ��һ�������������ð������
//������1��ð�������������ڵ�Ԫ�رȽ�
//     2����һ��ð������ ---ȷ�������
//        10��9��8��7��6��5��4��3��2��1
//        9��10��8��7��6��5��4��3��2��1
//        9��8��10��7��6��5��4��3��2��1
//        ....
//        9��8��7��6��5��4��3��2��1��10
//        
//      ��Ԫ�ظ���Ϊ10---����--9��
//      ��һ�˶Ա�9�Σ��ڶ���8�Σ�������7��...
//     3�����鴫��һ��������Ԫ�صĴ�С


//����1:һ�㷽��
//void BubbleSort(int arr[],int sz)//int arr[]----int* arr----������Ԫ�صĵ�ַ
//{
//	//ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{ 
//			//ð�������ʵ��
//			if (arr[j]>arr[j + 1])
//			{ 
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////��ӡ����
//void PrintfArr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//����һ��������
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//
//	//��������Ԫ�ظ����Ĵ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);//ֻ�ܽ���д���������У����鴫�δ���ȥ����������Ԫ�ص�ָ�룬����int sz = sizeof(arr) / sizeof(arr[0])�ں����ڲ�Ϊ1��sizeof(arr)Ϊ��Ԫ�ص�ַ����32λ��4���ֽ�
//
//	//������ӡ���麯��
//	PrintfArr(arr, sz);
//
//	//����һ��ð��������---������arr�ų�����
//	BubbleSort(arr,sz);
//
//	//������ӡ���麯��
//	PrintfArr(arr, sz);
//	return 0;
//}
//
////����2��ð�������Ż�---��������������Ż�
//void BubbleSort(int arr[], int sz)//int arr[]----int* arr----������Ԫ�صĵ�ַ
//{
//	//ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//ð�������ʵ��
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)//��һ��ð�������꣬��������Ԫ��û�н���������Ϊ��������
//		{
//			break;
//		}
//	}
//}
//
////��ӡ����
//void PrintfArr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//����һ��������
//	//int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//��������Ԫ�ظ����Ĵ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);//ֻ�ܽ���д���������У����鴫�δ���ȥ����������Ԫ�ص�ָ�룬����int sz = sizeof(arr) / sizeof(arr[0])�ں����ڲ�Ϊ1��sizeof(arr)Ϊ��Ԫ�ص�ַ����32λ��4���ֽ�
//
//	//������ӡ���麯��
//	PrintfArr(arr, sz);
//
//	//����һ��ð��������---������arr�ų�����
//	BubbleSort(arr, sz);
//
//	//������ӡ���麯��
//	PrintfArr(arr, sz);
//	return 0;
//}


//֪ʶ�㣺���������---���鴫��
//       ע�⣺1��sizeof(arr) --- sizeof(������) -  ��������ʾ�������飬--�����������������Ĵ�С����λΪ�ֽ�
//            2��&arr ---&������ - ��������ʾ�������飬--ȡ����������������׵�ַ��
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	printf("%p\n", arr); //��Ԫ�ص�ַ---32λ-4���ֽ�  64λ-8���ֽ�
//	printf("%p\n", &arr[0]);//Ԫ�صĵ�ַ
//	printf("%p\n", &arr);//��������ĵ�ַ---ֻ��ӡ��Ԫ�ص�ַ
//
//	printf("%p\n", arr+1); //��Ԫ�ص�ַ---32λ-4���ֽ�  64λ-8���ֽ�
//	printf("%p\n", &arr[0]+1);//Ԫ�صĵ�ַ
//	printf("%p\n", &arr+1);//��������ĵ�ַ---ֻ��ӡ��Ԫ�ص�ַ
//
//	printf("%d\n", sizeof(arr));//��������Ĵ�С ---10��Ԫ��*sizeof��int��= 40
//	printf("%d\n", sizeof(arr[0]));//����Ԫ�ص��ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//��������Ԫ�صĸ���
//
//	return 0;
//}



//case2������һ���������飬��ɶ�����Ĳ���
//       ʵ�ֺ���init() ��ʼ������Ϊȫ0
//       ʵ��print()  ��ӡ�����ÿ��Ԫ��
//       ʵ��reverse()  �����������Ԫ�ص����á�
//       Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#include <stdio.h>
////��ʼ������ȫΪ0
//void init(int arr2[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr2[i] = 0;
//      //arr[i] = i;//��ʼ������Ϊ1-9
//	}
//}
//
////��ӡ����
//void print(int arr2[],int sz)
//{
//	
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//}

//����Ԫ�ص�����
//void reverse(int arr2[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	if (left < right)
//	{
//		int tmp = arr2[left];
//		arr2[left] = arr2[right];
//		arr2[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	//����һ������
//	int arr2[] = { 1,2,3,4,5,6,7,8,9};//��ζ����������
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	printf("ԭ���飺\n");
//	print(arr2,sz);
//
//	printf("�������飺\n");
//	reverse(arr2,sz);
//	print(arr2, sz);
//
//	printf("��ʼ�����飺\n");
//	init(arr2, sz);
//	print(arr2, sz);
//	return 0;
//}

//case2.1---���������麯��
//��ʼ������
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//�������
//void Empty(int arr[], int sz)
//{
//	memset(arr, 0, sz*sizeof(arr[0]));
//}
//
//��������
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//��ӡ����
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	int i = 0;
//	printf("ԭ���飺\n");
//	Print(arr, sz);
//
//	Init(arr, sz);
//	printf("��ʼ�����飺\n");
//	Print(arr, sz);
//
//	Reverse(arr, sz);
//	printf("�������飺\n");
//	Print(arr, sz);
//
//	Empty(arr, sz);
//	printf("������飺\n");
//	Print(arr, sz);
//	return 0;
//}

//case3��������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void Swap(int* arr1, int arr2[], int sz1, int sz2)
//{
//	int left1 = 0;
//	int right1 = sz1-1;
//	int left2 = 0;
//	int right2 = sz2 - 1;
//	while (left1 <= right1 && left2 <= right2)
//	{
//		//�������ν���
//		int temp = arr1[left1];
//		arr1[left1] = arr2[left2];
//		arr2[left2] = temp;
//		left1++;
//		left2++;
//	}
//}
//
////��ӡ����
//void PrintArr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//������������
//	int arr1[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
//	int arr2[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
//	//��������Ԫ�ظ���
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	//��ӡԭ����
//	printf("ԭ���飺\n");
//	PrintArr(arr1, sz1);
//	PrintArr(arr2, sz2);
//
//	//��������Ԫ��
//	Swap(arr1, arr2, sz1, sz2);
//	//��ӡ�����������
//	printf("����������飺\n");
//	PrintArr(arr1, sz1);
//	PrintArr(arr2, sz2);
//	return 0;
//}


//case4�����ɨ����Ϸ���롣
//������1��ɨ����Ϸ����������ͬ����---һ����Ų��úõ��׵���Ϣ(0�������ף�1��������),һ������Ų���׵���Ϣ��*����û���Ų飬���ִ�����Χ�˸��������׵ĸ��� ---����1����Χ�˸���һ�����ף�
//       ע�⣺�����ö�ά���鴴��---����9*9����---��������ʹ��char���͸���һ��---��Ϊ*Ϊ�ַ� ������'0','1'Ҳ���ַ���ʾ
//     2����������ʱ����Χ�İ˸����꣬��Щ������Խ��---�������¸���һ�м����У����Ҹ��и���һ�м����С�
//     3����ά���鴫�� ������������---����ʱΪ��ά����
//       eg��InitBoard(mine, ROWS, COLS, '0');----------InitBoard(char board[ROWS][COLS], int rows, int cols, int set);
//     4��������У�����������ӡ�б���б�--Ϊ���û����õĽ���ѡ������
//     5��game.c �� Demo.c�ж�����game.hͷ�ļ�---���Խ�������ͷ�ļ�#include <stdio.h>  #include <stdlib.h>  #include <time.h>��д��game.h��
//     6��ͳ����������Χ�ĸ���--�ԣ�x,y��Ϊ����--�������
#include <stdio.h>
#include "game.h"
void game()
{
	//������������
	//��Ų��úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//'0'---����û���� //Ϊ�˷�����д�����޸�
	//����Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };//'*'---Ϊ��ʹ��Ϸ��������

	//����������ʼ������
	InitBoard(mine, ROWS, COLS, '0');//���ΰ�����������������С���---------Ϊ�˳�ʼ���������̣����ô������࣬����ʼ���Ĳ���Ҳ���ݹ�ȥ������game.h�н�������
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ���̽�����֤
	//DisplayBoard(mine, ROW, COL);//�����ϲ����ף����û���ʱʹ�õĶ���Ϊ9*9�����̣���������Ϊ ROW, COL
	//DisplayBoard(show, ROW, COL);

	//������---�õ�mine����--9*9
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//�Ų���---�����Ų���ʱ����Ҫ��mine�н����Ų飬��������Χ�ķ��������׵ĸ�����������show��Ӧ����������ʾ
	FindMine(mine, show, ROW, COL);
}

//ɨ�׵Ĳ��Թ���
void menu()
{
	printf("*************************\n");
	printf("****1  play   0  exit****\n");
	printf("*************************\n");
}

void Test()
{
	menu();
	int input = 0;//������ѭ��֮�⣬��ΪwhileҪ����input�����ж�
	do
	{
		srand((unsigned int)time(NULL));//����ֻ�ܵ���һ��

		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("����\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);//ʹ��do...while����---����Ҫѭ��һ��
}

int main()
{
	Test();
	return 0;
}