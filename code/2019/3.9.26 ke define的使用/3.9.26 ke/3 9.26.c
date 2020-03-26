#define _CRT_SECURE_NO_WARNINGS 1

////程序1  define 定义常量
//#include<stdio.h>
//
//#define NUM 1000
//#define STR "呵呵"
//#define LOOP 
//for(;;)
//{
//	printf("hehe\n")
//}
//
////类似于下列用续行符\(记得\后不能加空格)
//#define LOOP for(;;)\//代表续行符
//{\
//	printf("hehe\n")\
//}
//int main ()
//{
//	int max=NUM;//类似将NUM用1000替换
//	printf("%d\n",max);//第一个常量
//	printf("%s\n",STR);//第二个字符串
//	LOOP;//第三个代码
//	return 0;
//}



////程序2  define 定义宏
//
////2.1 原先的函数法
// 
//#include<stdio.h>
//
//int ADD(int x,int y)
//{
//	return x+y;
//}
//
//int main ()
//{
//	int a=10;
//	int b=20;
//	int sum=ADD(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}


////2.2 宏定义法
//
//
//#include<stdio.h>
//
//#define ADD(x,y) ((x)+(y)) 
////宏名+宏参+宏体，ADD后没有符号;给x，y带括号后整体再带括号,防止运算出现错误
//
//int main ()
//{
//	int a=10;
//	int b=20;
//	int sum=ADD(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}


//2.3 注意陷阱

//#include<stdio.h>
//
//#define MUL(x,y) x*y //宏名+宏参+宏体，ADD后没有符号
//
//int main ()
//{
//	int a=1+2;
//	int b=1+2;
//	int c=MUL(a,b);//结果是9
//	int d=MUL(1+2,1+2);//结果是5，应该是9 
//	printf("c=%d,d=%d\n",c,d);
//	printf("%d\n",MUL(1+2,1+2));//结果是5，应该是9 
//	//结果是这样的1+2*1+2=5，防止出现错误，给x与y带括号
//	return 0;
//}


////2.4 改正陷阱
//
//#include<stdio.h>
//#define MUL(x,y) ((x)*(y)) 
//int main ()
//{
//	printf("%d\n",MUL(1+2,1+2));//生成结果为9
//}


