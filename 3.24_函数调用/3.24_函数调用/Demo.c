#define _CRT_SECURE_NO_WARNINGS 1

#include "add.h"
#include "sub.h"

int main()
{
	int a = 10;
	int b = 20;
	//函数的调用
	int c = Sub(a, b);
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	printf("c = %d\n", c);
	return 0;
}
