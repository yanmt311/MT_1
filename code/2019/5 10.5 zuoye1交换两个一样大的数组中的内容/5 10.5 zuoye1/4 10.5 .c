#define _CRT_SECURE_NO_WARNINGS 1

////程序1 交换两个数组中的内容
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = {1,3,5,7,9};
//	int arr2[5] = {2,4,6,8,0};
//
//	/*int temp[5] = {0};
//	temp=arr1;
//	arr1=arr2;
//	arr2=temp;*/  //此种方法交换的是地址，不正确
//	int temp = 0;
//	int i = 0;
//
//	for(i=0; i<5; i++)
//	{
//		temp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=temp;
//	}
//	
//
//	for(i=0; i<5; i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");//打印arr1
//
//
//
//	for(i=0; i<5; i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	printf("\n");//打印arr2
//
//	return 0;
//}
//
////程序2 函数调用交换两数组中的内容
//
//#include<stdio.h>
//void printf_arr(int arr[5],int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d " ,arr[i]);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int arr1[5] = {1,3,5,7,9};
//	int arr2[5] = {2,4,6,8,0};
//	int temp = 0;
//	int i = 0;
//
//	for(i=0; i<5; i++)
//	{
//		temp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=temp;
//	}
//	
//	printf_arr(arr1,5);//传参只写名，数组个数
//	printf_arr(arr2,5);
//	return 0;
//}
//
////求数组元素的个数
//int sz = sizeof(arr1)/sizeof(arr1[0]); //元素个数
////sizeof(arr1)整个数组的总大小 括号内只能是数组名
////sizeof(arr1[0] 第一个元素的大小


//程序3 用元素个数进行优化，改变元素个数，不发生任何变化
#include<stdio.h>
void printf_arr(int arr[5],int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d " ,arr[i]);
	}
	printf("\n");

}
int main()
{
	int arr1[5] = {1,3,5,7,9};
	int arr2[5] = {2,4,6,8,0};
	int temp = 0;
	int i = 0;
	int sz = sizeof(arr1)/sizeof(arr1[0]);

	for(i=0; i<sz; i++)
	{
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
	
	printf_arr(arr1,sz);//传参只写名，数组个数
	printf_arr(arr2,sz);
	return 0;
}
