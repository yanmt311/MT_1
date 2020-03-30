#define _CRT_SECURE_NO_WARNINGS 1
//game ������---����ģ��
#include <stdio.h>
#include "game.h"


//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, int set)//board[ROWS][COLS]---һ�㲻ͬ
{
	//��ӡ��ά����
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;//Ϊ��ͬʱ��ʼ����������//board[i][j]---Ҫ��board[ROWS][COLS]������һ��
		}
	}
}


//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	//��ӡ������֮ǰ����ӡһ��
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//��ӡÿһ��
	for (i = 1; i <= row; i++)//Ϊ�˴�ӡʱ��ʾ������--���Դ�1-9��������0-9
	{
		printf("%d ", i);//��ӡÿһ��ʱ����ӡ�б�

		//��ӡһ��
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//ע�⣺%c---��ӡ�ַ�
		}
		printf("\n");//һ�д�ӡ����л��У����еڶ��еĴ�ӡ--���õĹ�������
	}
}

//������
//˼��--1��û�в�����֮ǰ--����Ϊ'0'
//      2��������֮��---���̱�Ϊ'1',����count--
//      3��Ϊ�˸��õ��޸Ĳ��õ��׵ĸ�������game.h�н�������#define SetMine_Count 10
//      4�����������---ʹ��rand����---����Srand����---time������ʹ�ã�����Srandֻ�ܵ���һ��
//      5�����̵ķ�Χ ����Ϊ1-9����rand����%row+1 ---Ϊ��1-8��+1 ---��Ϊ1-9 ---�κ�������9������Ϊ0-8
//                   ����Ϊ1-9����rand����%col+1 ---Ϊ��1-8��+1 ---��Ϊ1-9 ---�κ�������9������Ϊ0-8  
//      6��srand( (unsigned)time( NULL ) );

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = SetMine_Count;
	while (count)//��count��Ϊ0����һֱ���в��ף�ÿ����һ�Σ�count--
	{
		//�����漴����---ʹ��֮ǰ����һ��srand����
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] = '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//�Ų�����ͳ���׵ĸ���---��Χ�����������
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');
}

//�Ų���
//˼�룺1���������꣬����������겻�����̷�Χ�ڣ������������
//        �������̷�Χ�ڣ��ж������Ƿ�Ϊ'1' --�����ף�ը����
//                      ����Ϊ'1' --�����ף�ͳ��mine���׵ĸ�����Ӧ��show�У�������һ���ж�
//     2��show[x][y] = count + '0' ---����ͳ�Ƶ��׵ĸ�������'0'==��Ӧ���ֵ�ASCIIֵ ----'0'��48��'1'��49---����1--------��Ӧ����Ӧ��show����������
//     3��ͳ���׵ĸ��� int count = GetMineCount(mine, x, y);---��Χ�����������
//     4������ѭ����������win<row*col - SetMine_Count --9*9-SetMine_Count = 71---ֻ�н����е��ײ�����--�����׳ɹ�
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col - SetMine_Count)//9*9-SetMine_Count = 71---ֻ�н����е��ײ�����--�����׳ɹ�
	{
		//��������
		printf("���������꣺");
		scanf("%d%d", &x, &y);

		//�ж�����������Ƿ������̷�Χ��
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж�����---�������Ϊ'1'---���ף�ը����--����ѭ��
			if (mine[x][y] == '1')
			{
				printf("��ը����\n");
				DisplayBoard(mine, row, col);//ը����չʾ���׵�����
				break;
			}
			else
			{
				//���û���ף�ͳ��������Χ�׵ĸ���---��Ӧ����Ӧ��show����������
				int count = GetMineCount(mine, x, y);//ͳ���׵ĸ�������
				show[x][y] = count + '0';//��ͳ�Ƶ��׵ĸ�������'0'==��Ӧ���ֵ�ASCIIֵ ----'0'��48��'1'��49---����1--------��Ӧ����Ӧ��show����������
				DisplayBoard(show, row, col);//չʾshow����---��������
				win++;
			}
		}
		else
		{
			printf("���������������룡\n");
		}
	}
	if (win == row*col - SetMine_Count)//win >= row*col - SetMine_Count---�����������ӵģ����е��ڲ���>=
	{
		printf("���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}
