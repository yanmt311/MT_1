#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//case1:n!
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//���ÿ�����Ľ׳�
//	//3! = 3*2!
//	int i = 0;
//	int ret = 1;//���ܴ�0��ʼ��0���κ���Ϊ0
//	for (i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	printf("%d! = %d\n",num, ret);
//	return 0;
//}

//case2:1!+2!+3!+...+n!
//1!+2!+3! = 1+2+6 =9
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	int ret = 1;
	int j = 0;
	int sum = 0;
	//���1-n����
	for (j = 1; j <= num; j++)
	{
		//���n��
		int ret = 1;//��������ret = 1 ---�����ÿ��ret�ĵ��� 3!=15 ---��һ��1���ڶ���1*2=2 ������2*6=12
		for (i = 1; i <= j; i++)
		{
			
			ret *= i;
		}
		sum += ret;
	}
	
	printf("%d\n", sum);
	return 0;
}

//�Ż���