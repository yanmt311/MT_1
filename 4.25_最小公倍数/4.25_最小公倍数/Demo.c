#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
int main(void)
{
	int a, b;
	int i;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	//a > b时a,b交换
	if (a > b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	for (i = 1; i <= b; i++) //找最小公倍数
	{
		if (i * a % b == 0)
			break;
	}
	printf("%d\n", i * a);
	return 0;
}