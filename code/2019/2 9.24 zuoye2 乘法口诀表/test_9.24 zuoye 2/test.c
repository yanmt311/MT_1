#define _CRT_SECURE_NO_WARNINGS 1

//�˷��ھ���

#include <stdio.h>

int main()
{
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9

int i=0;
for(i=1;i<=9;i++)//��
	{
		//��ӡһ��
		int j=0;
		for(j=1;j<=i;j++)//��
		{
			printf("%d*%d=%-2d",i,j,i*j);//�����Ϊ-2d���Ҷ���Ϊ2d�����㣩
		}
		printf("\n");
	}
return 0;
}
