#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//知识点：1、常量的分类：
//			1.1 字面常量： 字面定义的常量 3.12、1000
//          1.2 const 修饰的常变量： const int a = 10;
//             补充：数组的大小不能为变量
//               const int num = 10;
//               int arr[n] = {0};
//          1.3 #define 定义的标识符常量: #define MAX 100(后面所有的MAX均改为100)
//          1.4 枚举常量: 枚举---即就是可以一一列举的常量
//							如性别 ：male 、female 、secret
//        2、enum 枚举的关键字(重点掌握)：enum sex

//int main()
//{
//	const int a = 100;
//	//a = 20;//注意此时a位常量，不能再改变。
//	printf("%d\n", a);//100
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);//100
//	return 0;
//}

//创建一个性别枚举常量
//enum sex
//{
//	//枚举常量
//	male,
//	female,//注意为逗号
//	secret
//
//};
//int main()
//{
//	enum sex s = male;
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//	return 0;
//}


//重点知识点：1、字符串：双引号引起的一串字符被称为字符串
//        2、字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，不算作字符串内容。
//        3、掌握ACSII
//        4、字符串%s，字符%c，整数%d，%p 打印地址
//        5、打印字符串长度strlen-----string length-----用头文件#include <string,h>
//        6、特别注意arr2[]
//        7、//"";//空字符串


//#include <string.h>//字符串的头文件
//int main()
//{
//	char arr1[] = "abc" ;
//	char arr2[] = { 'a', 'b', 'c' };
//	char arr3[] = { 'a', 'b', 'c', 0 };
//	char arr4[] = { 'a', 'b', 'c','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//abc烫烫烫烫（因为必须与\0或者0为结束标志，没有遇到\0时均为随机值。\0的ACSII值是0）
//	printf("%s\n", arr3);//abc
//	printf("%s\n", arr4);//abc
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机数
//	printf("%d\n", strlen(arr3));//3
//	printf("%d\n", strlen(arr4));//3
//	return 0;
//}

//知识点：1、转移字符
//        2、屏幕打印单引号，可用\';屏幕上打印双引号，可用\"
//        3、\ddd (ddd表示1-3个八进制数字，注意不能大于8,\32)
//        4、\xdd（dd表示2个十六进制数字，\x41）
//        5、printf("%c\n", '\32');//把8进制的32转换成10进制数后，作为ASCII码值代表的那个字符
//           printf("%c\n", '\x41');//把16进制的41转换成10进制数后，4*16^1+1*16^0=65，作为ASCII码值代表的那个字符


//打印一个目录，并求其字符串长度
//#include <string.h>
//int main()
//{
//	printf("c:\code\32\test.c\n");
//	printf("%d\n", strlen("c:\test\121"));//7
//	printf("%c\n", 'a');//a
//	printf("%c\n", '\'');//'
//	printf("%s\n", "abc");//abc
//	printf("%s\n", "\"");//"
//	return 0;
//}


//知识点：1、函数就是简化代码，代码复用

//作业：函数求解两个数的最大值
//int Max(int x, int y)//形参，没实际意义
//{
//	int m = 0;
//	if (x > y)
//		m = x;
//	else 
//		m = y;
//	return m;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//函数求解两个数的和
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//知识点：选择结构if（）------------条件只有1/0两个值
//                   { };
//               else
//                   { };
//int main()
//{
//	int coding = 0;
//	printf("学习？（选择0/1）");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("home\n");
//	}
//	return 0;
//}



//知识点：循环结构： 1、while(表达式)
//                          循环语句
//                   2、for（表达式1：表达式2：表达式3）
//                          循环语句
//                   3、do
//                          循环语句
//                     while （表达式）；

//int main()
//{
//	int line = 0;
//	while (line <= 20000)//满足条件执行循环体
//	{
//		line++;
//		printf("%d\n", line);
//	}
//	if (line>20000)
//	{
//		printf("跳出\n");
//	}
//	return 0;
//}


//知识点：1、c语言注释风格/* */
//                 不能嵌套注释
//        2、C++注释风格//


//知识点：1、数组：一组相同元素的数据的集合
//        2、打印数组
//        3、数组大小不能为变量
//        4、下标从0开始

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11 };
//	printf("%d\n", arr[0]);//打印数组第一个元素
//
//	int i = 0;
//	while (i < 9)
//	{
//		printf("%2d", arr[i]);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}


//知识点：操作符

//算数操作符：+ - * / %,  /结果为商，%结果为余数
//int main()
//{
//	int a = 5 % 2;
//	int b = 5 / 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//移位操作符：>>,<<

//位操作符：& | ^ ,将十进制转化为二进制后再进行按位& | ^
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;//按(2进制)位与
//	//011
//	//101
//	//001
//	printf("c = %d\n", c);
//
//	int d = a|b;//按位或
//	//011
//	//101
//	//111
//	printf("d = %d\n", d);
//
//	int e = a^b;//按位异或
//	//011
//	//101
//	//110
//	printf("e = %d\n", e);
//	return 0;
//}


//赋值运算符：=、+=、-=、*=、/=、&=、|=、^=、>>=、<<=
//int main()
//{
//	int a = 0;//创建变量，并初始化
//	a = 10;//给a赋值 = 赋值操作符
//	a = a+1;//1
//	a += 1; //2
//	printf("a = %d\n", a);
//
//	//a = a-1;
//	//a-=1;
//	//printf("a = %d\n", a);
//
//	//a = a*10;
//	//a *= 10;
//	//printf("a = %d\n", a);
//
//	//a = a&1;
//	//a &= 1;
//	//printf("a = %d\n", a);
//	return 0;
//}


//单目操作符：只有一个操作数
//C语言是如何表示真假的呢?0 - 表示假，非0 - 表示真 1 -1 
//计算数组元素个数：int sz = sizeof(arr) / sizeof(arr[0]);
//直接计算：printf("%d\n", sizeof(arr));计算出来为数组字节数

int main()
{
	//int a = 10;
	//int b = 20;
	//int c = a+b;//双目操作符：有两个操作数

	//int a = 0;
	//printf("%d\n", !a);

	//int a = -10;
	//a = -a;

	int a = 10;
	printf("%d\n", sizeof(a));//整形是4 字节
	printf("%d\n", sizeof a);//4 字节
	printf("%d\n", sizeof(int));//数据类型也可以进行字符长度的计算，4个字节

	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
	printf("%d\n", sizeof(arr));//10元素*4字节=40字节
	printf("%d\n", sz);//10元素
	return 0;
}