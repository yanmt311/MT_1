#define _CRT_SECURE_NO_WARNINGS 1

////程序1 while循环
//
//#include <stdio.h>
//int main()
//{
//int line=0;
//printf("1\n");
//
//while(line<=20000)
//{
//	printf("写代码\n");
//	line++;
//}
//
//if(line>20000)
//{
//	printf("找工作\n")
//}
//
//return 0;
//}


////程序2 函数的调用
//
//#include<stdio.h>
//
//int add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//
//}
//
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum=0;
//	printf("输入两个数：");
//	scanf("%d%d",&num1,&num2);
//
//	//sum=sum1+sum2;
//
//	//调用函数更方便
//	sum=add(num1,num2);
//
//	printf("sum=%d\n",sum);
//	return 0;
//
//}


////程序3  数组与函数
//
//#include<stdio.h>
//
////调用函数更方便
//void print_arr(int arr[10],int size)
//{	
//	int i=0;
//	for(i=0;i<size;i++)//i从0到9,代表下标
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int arr[10]={0};
//	int i=0;
//	////输出数组的内容
//	//for(i=0;i<10;i++)//i从0到9,代表下标
//	//{
//	//	printf("%d ",arr[i]);
//	//}
//	//printf("\n");
//	//
//	
//
//	print_arr(arr,10);//arr代表数组名，10代表个数
//
//	//输入数组的内容
//	for(i=0;i<10;i++)//i从0到9,代表下标
//	{
//		scanf("%d",&arr[i]);//注意%d后不要按空格 否则输出时需要按空格
//	}
//
//	print_arr(arr,10);//替换下列的输出
//
//	////输出输入后的内容
//	//for(i=0;i<10;i++)//i从0到9,代表下标
//	//{
//	//	printf("%d ",arr[i]);
//	//}
//
//	printf("\n");
//
//
//	return 0;
//}


//程序4 左移与右移

#include<stdio.h>

int main()
{
	int num=15;
	//8 4 2 1
	//int 有4个字节，总共32比特位
	//15的二进制 00000000 00000000 00000000 00001111
	//num=num>>1;//>>右移，<<左移
	// 0 00000000 00000000 00000000 0000111 为7
	//正数高位补0，负数高位补1
	  num=num<<1;
	  //num<<=1;
	//0000000 00000000 00000000 00001111 0
	printf("%d\n",num);
	return 0;
}