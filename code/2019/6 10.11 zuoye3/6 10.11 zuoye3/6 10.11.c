#define _CRT_SECURE_NO_WARNINGS 1

//���� ���a+aa+aaa+aaaa+...+aaaaaaaaa....

#include <stdio.h>
int main()
{
	int a = 0;
	int n = 0;//����
	int i = 0;
	int sum = 0;
	int temp = 0;
	
	printf("������a��n:");
	scanf("%d%d",&a,&n);

	for(i=0; i<n; i++)
	{
		//����һ�Ȼ�����

		temp = temp*10+a;
		sum += temp;

	}
	printf("sum = %d\n",sum);
	return 0;
}
