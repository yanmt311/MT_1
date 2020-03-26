#define _CRT_SECURE_NO_WARNINGS 1

//程序4 写一个函数，每调用一次这个函数，就会将num的值增加1


//要改变num 即需要传址调用

#include <stdio.h>
void Inc(int *p)
{
	(*p)++;//*p++ 类似于*（p++）
}
int main()
{
	int num = 0;

	Inc(&num);//重点

	printf("%d\n",num);
	return 0; 
}