#define _CRT_SECURE_NO_WARNINGS 1




//����1 ȫ�����1/1+1/2+1/3....+1/100
//
////����1 
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for(i=1; i<=100; i++)
//	{
//		sum += 1/i;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
////���Ϊ1 ������Ϊ1/1=1 1/2=0 1/3=0
////����int ���Ϊint 
////������ֻҪ����һ��Ϊ�����ͼ���



////����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	for(i=1; i<=100; i++)
//	{
//		sum += 1.0/i;//1.0���㣬�޸�sum=0��Ϊ���㣬���%d��Ϊ%lf
//	}
//	printf("%lf\n",sum);
//	return 0;
//}



//����3 ����1/1-1/2+1/3-1/4+1/5...+1/99-1/100
#include <stdio.h>
int main()
{
	int i = 0;
	float sum = 0;
	int flag = 1;//Ϊ�˱����
	for(i=1; i<=100; i++)
	{
		sum += flag*1.0/i;
		flag = -flag;
	}
	printf("%lf\n",sum);
	return 0;
}