#define _CRT_SECURE_NO_WARNINGS 1
//
////程序1  关机  使用goto语句
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main ()
//{
//	char input[20] = {0};
//	system("shutdowm -s -t 60");
//again:
//	printf("电脑将在1分钟之内关机，如果输入：我是猪，就取消关机!\n请输入");
//	scanf("%s",&input);
//
//	if(0 == strcmp(input,"我是猪"))
//	{
//		system("shutdown -a");
//	}
//
//	else 
//	{
//		goto again;
//	}
//
//	return 0;
//}

//程序2 使用循环进行关机
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char input[20] = {0};
	system("shutdowm -s -t 60");
	
	while(1)
	{
		printf("电脑将在1分钟之内关机，如果输入：我是猪，就取消关机!\n请输入");
		scanf("%s",&input);
		if(0 == strcmp(input,"我是猪"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}