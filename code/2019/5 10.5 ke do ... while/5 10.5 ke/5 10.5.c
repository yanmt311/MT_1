#define _CRT_SECURE_NO_WARNINGS 1


//do  while 

//程序1 输出1-10
//#include<stdio.h>
//int main ()
//{
//	int i=1;
//	do
//	{
//		printf("%d ",i );
//		i++;
//	}while(i<=10);//为真执行，为假跳出
//	return 0;
//}


//continue 在do while 中的应用
//#include<stdio.h>
//int main ()
//{
//	int i=1;
//	do
//	{
//		if(5 == i)
//			continue;
//		printf("%d ",i );
//		i++;
//	}while(i<=10);//为真执行，为假跳出
//	return 0;
//}

//结果为1 2 3 4死循环


//break在do while 中的应用
#include<stdio.h>
int main ()
{
	int i=1;
	do
	{
		if(5 == i)
			break;
		printf("%d ",i );
		i++;
	}while(i<=10);//为真执行，为假跳出
	return 0;
}

//结果为1 2 3 4