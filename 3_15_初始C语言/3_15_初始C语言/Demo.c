#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//回顾
//知识点1：字符串\0标志，及strlen求字符串长度
//        1、与\0或0结束：由于\0的ASCII值为0
//        2、字符串长度不包括\0
//int main()
//{
//	char arr1[] = { "abc" };
//	char arr2[] = { 'a', 'b', 'c' };
//
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);//abc烫烫烫
//
//	printf("%d\n",strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//
//	return 0;
//}


//知识点2：转义字符
//         1、每个转义符的含义，特别注意\ddd,\xdd
//         2、注意字符串中含有转义字符时，字符串长度的计算
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//
//	//printf("%c\n",'\ ?' );// ?在书写连续多个问号时使用，防止解析成三字母词 ???---\?\?\? 
//	//printf("%c\n", '\'');// '表示字符常量'
//	//printf("%s\n", "\"");// "表示字符串内部的双引号
//	//printf("%c\n", '\\');// \表示一个反斜杠
//	//printf("%c\n", '\a');// 警告字符，蜂鸣
//	//printf("%c\n", '\b');// 退格符
//	//printf("%c\n", '\f');// 向上的箭头，进纸符 
//	//printf("%c\n", '\n');// 换行
//	//printf("%c\n", '\r');// 回车
//	//printf("%c\n", '\t');// 水平制表符
//	//printf("%c\n", '\v');// 垂直制表符
//
//	printf("%d\n", strlen("code:\test\324\title"));//注意冒号是中文时，两个长度，英文时1个长度
//	return 0;
//}

//知识点3：数组的创建：变量不能创建
//        1、数组创建，变量不能创建
//        2、打印数组的元素，用循环
//        3、数组元素个数及字节大小的计算
//int main()
//{
//	//int a = 10;
//	//int arr[a] = { 1, 2, 3, 4 };//变量不能创建数组
//	
//	int arr1[10] = { 0 };
//	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	//打印数组中的元素
//	//printf("%d\n", arr1[2]);
//	//printf("%d\n", arr2[2]);
//
//	//打印数组的地址
//	printf("%d\n", arr1);
//	printf("%d\n", arr2);
//
//	//打印数组全部元素
//	int i = 0;
//	for (i; i < 10; i++)
//	{
//		printf("%2d", arr1[i]);
//	}
//	printf("\n");
//
//	int j = 0;
//	while (j < 10)
//	{
//		printf("%2d", arr2[j]);
//		j++;
//	}
//	printf("\n");
//
//	//计算数组元素长度
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("%d\n", sz);//计算数组元素个数的大小
//	printf("%d\n", sizeof(arr1));//计算数组字节的大小
//
//	return 0;
//}


//知识点4：操作符：单目操作符 sizeof  计算结果的空间大小字节数；注意计算数组的大小
//int main()
//{
//	//!
//	int a = 10;
//	printf("%d\n", !a);//0 10非0，即为真
//	//-
//	printf("%d\n", -a);//-10
//	//+
//	printf("%d\n", +a);//10
//	//sizeof
//	printf("%d\n",sizeof(a));//4字节--32bit
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof (int));//4
//
//	//~ 疑问
//	printf("%d\n", ~a);//-11
//	//000000000 00000000 00000000 00001010
//	//111111111 11111111 11111111 11110101  
//
//	//--、++
//	int b = a++;//后置++：先使用后++  b = 10; a = 11
//	printf("%d%d\n", b, a); //10 11
//
//	int c = ++a;//前置++：先++后使用  c = 12; a = 12
//	printf("%d%d\n", c, a); //12 12
//
//	int d = a--;//后置--：先使用后--  d = 12; a = 11
//	printf("%d%d\n", d,a);//12 11
//
//	int e = --a;//前置--：先--后使用  e = 10; a = 10
//	printf("%d%d\n", e,a);//10 10
//
//	//(类型)---强制类型转换
//	int f = (int)3.14; //“初始化”: 从“double”转换到“int”，可能丢失数据
//	printf("%d\n", f);
//
//	return 0;
//}



//新知识：
//操作符：
//知识点1：单目操作符：~、++、--、强制转换（类型）

//知识点2：关系操作符：>=、 > 、< 、<=、==、!=（两个变量）

//知识点3：逻辑操作符：&&（逻辑与：两个均为真为1）、||（逻辑或：两个均为假为0）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("%d\n", a>b && b>c);//0 && 1----0
//	printf("%d\n", a<b && b>c);//1 && 1----1
//
//	printf("%d\n", a>b || b>c);//0 || 1----1
//	printf("%d\n", a<b || b>c);//1 || 1----1
//	printf("%d\n", a && b && c);//1 && 1 && 0----0
//	printf("%d\n", a || b || c);//1 || 1 || 0----1
//	return 0;
//}


//知识点4：条件操作符：表达式1？表达式2：表达式3  （如果表达式1成立，执行表达式2，否则执行表达式3）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//	{
//		max = a;
//		printf("%d\n", max);
//	}
//	else
//	{
//		max = b;
//		printf("%d\n", max);7
//	}
//
//	//三目操作符求最大值
//	a > b ? a:b;
//	printf("%d\n", max);
//	return 0;
//}


//知识点5：[]:数组的下标引用、()：函数调用、.、->

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[2]);//[]数组的下标引用操作符，求数组中的元素个数
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	return z = x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//()函数调用操作符
//	printf("sum = %d\n", sum);
//	return 0;
//}


//关键字：不能自己创建关键字，不能作为变量名
//知识点1：常见关键字
//        1、auto：自动 局部变量都是auto类型的。 
//        2、break循环中作为停止的变量、continue
//        3、switch、case、default
//        4、char、double、float、int、long、short短整型、void、signed有符号数、unsigned无符号类型
//        5、enum枚举关键字、const、return
//        6、if、else、for、do、while、goto语句
//        7、extern声明外部符号，如需要声明外部全局变量时使用、register寄存器、sizeof、static静态的、 struct结构体、typedef类型定义、union共用体、联合体、volatile断位   
//int main()
//{
//	auto int a = 10;//局部变量一般省略auto
//	printf("%d\n", a);
//	return 0;
//}

//知识点2：typedef：类型定义，类型重命名
//typedef unsigned int u_int;//由于unsigned int类型太复杂，因此给其进行类型定义
//int main()
//{
//	unsigned int age = 10;
//	//u_int ---- unsigned int
//	printf("%d\n", age);
//	return 0;
//}

//知识点3：extern

//知识点4：sizeof（sizeof是操作符、strlen是库函数）
//         1、sizeof()是操作符，用来计算某个对象或者类型的大小，其单位是字节
//         2、strlen()是库函数，仅仅用来求解字符串的长度（从字符串的开始位置向后数字符的个数，直到'\0',但是所求的个数不包含'\0'）
//         3、数组求数组元素sizeof(arr)/sizeof(arr[0]);求数组大小sizeof(arr),单位为字节

//知识点5：static
//         1、修饰局部变量---静态局部变量---改变局部变量的生命周期，生命周期变长，出局部范围不结束，使代码具有记忆功能----重点
//         2、修饰全局变量---静态全局变量---改变了全局变量的作用域，使作用域变小，static修饰的全局变量只能在自己所在的.c文件中使用，不能再其他源文件中使用
//         3、修饰函数---静态函数---改变了函数的作用域，使作用域变小，static修饰的函数只能在自己所在的.c文件中使用，不能再其他源文件中使用

//1.1 修饰局部变量
//void test()
//{
//	int a = 1;//局部变量的生命周期是进入作用域开始，出去结束
//	a++;
//	printf("%2d", a);//10个2
//}
//int main()
//{ 
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	printf("\n");
//	return 0;
//}

//局部变量前加static
//void test()
//{
//	static int a = 1;//局部变量的生命周期是进入作用域开始，出去结束
//	a++;
//	printf("%2d", a);//2-11
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	printf("\n");
//	return 0;
//}

//1.2 修饰全局变量
//extern int g_val;//全局变量作用域整个工程
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//全局变量前加static
//extern int g_val;//extern声明外部符号
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//1.3 修饰函数
//extern int Add(int x, int y);//声明一个外部函数 extern 类型 函数名（类型 变量名）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//函数前加static
//extern int Add(int x, int y);//声明一个外部函数 extern 类型 函数名（类型 变量名）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//知识点6： register
//int main()
//{
//	register int a = 10;//a之后会被大量使用，因此被建议放在寄存器中，但是是由电脑进行操作的
//	return 0;
//}

//#define定义常量和宏---定义宏类似函数

//知识点1：#define 定义常量
//#define MAX 100 
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}

//知识点2：#define 定义宏
//用函数求两个数的最大值
//int MAX(int x, int y)
//{
//	//三目操作符----条件操作符
//	return (x>y ? x:y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//用#define定义宏求两个数的最大值
//#define MAX(X,Y) ((X)>(Y) ? (X):(Y)) //注意：#define 函数名 函数实现的功能 ；注意全部大写
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//指针
int main()
{

	return 0;
}