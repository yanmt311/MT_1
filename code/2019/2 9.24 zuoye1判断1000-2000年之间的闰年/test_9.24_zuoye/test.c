#define _CRT_SECURE_NO_WARNINGS 1

//�ж�1000-2000��֮�������


//#include <stdio.h>
//
//int main ()
//
//{
// int year=0;
// int count=0;
// for(year=1000;year<=2000;year++)
// {
//	//�ж�����
//	 if(year%4==0)
//	 {
//		if(year%100!=0)
//		{
//			count++;
//		printf("%d ",year);
//		}
//	 }//��һ��������ܱ�4�����������ܱ�100����
//
//
//	if(year%400==0)
//	{
//	count++;
//	printf("%d ",year);
//	}//�ڶ���������ܱ�400����
//	
//	//�������Ϊ��Ĺ�ϵ��������else�����������2000��1600��1200���������
//	//if(year%4==0)
//	// {
//	//	if(year%100!=0)
//	//	{
//	//		count++;
//	//	printf("%d ",year);
//	//	}
//	// }//��һ��������ܱ�4�����������ܱ�100����
//	//else(year%400==0)
//	//{
//	//count++;
//	//printf("%d ",year);
//	//}
//
// }
//printf("\ncount=%d\n",count);
//return 0;
//}

//�Ż�1

#include<stdio.h>

int main ()
{
	int year=0;
	int count=0;
	for(year=1000;year<=2000;year++)
	{
		if(((year%4==0)&&(year%100!=0))||(year%400==0))
		{
			count++;
			printf("%d  ",year);
			
		}
	
	}
printf("\ncount=%d\n",count);//����
return 0;
}

