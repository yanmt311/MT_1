#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数来交换两个整数的内容。
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
//
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

#include <stdio.h>
int swap(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;//temp = a;
	*pa = *pb;//a = b
	*pb = temp;// b = temp
	return 0;
}
int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a = %d,b = %d\n", a, b);
	return 0;
}
