#define _CRT_SECURE_NO_WARNINGS 1

// 在一个有序数组中查找具体的某个数字n，找到了就打印数字所在的下标，找不到则输出：找不到。
#include <stdio.h>
// 方法一：按顺序依次查找---2^32
//       1、创建一个有序数组
//       2、求其下标.左下标与右下标---计算数组元素个数
//       3、判断查找的数字，与元素个数是否相等，相等输出下标，不等继续查找。查找完，没找到则输出找不到
//int main()
//{
//	//创建一个有序数组
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 7;//查找的数
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
//	int i = 0;
//	for (i; i < sz; i++)
//	{
//		if (n == arr[i])
//			{
//				printf("找到了，下标为：%d", i);
//				//break;
//			}
//		else
//		{
//			printf("找不到\n");
//		}
//	}
//	
//	//两种情况：1、break跳出（不满足n==arr[i]）；2、当下标大于等于数组元素时，写i==sz或者i>=sz均可
//	if (i == sz)//因为i每次是+1的，所以先是==，然后才大于，只要==了，循环就结束了
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//方法二：二分查找----log2 n------若是2^32，则n==32
//      1、创建一个有序数组
//      2、计算数组元素个数
//      3、计算左下标，右下标，求其中间下标 
//      4、判断中间下标的元素值是否与查找的数相等，若相等，输出其下标值，不相等继续查找（arr[mid] < n，left = mid + 1；arr[mid] > n，right = mid -1）。查找完，没找到则输出找不到

//       1，2，3，4，5，6，7，8，9，10
//下标： 0，                         9
//二分查找：（0+9）/2 = 4
//下标   0           4               9
//5比7小，左下标4+1=5   5            9

//二分查找：（5+9）/2 = 7
//下标                  5     7
//8比7大，右下标7-1=6   5  6

//二分查找：（5+6）/2 = 5
//下标                  5  6
//6比7小，左下标5+1=6      6 

//二分查找：（6+6）/2 = 6
//下标                     6
//7等于7，找到了，输出下标6
int main()
{
	//创建一个有序数组 
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 7;//查找的数
	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
	int left = 0;
	int right = sz - 1;
	
	//循环完成有序数组的所有值的比较
	while (left<=right)
	{ 
		//一次判断
		int mid = (left + right) / 2;//不能写在外面
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid -1;
		}	
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;//没有break，则死循环
		}
	}

	//两种情况：1、break跳出，否则死循环；2、不满足left<=right,使其交错
	if (right<left)//因为i每次是+1的，所以先是==，然后才大于，只要==了，循环就结束了
	{
		printf("找不到\n");
	}
	return 0;
}