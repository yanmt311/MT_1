#define _CRT_SECURE_NO_WARNINGS 1

//goto 语句:标记跳转的标号。
//最常见的用法就是终止程序在某些深度嵌套的结构的处理过程
//尽量少的使用goto语句，可用其他语句替换

//for ()
//{
//	for ()
//	{
//		for ()
//		{
//			for ()
//			{
//              if（disester）
//				goto error;//若是break，则只能从内层循环退出到上一层循环
//			}
//		}
//	}
//}
//error：


//Demo1:
//#include <stdio.h>
//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}

//Demo2:关机程序
//    1、关机：shutdown -s -t 60    -------60秒之后关机
//    2、取消关机：shutdown -a
//    3、数组名本类就是一个地址---在scanf中不用输入&地址符号
//    4、0 == strcmp（字符串1，字符串2）----比较字符串是否相等

//分析：1、先关机
//     2、通过比较字符串是否相等，取消关机
//     3、goto语句执行

//方法一：goto语句
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char input[200] = { 0 };//定义字符串时用数组，并且类型为char
//	system("shutdown -s -t 60");//关机
//again:
//	printf("你的电脑将在一分钟之内关机，请输入：MTMT，取消关机");
//	printf("请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "MTMT"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input[200] = { 0 };//定义字符串时用数组，并且类型为char
	system("shutdown -s -t 60");//关机
	printf("你的电脑将在一分钟之内关机，请输入：MTMT，取消关机");
	printf("请输入:>");
	scanf("%s", input);
	while (1)//如果为真，则执行循环语句
	{
		if (0 == strcmp(input, "MTMT"))
		{
			system("shutdown -a");
			break;//如果输入正确，跳出循环
		}
	}
	return 0;
}