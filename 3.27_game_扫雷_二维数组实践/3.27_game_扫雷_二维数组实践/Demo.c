#define _CRT_SECURE_NO_WARNINGS 1
//���ɨ����Ϸ����

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