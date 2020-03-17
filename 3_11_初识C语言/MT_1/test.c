#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 知识点：1、main函数是程序的入口、且一个工程只有一个
//		   2、printf = print + function 打印函数，即用来在屏幕上打印数据  
//         3、stdio = standard + input + output标准输出输入头文件

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//知识点：1、scanf 在VS中需要在第一行加上#define _CRT_SECURE_NO_WARNINGS 1
//        2、int sum = 0;  定义变量时需要在开头定义完全

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个整数：");
//	scanf("%d %d", &num1, &num2);
//	printf("num1 = %d,num2 = %d\n", num1, num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//知识点：1、局部变量作用于变量所在的局部范围；全局变量作用贯穿整个进程
//        2、局部变量和全局变量同名时，全局变量优先
//        3、作用域就是变量所执行的代码范围
//        4、变量生命周期时变量的创建到销毁之间的一个时间段
//        5、代码块内部定义的变量-局部变量
//           在代码块之外定义的变量-全部变量
//        6、extern int g_val;

//int a1 = 3;;
//int main()
//{
//	int a = 1;
//	int a1 = 4;
//	printf("a = %d,a1 = %d\n", a,a1);
//	return 0;
//}

//生命周期
//int main()
//{
//	{
//		//局部变量只能在局部代码块内使用 
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	//不能使用
//	printf("a = %d\n", a);
//	return  0;
//}

//作用域：1、局部变量的作用域：局部变量所在的局部范围-代码块
//        2、全局变量的作用域全局变量的作用域是整个工程

//局部变量
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("a = %d\n", a);
//	return 0;
//}

//全局变量
//int num = 1000;
//void test()
//{
//	printf("3:num = %d\n", num);
//}
//int main()
//{
//	printf("1:num = %d\n", num);
//	{
//		printf("2:num = %d\n", num);
//	}
//	test();
//	return 0;
//}

//补充：声明一个外部标识符
//extern int g_val;
//int main()
//{
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//知识点：1、数据类型的大小
//		  2、bit--byte--kb--mb--gb--tb--pb(1个字节8个bit位，其余1024)
//int main()
//{
//	printf("%d\n",sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4(32bit)/8(64bit)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double ));//8
//	printf("%d\n", sizeof(long double));//8
//	return 0;
//}

//身高 - 180 - 整型
//体重 49.6  - 小数-浮点数 
//名字 - lily
int main()
{
	float weight = 49.5f;//double
	printf("weight = %f\n", weight);
	double salary = 10000.0;//8字节 - salary变量向内存申请8个字节的空间，用来存放10000.0
	return 0;
}








