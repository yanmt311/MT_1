#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//数组是一组相同类型元素的集合

//知识点1：一维数组的创建
//        数组元素类型 数组名[数组大小--常量表达式]
//        注意：不能使用变量
int main()
{
	//1
	int arr[10];
	//2
	int arr[4 + 4];
	//3--error
	int n = 5;
	int arr[n];//不能使用变量
	return 0;
}

//知识点2：一维数组的初始化
int main()
{
	//1---不完全初始化--剩余的默认初始化为0
	int arr[20] = { 1, 2, 3, 4 }; 
	//2---完全初始化
	int arr2[10] = { 0 };
	int arr3[5] = { 1, 2, 3, 4, 5 };
	//3---字符初始化--数字是ASCII码
	char arr4[] = { 'a', 'b', 'c' };
	char arr5[] = { 'a', 'b', 99 };
	char arr6[] = "hello";

	//注：sizeof---只是针对数组空间的计算，单位：字节；sizeof（类型）*数组元素个数---数组元素个数包含\0
	//            char---1；int---4；double---8
	//    strlen---只是计算元素个数，与\0截止，否则一直继续寻找\0
	printf("%d\n", strlen(arr5));//随机值---没有\0
	printf("%d\n", strlen(arr6));//5---5个元素
	printf("%d\n", sizeof(arr5));//3--3个元素*sizeof(char)= 3
	printf("%d\n", sizeof(arr6));//6--6个元素（包含\0）*sizeof(char) = 6
	return 0;
}

//知识点3：一维数组的使用---数组下标从0开始
//case1:打印数组中的元素
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//打印数组中的某个元素
	printf("arr1[3] = %d\n", arr1[3]);

	//打印数组所有元素个数
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		printf("arr1[%d] = %d \n", i,arr1[i]);
	}
	return 0;
}

//知识点4：一维数组在内存中的存储
//case1:打印数组元素地址
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);//%p - 打印地址---&arr[i]--一定要有地址符号
	}
	return 0;
}
//结果分析：相邻地址相差四个字节-- - 随着数组下标的增长，元素的地址，也在有规律的递增
//数组在内存中是连续存放的
//& arr[0] = 004FF7F4
//& arr[1] = 004FF7F8
//& arr[3] = 004FF800
//& arr[4] = 004FF804
//& arr[5] = 004FF808
//& arr[7] = 004FF810
//& arr[8] = 004FF814
//& arr[9] = 004FF818

//case2：根据打印的数组元素地址打印数组元素---*---解应用
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int* p = arr;//p存的是arr中的地址
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", *p);//*p--是arr中的数组元素
		p++;//地址加1，对应元素就递增。---*p++---元素个数的递增--没有必要
	}
	printf("\n");
	return 0;
}

