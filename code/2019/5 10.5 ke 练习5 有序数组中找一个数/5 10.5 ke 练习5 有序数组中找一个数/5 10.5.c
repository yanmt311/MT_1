#define _CRT_SECURE_NO_WARNINGS 1


//有序数组查找一个数

////程序1  二分法
//#include<stdio.h>
//int main ()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 7;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	while(left<=right)//注意一定是 小于等于
//	{
//		
//		//int mid = (left+right)/2;//数比较大时就不准确了
//		int mid = left+(right-left)/2;
//		if(arr[mid] < key)//代表的是下标
//		{
//			left = mid+1;
//
//		}	
//		else if(arr[mid] > key)
//		{
//			right =mid-1;
//		}
//		else if(arr[mid] = key) 
//		{
//			break;
//		}
//	}
//	if(left<=right)
//	{
//		printf("找到了\n");
//	}
//	else 
//	{
//		printf("未找到\n");
//	}
//	return 0;
//}




//程序2 二分查找 拆半查找算法
#include<stdio.h>
int BinarySearch(int arr[],int key,int sz)
{
	int left = 0;
	int right = sz-1;

	while(left<=right)//注意一定是 小于等于
	{
		
		//int mid = (left+right)/2;//数比较大时就不准确了
		int mid = left+(right-left)/2;
		if(arr[mid] < key)//代表的是下标
		{
			left = mid+1;

		}	
		else if(arr[mid] > key)
		{
			right =mid-1;
		}
		else if(arr[mid] = key) 
		{
			return mid;
		}
	}
	return -1;
}
int main ()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int key = 7;
	int ret = 0;//接收找不到的返回值
	int sz = sizeof(arr)/sizeof(arr[0]);//元素个数
	ret = BinarySearch(arr,key,sz);

	if(ret == -1)
	{
		printf("未找到\n");
	}
	else 
	{
		printf("找到了:%d  \n",ret);//ret 是下标
	}

	return 0;
}
