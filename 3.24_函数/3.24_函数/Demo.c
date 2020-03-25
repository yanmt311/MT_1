#define _CRT_SECURE_NO_WARNINGS 1

//知识点1：库函数的学习
//     1、c语言中的库函数：IO函数、字符串操作函数、字符操作函数、内存操作函数、时间/日期操作函数、数学函数
//     2、使用库函数，必须包含 #include 对应的头文件。

//1.1 strcpy--string copy---字符串拷贝---字符操作函数
//char * strcpy ( char * destination, const char * source );
//为了避免溢出，目标指向的数组的大小应该足够长，以包含与源相同的C字符串(包括终止null字符)，并且在内存中不应该与源重叠。
//将source指向的C字符串复制到destination指向的数组中，包括终止的空字符（并在该位置停止）。
//destination：指向要复制内容的目标数组的指针。
//source：要复制的C字符串。

//case1：
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "Sample string");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}
//结果：Sample string；Sample string；Sample string

//case2：
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "***********";
//	char arr2[] = "YMT";
//	strcpy(arr1, arr2);
//	printf("arr1: %s\narr2: %s\n", arr1, arr2); //YMT\0 *******,遇\0结束
//	return 0;
//}

//1.2 memset--memory set---内存设置---内存操作函数
//void * memset ( void * ptr, int value, size_t num );
//将ptr指向的内存块的前num个字节设置为指定值（解释为无符号字符）
//ptr：指向要填充的内存块的指针
//value:要设置的值。该值作为整数传递，但是该函数使用该值的无符号char转换来填充内存块
//num：要设置为该值的字节数。size_t是无符号整数类型。

//case1：
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}

//case2：
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "***********";
//	memset(arr1, 'T', 5);
//	printf("arr1: %s\n", arr1); 
//	return 0;
//}

//1.3 strcat --- 连接字符串
//char * strcat ( char * destination, const char * source );
//将源字符串的副本附加到目标字符串。目的地中的终止空字符由源的第一个字符覆盖，
//并且在目的地中的两个字符连接形成的新字符串的末尾包含一个空字符。
//destination：指向目标数组的指针，该数组应该包含一个C字符串，并且足够大，可以包含连接起来的结果字符串。
//source：要附加的C字符串，这不应与目的地重叠。

//case：
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[80];
//	strcpy(str, "these ");
//	strcat(str, "strings ");
//	strcat(str, "are ");
//	strcat(str, "concatenated.");
//	puts(str);
//	return 0;
//}

//知识点2：自定义函数
//      1、自定义函数---函数名、返回值类型、函数参数，函数体
//2.1 写一个函数实现两个数中的最大值
//int get_max(int x, int y)
//{
//	return ((x > y) ? x : y);
//}
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &input1, &input2);
//	int max = get_max(input1, input2);
//	printf("%d\n", max);
//	return 0;
//}
//2.2 写一个函数交换两个整型变量的内容
//方法一：
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int temp = 0;
//
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//方法二：
//传值调用---错误代码
//原因：传值调用：函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//     形参实例化后只是实参的一份临时拷贝
//#include <stdio.h>
//int swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//传址调用---修改代码
//     传址调用是把函数外部创建变量的内存地址 传递给函数参数的一种调用函数的方式。
//     可以让函数和函数外边的变量建立起正真的联系，也就是函数内部可以直接操作函数外部的变量
//     函数内部修改实参时，才需要传址调用

//理解：
//int main()
//{
//	int a = 10;
//	int* pa = &a;//将a的地址放在开辟的新空间pa中 
//	*pa = 20;//*pa---解应用，*pa--等价于a；通过查找的a的地址寻找到a的值，并将20赋值给a
//	printf("a = %d\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//int swap(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;//temp = a;
//	*pa = *pb;//a = b
//	*pb = temp;// b = temp
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//知识点3：形参与实参
//实际参数：1、真实传给函数的参数，叫实参。
//         2、实参可以是：常量、变量、表达式、函数等。
//         3、无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便将这些值传给形参

//形式参数：1、形式参数是指函数名后括号中的变量。
//         2、形式参数只有在函数被调用的过程中才实例化（分配内存单元）---- 形式参数。
//         3、形式参数当函数调用完成之后就自动销毁了，形式参数只在函数中有效。
//         4、形参实例化是实参的一份临时拷贝


//知识点4：函数的嵌套使用
//case:
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//结果：hehe hehe hehe （三行hehe）

//知识点5：函数的链式访问---把一个函数的返回值作为另外一个函数的参数。
//5.1 strlen的链式访问
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = "hello";
//	//int ret = strlen(arr);
//	int len = strlen(strcat(arr, "word"));
//	//printf("%d\n", ret);
//	printf("%d\n", len);
//	return 0;
//}

//5.2 printf的返回值---函数中的每一个都返回打印的字符数，如果出现错误则返回一个负值。
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", printf("%d", printf("%d", 43)));
//	return 0;
//}
//结果分析：4321--43两个字符--2一个字符--1----4321

//知识点6：函数的声明和定义
//       1、函数声明：告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。
//          注意：函数要满足先声明后使用
//                函数的声明一般要放在头文件中
//       2、函数定义：函数的具体实现，交代函数的功能实现

//case:
//#include <stdio.h>
////函数声明
//int get_max(int x, int y);
//
////函数定义
//int get_max(int x, int y)
//{
//	return ((x > y) ? x : y);
//}
//
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &input1, &input2);
//	int max = get_max(input1, input2);//函数调用
//	printf("%d\n", max);
//	return 0;
//}

//知识点7：函数调用
//7.1 传值调用：函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参

//7.2 传址调用：将函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//             可以让函数和函数外边的变量建立起真正的联系，--- 函数内部可以直接操作函数外部的变量


//函数练习：
//1.1 函数实现判断一个数是否为素数
//方法1：
//#include <stdio.h>
////1.1---定义函数参数时，用不同的变量---为n
//int is_prime(int n)
//{
//	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
////1.2---定义函数参数时，使用相同的变量---均为i
////int is_prime(int i)
////{
////	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
////	int n = 0;
////	for (n = 2; n < i; n++)
////	{
////		if (i%n == 0)
////		{
////			return 0;
////		}
////	}
////	return 1;
////}
//int main()
//{
//	//打印1-100的数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//i==1，则是素数
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}

//方法二：
//#include <math.h>
//#include <stdio.h>
//int is_prime(int n)
//{
//	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	//只有一种情况，就是不满足for循环
//	return 1;
//}
//int main()
//{
//	//打印1-100的数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//i==1，则是素数
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}
//
////方法三：
//#include <math.h>
//#include <stdio.h>
//int is_prime(int n)
//{
//	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	//只有一种情况，就是不满足for循环
//	return 1;
//}
//int main()
//{
//	//打印1-100的数
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 201; i += 2)
//	{
//		if (is_prime(i) == 1)//i==1，则是素数
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}

//1.2 函数实现判断一年是不是闰年
//#include <stdio.h>
//int Is_leap_year(int y)
//{
//	/*if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
//	{
//	return 1;
//	}
//	else
//	{
//	return 0;
//	}*/
//	return ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
//}
//int main()
//{
//	//生成一个year
//	int year = 0;
//	printf("请输入年份：");
//	scanf("%d", &year);
//
//	if (Is_leap_year(year) == 1)
//	{
//		printf("%d是润年 ", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//	return 0;
//}

//统计1000-2000之间的闰年
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;//若只用两种结果，是/不是---即闰年返回1；不是闰年返回0
//	}
//	else
//	{
//		return 0;
//	}
//	//return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	//生成1000-2000
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)//year == 1；是闰年
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//1.3 函数实现一个整型有序数组的二分查找
//#include <stdio.h>
//int Binary_search(int arr[], int k, int sz)//int arr[] 等价于 int* arr
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int  mid = (left + right) / 2;//必须在循环体内部
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//当left>right时，交错找不到
//	return -1;//因为数组下表中从0开始，所以用-1表示
//}
//int main()
//{
//	//生成一个有序数组
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//确定查找的元素
//	int k = 0;
//	scanf("%d", &k);
//	//计算数组元素大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Binary_search(arr,k,sz);//数组传参时，传过去一个数组名，本质上传过去的是数组的首元素的地址 &arr[0]，数组传参发生降级-变成首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}

//1.4 函数每调用一次这个函数，将num的值增加1
void Add(int* p)
{
	(*p)++;//*p = num -----等价于num++
}

int main()
{
	int num = 0;
	Add(&num);//改变实参的值，即传址调用
	printf("%d\n", num);//1
	Add(&num);
	printf("%d\n", num);//2

	return 0;
}