#define _CRT_SECURE_NO_WARNINGS 1




////程序1 ~按位取反
//#include <stdio.h>
//int main ()
//{
//	int num=0;
//	//00000000 00000000 00000000 00000000
//	//11111111 11111111 11111111 11111111补码
//	//11111111 11111111 11111111 11111110补码减1
//	//10000000 00000000 00000000 00000001原码为-1
//	//正数 原码，反码，补码相同
//	//负数 原码取反+1=补码
//	//内存中存的为补码
//	//输出的应为原码
//	printf("%d\n",~num);
//	return 0;
//}


//程序2 ++与--

//#include <stdio.h>
//int main ()
//{
//	int a=10;
//	int b=a++;//a=11,b=10分开  //整体：a=11,b=10
//	//后置++，先使用再加加，先把a给b，再让a++给a
//
//	int c=++a;//c=11,a=11分开  //整体：c=12,a=12
//	//前置++，先加加后使用，先把a++给c，再a++ 给a
//
//	int d=a--;//a=9,d=10分开  //整体：a=11,d=12
//	//后置--，先使用再减减，先把a给d，再让a--给a
//
//	int e=--a;//e=9,a=9分开  //整体：e=10,a=10
//	//前置--，先减减后使用，先把a--给e，再a-- 给a
//	printf("a=%d b=%d c=%d  d=%d e=%d\n",a,b,c,d,e);
//	
//	return 0;
//}
//
////整体输出结果为：a=10,b=10，c=12,d=12，e=10





////程序3 强制类型转换
//#include <stdio.h>
//int main()
//{
//
//	int a=(int)3.14;//将double 转换成int
//	printf("a=%d\n",a);
//
//	return 0;
//}




////  程序4 关键字 typedef
//#include <stdio.h>
//
//typedef unsigned int unit;//tepedef 类型重命名
//int main()
//{
//	//意思一样
//	unsigned int num1=10;
//	unit num2=10;
//
//	return 0;
//}



////程序5 关键字 static 
//
//#include <stdio.h>
//
//void test()
//{
//	int a=1;
//	a++;
//	printf("%d",a);//输出为22222 ，因为a在局部变量里，生命周期开始到生命周期结束
//}
//int main ()
//{
//	int i=0;
//	for (i=0;i<5;i++)
//	{
//		test();
//	}
//	return 0;
//}
//

////程序6  添加static在局部变量
//#include <stdio.h>
//
//void test()
//{
//	static int a=1;//创建之后未执行，
//	a++;
//	printf("%d",a);//输出为23456
//}
//int main ()
//{
//	int i=0;
//	for (i=0;i<5;i++)
//	{
//		test();
//	}
//	return 0;
//}



////程序7 添加static在全局变量
//#include <stdio.h>
//int g_val=2019;
////static int g_val=2019;//不能运行
////下行声明
//extern int g_val;//全局变量  类型+名字 //extern 声明外部符号
//int main ()
//{
//	printf("%d\n",g_val); 
//	return 0;
//}
//



//程序8：static修饰函数

#include<stdio.h>

static extern int Add(int x,int y);//extern声明外部函数Add

Add(int x,int y)
{
	return x+y;
	//或者z=x+y
	//return z;
}

int main()
{
	int sum;//声明sum
	sum=Add(2,3);
	printf("%d\n",sum);
	//或者printf("%d\n",Add(2,3));

	return 0;
}


//static作用： 
//	修饰变量
//		a.修饰局部变量
		    /*改变了变量的生命周期，让静态局部变量的作用域依然存在，到程序结束
			，生命周期才结束*/
//		b.修饰全局变量
			/*改变了全局变量的作用域，使这个全局变量只能在本源文件内
            使用，不能在其他源的作用域使用*/
//	修饰函数
        //改变作用域，static函数只能在函数所在的源文件作用域使用，其他源文件无法使用