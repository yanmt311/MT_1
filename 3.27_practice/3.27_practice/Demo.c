#define _CRT_SECURE_NO_WARNINGS 1

//case1：实现一个对整形数组的冒泡排序
//分析：1、冒泡排序：两两相邻的元素比较
//     2、第一趟冒泡排序 ---确定最大数
//        10，9，8，7，6，5，4，3，2，1
//        9，10，8，7，6，5，4，3，2，1
//        9，8，10，7，6，5，4，3，2，1
//        ....
//        9，8，7，6，5，4，3，2，1，10
//        
//      若元素个数为10---趟数--9次
//      第一趟对比9次，第二趟8次，第三趟7次...
//     3、数组传参一定传数组元素的大小


//方法1:一般方法
//void BubbleSort(int arr[],int sz)//int arr[]----int* arr----数组首元素的地址
//{
//	//冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{ 
//			//冒泡排序的实现
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
////打印数组
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
//	//创建一个逆数组
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//
//	//计算数组元素个数的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//只能将其写入主函数中，数组传参传过去的是数组首元素的指针，所以int sz = sizeof(arr) / sizeof(arr[0])在函数内部为1，sizeof(arr)为首元素地址，再32位中4个字节
//
//	//创建打印数组函数
//	PrintfArr(arr, sz);
//
//	//创建一个冒泡排序函数---将数组arr排成升序
//	BubbleSort(arr,sz);
//
//	//创建打印数组函数
//	PrintfArr(arr, sz);
//	return 0;
//}
//
////方法2：冒泡排序优化---对于有序数组的优化
//void BubbleSort(int arr[], int sz)//int arr[]----int* arr----数组首元素的地址
//{
//	//冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//冒泡排序的实现
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)//第一趟冒泡排序完，发现两两元素没有交换过，则为有序数组
//		{
//			break;
//		}
//	}
//}
//
////打印数组
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
//	//创建一个逆数组
//	//int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//计算数组元素个数的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//只能将其写入主函数中，数组传参传过去的是数组首元素的指针，所以int sz = sizeof(arr) / sizeof(arr[0])在函数内部为1，sizeof(arr)为首元素地址，再32位中4个字节
//
//	//创建打印数组函数
//	PrintfArr(arr, sz);
//
//	//创建一个冒泡排序函数---将数组arr排成升序
//	BubbleSort(arr, sz);
//
//	//创建打印数组函数
//	PrintfArr(arr, sz);
//	return 0;
//}


//知识点：针对数组名---数组传参
//       注意：1、sizeof(arr) --- sizeof(数组名) -  数组名表示整个数组，--计算的是整个、数组的大小，单位为字节
//            2、&arr ---&数组名 - 数组名表示整个数组，--取出的是整个数组的首地址。
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	printf("%p\n", arr); //首元素地址---32位-4个字节  64位-8个字节
//	printf("%p\n", &arr[0]);//元素的地址
//	printf("%p\n", &arr);//整个数组的地址---只打印首元素地址
//
//	printf("%p\n", arr+1); //首元素地址---32位-4个字节  64位-8个字节
//	printf("%p\n", &arr[0]+1);//元素的地址
//	printf("%p\n", &arr+1);//整个数组的地址---只打印首元素地址
//
//	printf("%d\n", sizeof(arr));//整个数组的大小 ---10个元素*sizeof（int）= 40
//	printf("%d\n", sizeof(arr[0]));//数组元素的字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算数组元素的个数
//
//	return 0;
//}



//case2：创建一个整形数组，完成对数组的操作
//       实现函数init() 初始化数组为全0
//       实现print()  打印数组的每个元素
//       实现reverse()  函数完成数组元素的逆置。
//       要求：自己设计以上函数的参数，返回值。
//#include <stdio.h>
////初始化数组全为0
//void init(int arr2[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr2[i] = 0;
//      //arr[i] = i;//初始化数组为1-9
//	}
//}
//
////打印数组
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

//数组元素的逆置
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
//	//创建一个数组
//	int arr2[] = { 1,2,3,4,5,6,7,8,9};//意味着三行四列
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	printf("原数组：\n");
//	print(arr2,sz);
//
//	printf("逆置数组：\n");
//	reverse(arr2,sz);
//	print(arr2, sz);
//
//	printf("初始化数组：\n");
//	init(arr2, sz);
//	print(arr2, sz);
//	return 0;
//}

//case2.1---添加清空数组函数
//初始化数组
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//清空数组
//void Empty(int arr[], int sz)
//{
//	memset(arr, 0, sz*sizeof(arr[0]));
//}
//
//逆置数组
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
//打印数组
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
//	printf("原数组：\n");
//	Print(arr, sz);
//
//	Init(arr, sz);
//	printf("初始化数组：\n");
//	Print(arr, sz);
//
//	Reverse(arr, sz);
//	printf("逆序数组：\n");
//	Print(arr, sz);
//
//	Empty(arr, sz);
//	printf("清空数组：\n");
//	Print(arr, sz);
//	return 0;
//}

//case3：将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void Swap(int* arr1, int arr2[], int sz1, int sz2)
//{
//	int left1 = 0;
//	int right1 = sz1-1;
//	int left2 = 0;
//	int right2 = sz2 - 1;
//	while (left1 <= right1 && left2 <= right2)
//	{
//		//进行依次交换
//		int temp = arr1[left1];
//		arr1[left1] = arr2[left2];
//		arr2[left2] = temp;
//		left1++;
//		left2++;
//	}
//}
//
////打印数组
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
//	//创建两个数组
//	int arr1[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
//	int arr2[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
//	//计算数组元素个数
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	//打印原数组
//	printf("原数组：\n");
//	PrintArr(arr1, sz1);
//	PrintArr(arr2, sz2);
//
//	//交换数组元素
//	Swap(arr1, arr2, sz1, sz2);
//	//打印交换后的数组
//	printf("交换后的数组：\n");
//	PrintArr(arr1, sz1);
//	PrintArr(arr2, sz2);
//	return 0;
//}


//case4：完成扫雷游戏代码。
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