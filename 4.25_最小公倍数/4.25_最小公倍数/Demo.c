#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
int main(void)
{
	int a, b;
	int i;
	printf("��������������");
	scanf("%d %d", &a, &b);
	//a > bʱa,b����
	if (a > b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	for (i = 1; i <= b; i++) //����С������
	{
		if (i * a % b == 0)
			break;
	}
	printf("%d\n", i * a);
	return 0;
}