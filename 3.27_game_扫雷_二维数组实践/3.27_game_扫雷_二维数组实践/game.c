#define _CRT_SECURE_NO_WARNINGS 1
//game 函数中---各个模块
#include <stdio.h>
#include "game.h"


//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, int set)//board[ROWS][COLS]---一般不同
{
	//打印二维数组
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;//为了同时初始化两个棋盘//board[i][j]---要和board[ROWS][COLS]函数名一致
		}
	}
}


//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	//打印所有行之前，打印一行
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//打印每一行
	for (i = 1; i <= row; i++)//为了打印时显示的棋盘--所以从1-9，而不是0-9
	{
		printf("%d ", i);//打印每一行时，打印行标

		//打印一行
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//注意：%c---打印字符
		}
		printf("\n");//一行打印完进行换行，进行第二行的打印--更好的构成棋盘
	}
}

//布置雷
//思想--1、没有布置雷之前--棋盘为'0'
//      2、布置雷之后---棋盘变为'1',并且count--
//      3、为了更好的修改布置的雷的个数，在game.h中进行声明#define SetMine_Count 10
//      4、随机产生雷---使用rand函数---包含Srand函数---time函数的使用，并且Srand只能调用一次
//      5、棋盘的范围 若行为1-9，则rand（）%row+1 ---为（1-8）+1 ---即为1-9 ---任何数除以9的余数为0-8
//                   若列为1-9，则rand（）%col+1 ---为（1-8）+1 ---即为1-9 ---任何数除以9的余数为0-8  
//      6、srand( (unsigned)time( NULL ) );

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = SetMine_Count;
	while (count)//当count不为0，就一直进行布雷，每布置一次，count--
	{
		//产生随即坐标---使用之前调用一次srand函数
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] = '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//排查雷中统计雷的个数---周围坐标依次相加
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

//排查雷
//思想：1、输入坐标，若输入的坐标不在棋盘范围内，坐标输入错误；
//        若在棋盘范围内，判断坐标是否为'1' --则有雷，炸死了
//                      若不为'1' --则无雷，统计mine中雷的个数对应于show中，进行下一步判断
//     2、show[x][y] = count + '0' ---将将统计的雷的个数加上'0'==相应数字的ASCII值 ----'0'是48，'1'是49---数字1--------对应在相应的show棋盘坐标上
//     3、统计雷的个数 int count = GetMineCount(mine, x, y);---周围坐标依次相加
//     4、满足循环的条件是win<row*col - SetMine_Count --9*9-SetMine_Count = 71---只有将所有的雷查找完--即排雷成功
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col - SetMine_Count)//9*9-SetMine_Count = 71---只有将所有的雷查找完--即排雷成功
	{
		//输入坐标
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);

		//判断输入的坐标是否在棋盘范围内
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断坐标---如果坐标为'1'---有雷，炸死了--跳出循环
			if (mine[x][y] == '1')
			{
				printf("被炸死了\n");
				DisplayBoard(mine, row, col);//炸死后展示布雷的棋盘
				break;
			}
			else
			{
				//如果没有雷，统计坐标周围雷的个数---对应在相应的show棋盘坐标上
				int count = GetMineCount(mine, x, y);//统计雷的个数函数
				show[x][y] = count + '0';//将统计的雷的个数加上'0'==相应数字的ASCII值 ----'0'是48，'1'是49---数字1--------对应在相应的show棋盘坐标上
				DisplayBoard(show, row, col);//展示show棋盘---进行排雷
				win++;
			}
		}
		else
		{
			printf("坐标有误，重新输入！\n");
		}
	}
	if (win == row*col - SetMine_Count)//win >= row*col - SetMine_Count---但是依次增加的，先有等于才有>=
	{
		printf("排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}
