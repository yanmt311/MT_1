#define _CRT_SECURE_NO_WARNINGS 1

// 创建一个数组
//实现函数init（）初始化函数
//实现empty（）清空数组
//实现reverse（）函数完成数组元素的逆置 //逆置不是倒着打印
//要求：自己设计函数的参数，返回值

//错误代码
//
//#include <stdio.h>

//void init (int arr[], int set)
//{
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//sz始终等于1
//	//函数内部求参数部分数组元素的个数永远求不到
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//int main()
//{
//	int arr[10] = {3,5,7,9,11,2,4,6,8,10};
//	init(arr, 1)//没有传元素个数
//	
//	return 0;
//
//}



//
////改正
//#include <stdio.h>
//
////替换
//void Init (int arr[], int sz,int set)
//{
//	int i = 0;
//
//	/*int arr2[] = {1,1,1,11,1,1,11,1};
//	int sz = sizeof(arr2)/sizeof(arr2[0]);*/ 
//	//上述可以求解arr2数组元素个数，但不能求arr
//
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//
////清空 
//void Empty(int arr[],int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//}

//逆置
//逆置时需要将其他的进行

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while (left<right)
	//left=right 时，是奇数中间的数，其交换没有用
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}
}

//打印
void print(int arr[], int sz)//void print(int *arr, int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}


int main()
{
	//int arr[10] = {11,3,5,7,9,2,4,6,8,0};//偶数时
	int arr[] = {11,3,5,7,9,2,4,6,8,0,1};//奇数时
	int sz = sizeof(arr)/sizeof(arr[0]);//元素个数
	//Init(arr,sz,1);//1返回值
	//print(arr,sz);

	//Empty(arr, sz);//返回0
	//print(arr,sz);

	//1 2 3 4 5 6 7 8 9 10
	reverse(arr, sz);
	//数组元素得逆序，数组得内容为10到1，倒数第一个与第一个交换;中间没有元素交换截止
	print(arr,sz);

	return 0;

}



