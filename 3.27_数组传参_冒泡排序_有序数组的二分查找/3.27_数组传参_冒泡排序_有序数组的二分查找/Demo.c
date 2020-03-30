#define _CRT_SECURE_NO_WARNINGS 1

//知识点：数组传参

//case1:冒泡排序
//case1：实现一个对整形数组的冒泡排序
//分析：1、冒泡排序：两两相邻的元素比较
//     2、第一趟冒泡排序 ---确定最大数
//        10，9，8，7，6，5，4，3，2，1
//        9，10，8，7，6，5，4，3，2，1
//        9，8，10，7，6，5，4，3，2，1
//        ....
//        9，8，7，6，5，4，3，2，1，10
//        
//      若元素个数为10---趟数--9次
//      第一趟对比9次，第二趟8次，第三趟7次...
//     3、数组传参一定传数组元素的大小


//方法1:一般方法
//void BubbleSort(int arr[],int sz)//int arr[]----int* arr----数组首元素的地址
//{
//	//冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{ 
//			//冒泡排序的实现
//			if (arr[j]>arr[j + 1])
//			{ 
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////打印数组
//void PrintfArr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//创建一个逆数组
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//
//	//计算数组元素个数的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//只能将其写入主函数中，数组传参传过去的是数组首元素的指针，所以int sz = sizeof(arr) / sizeof(arr[0])在函数内部为1，sizeof(arr)为首元素地址，再32位中4个字节
//
//	//创建打印数组函数
//	PrintfArr(arr, sz);
//
//	//创建一个冒泡排序函数---将数组arr排成升序
//	BubbleSort(arr,sz);
//
//	//创建打印数组函数
//	PrintfArr(arr, sz);
//	return 0;
//}
//
////方法2：冒泡排序优化---对于有序数组的优化
//void BubbleSort(int arr[], int sz)//int arr[]----int* arr----数组首元素的地址
//{
//	//冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//冒泡排序的实现
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)//第一趟冒泡排序完，发现两两元素没有交换过，则为有序数组
//		{
//			break;
//		}
//	}
//}
//
////打印数组
//void PrintfArr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//创建一个逆数组
//	//int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//计算数组元素个数的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//只能将其写入主函数中，数组传参传过去的是数组首元素的指针，所以int sz = sizeof(arr) / sizeof(arr[0])在函数内部为1，sizeof(arr)为首元素地址，再32位中4个字节
//
//	//创建打印数组函数
//	PrintfArr(arr, sz);
//
//	//创建一个冒泡排序函数---将数组arr排成升序
//	BubbleSort(arr, sz);
//
//	//创建打印数组函数
//	PrintfArr(arr, sz);
//	return 0;
//}


//知识点：针对数组名---数组传参
//       注意：1、sizeof(arr) --- sizeof(数组名) -  数组名表示整个数组，--计算的是整个、数组的大小，单位为字节
//            2、&arr ---&数组名 - 数组名表示整个数组，--取出的是整个数组的首地址。
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	printf("%p\n", arr); //首元素地址---32位-4个字节  64位-8个字节
//	printf("%p\n", &arr[0]);//元素的地址
//	printf("%p\n", &arr);//整个数组的地址---只打印首元素地址
//
//	printf("%p\n", arr+1); //首元素地址---32位-4个字节  64位-8个字节
//	printf("%p\n", &arr[0]+1);//元素的地址
//	printf("%p\n", &arr+1);//整个数组的地址---只打印首元素地址
//
//	printf("%d\n", sizeof(arr));//整个数组的大小 ---10个元素*sizeof（int）= 40
//	printf("%d\n", sizeof(arr[0]));//数组元素的字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算数组元素的个数
//
//	return 0;
//}

//case2：二分查找有序数组
#include <stdio.h>
int Binary_search(int arr[], int k, int sz)//int arr[] 等价于 int* arr
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int  mid = (left + right) / 2;//必须在循环体内部
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	//当left>right时，交错找不到
	return -1;//因为数组下表中从0开始，所以用-1表示
}
int main()
{
	//生成一个有序数组
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//确定查找的元素
	int k = 0;
	scanf("%d", &k);
	//计算数组元素大小
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = Binary_search(arr, k, sz);//数组传参时，传过去一个数组名，本质上传过去的是数组的首元素的地址 &arr[0]，数组传参发生降级-变成首元素的地址
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是:%d\n", ret);
	}
	return 0;
}