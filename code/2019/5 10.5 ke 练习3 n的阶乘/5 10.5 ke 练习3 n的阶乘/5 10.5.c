#define _CRT_SECURE_NO_WARNINGS 1


//��n�Ľ׳�
#include<stdio.h>
int main ()
{
	int i = 0;
	int n = 0;
	int ret = 1;//�׳˴�1��ʼ
	scanf("%d",&n);//����һ��n����

	for(i=1; i<=n; i++)
	{
		ret=ret*i;
	}
	printf("ret =%d!= %d\n",n,ret);
	return 0;
}