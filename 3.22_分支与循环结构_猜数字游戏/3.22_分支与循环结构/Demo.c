#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
//猜数字游戏
//  1、利用do...while，switch...case...default,进行游戏逻辑的选择
//  2、进行猜数字游戏函数的代码块的编写  srand--rand---time的正确使用

//利用do...while，switch...case...default,进行游戏逻辑的选择
//void menu()
//{
//	printf("******************\n");
//	printf("**1 play,0 exit***\n");
//	printf("******************\n");
//}
//int main()
//{
//	int input = 0;
//	//由于游戏必须进入，肯定要执行一次，所以选择都 do...while（）循环
//	do
//	{
//		menu();//打印菜单---调用menu函数
//		printf("请选择一个数：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("猜数字\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//进行猜数字游戏函数的代码块的编写
//   1、电脑生成一个随机数
//   2、猜数字
//   3、rand产生随机数时引入头文件#include <stdlib.h>
//   4、srand产生随机数时引入头文件#include <stdlib.h>
//   5、time函数产生随机数时引入头文件#include <time.h>
void menu()
{
	printf("******************\n");
	printf("**1 play,0 exit***\n");
	printf("******************\n");
}

void game()
{
	//修改1： 使用rand（）函数产生随机数
	//       这样生成的随机数，每次玩是相等的。这样每次通关没有任何意义
	//       rand函数返回一个从0到RAND_MAX范围内的伪随机整数。在调用rand之前，使用srand函数来设置伪随机数生成器。
	//       RAND_MAX-- - #define RAND_MAX 0x7fff---32767

	//int ret = rand();
	//printf("%d\n", ret);

	//修改2：在rand（）前设置srand---void srand( unsigned int seed );
	//      这样在一轮游戏中是相等的
	//      想法是：srand（随机数）
	//      srand( (unsigned)time( NULL ) );

	//srand(100);
	//int ret = rand();
	//printf("%d\n", ret);

	//修改3：引入time函数，正确使用srand（）函数
	//      time（）函数---返回一个时间戳---时间戳：计算机在调用time函数时与计算机的起始时间（1970.1.1 0：0：0）之间的一个差值，单位为秒
	//      time_t time(time_t* timer); -- - typedef __time64_t time_t; ----typedef __int64 __time64_t;---其实就是整形

	//srand((unsigned int)time(NULL));//NULL--空指针
	//int ret = rand();
	//printf("%d\n", ret);

	//修改4：注意srand只要调用一次-不能频繁的调用---设置随机数的起点值---所以放置的位置在main函数中
	int guess = 0;
	int ret = rand()%100+1;//rand的范围为0-32767，对其100取余，结果为0-99；+1则为1-100
	//printf("%d\n", ret);//为了更好的猜数字游戏的继续，不能看到电脑给的随机数
	while (1)
	{
		printf("请猜数字:\n");
		scanf("%d", &guess);
		if (ret < guess)
		{
			printf("猜大了");
		}
		else if (ret > guess)
		{
			printf("猜小了");
		}
		else
		{
			printf("猜对了");
			break;//猜正确，跳出循环---否则一直猜
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//NULL--空指针
	//由于游戏必须进入，肯定要执行一次，所以选择都 do...while（）循环
	do
	{
		menu();//打印菜单---调用menu函数
		printf("请选择一个数：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}

