#define _CRT_SECURE_NO_WARNINGS 1
//完成扫雷游戏代码

//分析：1、扫雷游戏设置两个相同棋盘---一个存放布置好的雷的信息(0代表无雷，1代表有雷),一个存放排查出雷的信息（*代表没有排查，数字代表周围八个加起来雷的个数 ---比如1，周围八个有一个是雷）
//       注意：棋盘用二维数组创建---比如9*9棋盘---数组类型使用char类型更好一点---因为*为字符 ，所以'0','1'也用字符表示
//     2、访问坐标时，周围的八个坐标，有些坐标若越界---数组上下各多一行即两行，左右各列各多一列即两列。
//     3、二维数组传参 依旧是数组名---接受时为二维数组
//       eg：InitBoard(mine, ROWS, COLS, '0');----------InitBoard(char board[ROWS][COLS], int rows, int cols, int set);
//     4、多的左列，上行用来打印行标和列表--为了用户更好的进行选择坐标
//     5、game.c 和 Demo.c中都包含game.h头文件---所以将其他的头文件#include <stdio.h>  #include <stdlib.h>  #include <time.h>都写在game.h中
//     6、统计坐标雷周围的个数--以（x,y）为中心--依次相加

#include <stdio.h>
#include "game.h"
void game()
{
	//创建两个数组
	//存放布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//'0'---代表没有雷 //为了方便进行代码的修改
	//存放排查出雷的信息
	char show[ROWS][COLS] = { 0 };//'*'---为了使游戏保持神秘

	//创建函数初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//传参包含数组名，数组的行、列---------为了初始化两个棋盘，不让代码冗余，将初始化的参数也传递过去，并在game.h中进行声明
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘进行验证
	//DisplayBoard(mine, ROW, COL);//棋盘上布置雷，给用户看时使用的都是为9*9的棋盘，所以行列为 ROW, COL
	//DisplayBoard(show, ROW, COL);

	//布置雷---用的mine数组--9*9
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//排查雷---由于排查雷时，需要在mine中进行排查，将坐标周围的访问坐标雷的个数加起来在show对应的坐标中显示
	FindMine(mine, show, ROW, COL);
}

//扫雷的测试过程
void menu()
{
	printf("*************************\n");
	printf("****1  play   0  exit****\n");
	printf("*************************\n");
}

void Test()
{
	menu();
	int input = 0;//必须在循环之外，因为while要利用input进行判断
	do
	{
		srand((unsigned int)time(NULL));//有且只能调用一次

		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("踩雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);//使用do...while（）---至少要循环一次
}

int main()
{
	Test();
	return 0;
}