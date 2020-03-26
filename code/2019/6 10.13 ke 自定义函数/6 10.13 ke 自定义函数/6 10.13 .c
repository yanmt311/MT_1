#define _CRT_SECURE_NO_WARNINGS 1

////程序1  比较两个数的最大值
//#include <stdio.h>
//
//int get_max(int x,int y)
//{
//	return x>y?x:y;
//
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	
//	int max = get_max(a,b);//a和b中的最大值传给max // max = get_max(1,2)

//	printf("max = %d\n",max);
//
//	return 0;
//}



//程序2  两个数的交换
//错误

//运行时错误，还有编译错误，链接错误

//当实参传给形参时，形参时实参的一份临时拷贝，对形参的修改不会改变实参


//#include<stdio.h>
//void Swap(int x,int y)//形参
//{
//	int temp = x;
//	x = y;
//	y =temp;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//
//	printf("a=%d b=%d\n",a,b);
//	Swap(a,b);//实参  //传值调用
//	printf("a=%d b=%d\n",a,b);
//
//	return 0;
//}

//改正 注意一定要用指针
#include <stdio.h>
void Swap(int *px,int *py)
{
	int temp =*px;
	*px = *py;
	*py = temp;
}

int main()
{
	int a = 20;
	int b = 10;

	printf("a=%d b=%d\n",a,b);
	Swap(&a,&b);//实参  //传址调用
	printf("a=%d b=%d\n",a,b);

	return 0;
	
}