#define _CRT_SECURE_NO_WARNINGS 1

//程序3 写一个函数，实现一个整形有序数组的二分查找


//前提为 有序二分查找

//#include <stdio.h>
//
//int binary_search(int arr[], int k, int left, int right)
//{
//	while (left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]); //元素个数
//	int ret = binary_search(arr, k, 0, sz-1);
//
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else 
//	{
//		printf("找到了:%d\n",ret);
//	}
//	return 0;
//}