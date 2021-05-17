#include <stdio.h>  
#include <windows.h>
#pragma warning(disable:4996)//scanf的问题

//1、程序框架的认识
#if 0
int main() //入口函数,有且仅有一个
{
	printf("helloworld\n");
	system("pause");
	return 0;//默认写法
}
#endif


//编译：本地windows编译器；
//      生成解决方案：编译不运行
//      重新生成解决方案：重新编译但不运行
//      本地调试：编译并运行



//2、数据类型
//代码要从cpu上拿到数据，再cpu上运行，在内存中开辟一块空间
//sizeof
#if 0
int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	system("pause");
	return 0;
}
#endif

//存在这么多的类型，其实是为了更加丰富的表达生活中的各种值。
//计算机是为了解决人的问题，而人的计算场景是非常多的。


//3、打印大写字母
#if 0
int main()
{
	char c = 'a';
	for (; c <= 'z'; c++){
		printf("%c ", c);
	}
	printf("\n");
	system("pause");
	return 0;
}
#endif
//批量化注释：ctrl+k+c
//批量化去注释：ctrl+k+u

//4、
//变量：值是可变的（比如：年龄，体重，薪资）。
//常量：值是不变的（比如：圆周率，性别（？），身份证号码，血型等等）
#if 0
//全局变量：在代码块的外部
double weight = 160.5;
void fun()
{
	printf("%f\n", weight);
	//printf("%f\n", high); //---局部变量 error
}
int main()
{
	//局部变量:在代码块内部
	float high = 111.f;
	printf("%f\n", weight);
	printf("%f\n", high);
	fun();
	system("pause");
	return 0;
}
#endif

#if 0
int global = 2019;//全局变量
int main()
{
	int local = 2018;//局部变量
	int global = 2020;//局部变量
	printf("global = %d\n", global);
	system("pause");
	return 0;
}
#endif

//5、两个数的加法
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个操作数:>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
