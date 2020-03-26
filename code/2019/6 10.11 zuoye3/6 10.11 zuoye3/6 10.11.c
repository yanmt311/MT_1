#define _CRT_SECURE_NO_WARNINGS 1

//程序 输出a+aa+aaa+aaaa+...+aaaaaaaaa....

#include <stdio.h>
int main()
{
	int a = 0;
	int n = 0;//项数
	int i = 0;
	int sum = 0;
	int temp = 0;
	
	printf("请输入a和n:");
	scanf("%d%d",&a,&n);

	for(i=0; i<n; i++)
	{
		//产生一项，然后相加

		temp = temp*10+a;
		sum += temp;

	}
	printf("sum = %d\n",sum);
	return 0;
}
