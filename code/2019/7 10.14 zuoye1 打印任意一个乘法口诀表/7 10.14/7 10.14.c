#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ����������ӡ�˷��ھ��� ����9��9*9�˷��ھ�������12��12*12�˷��ھ���


#include <stdio.h>

void printf_table (int n)
{
	int i = 0;
	//���ƶ�����
	for(i=1; i<=n; i++)//n��������
	{
		int j = 0;
		//����ÿһ��
		for(j=1; j<=i; j++)//i����ÿһ��
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}

}

int main()
{
	int line = 0;
	scanf("%d",&line);//��������ȷ����
	printf_table(line);//��ӡ�˷��ھ�����
	return 0;
}