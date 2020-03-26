#define _CRT_SECURE_NO_WARNINGS 1


//for中continue跳到调整部分，再到循环部分；while中continue跳到循环部分

////循环
////while循环
////程序1  打印1-10
//#include <stdio.h>
//int main()
//{
//	int i=1;//初始化
//	while(i<=10)//判断
//	{
//		printf("%d ",i);
//		i++;//调整
//	}
//	return 0;
//}
////输出结果为1 2 3 4 5 6 7 8 9 10



////程序2 注意break
//#include <stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			break;//终止while中永久的循环
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
////输出结果为：1 2 3 4



////程序3 注意continue
//#include <stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			continue;//终止while中本次循环，直接跳到while的下一次循环
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
////输出结果为：1 2 3 4 ，但是是死循环



////for循环
////程序4 
//#include<stdio.h>
//int main ()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}

////程序5 break
//#include<stdio.h>
//int main ()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			break;
//		printf("%d\n",i);
//	}
//	return 0;
//}
////结果为1 2 3 4

////程序6
//#include<stdio.h>
//int main ()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			continue;//跳过5，执行i++
//		printf("%d\n",i);
//	}
//	return 0;
//}
////结果为1 2 3 4 6 7 8 9 10

////程序7 
//#include<stdio.h>
//#include <windows.h>
//int main ()
//{
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		Sleep(1000);
//		printf("%d\n",i);
//		i=0;
//	}
//	return 0;
//}
//
////结果为0 1 1...1



//程序8
#include<stdio.h>
int main ()
{
	int i=0;
	int arr[10]={0};
	for(i=0;i<=13;i++)
	{
		printf("hehe\n");
		arr[i]=0;
	}
	return 0;
}

//结果为：hehe死循环

