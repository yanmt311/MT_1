#define _CRT_SECURE_NO_WARNINGS 1


//do  while 

//����1 ���1-10
//#include<stdio.h>
//int main ()
//{
//	int i=1;
//	do
//	{
//		printf("%d ",i );
//		i++;
//	}while(i<=10);//Ϊ��ִ�У�Ϊ������
//	return 0;
//}


//continue ��do while �е�Ӧ��
//#include<stdio.h>
//int main ()
//{
//	int i=1;
//	do
//	{
//		if(5 == i)
//			continue;
//		printf("%d ",i );
//		i++;
//	}while(i<=10);//Ϊ��ִ�У�Ϊ������
//	return 0;
//}

//���Ϊ1 2 3 4��ѭ��


//break��do while �е�Ӧ��
#include<stdio.h>
int main ()
{
	int i=1;
	do
	{
		if(5 == i)
			break;
		printf("%d ",i );
		i++;
	}while(i<=10);//Ϊ��ִ�У�Ϊ������
	return 0;
}

//���Ϊ1 2 3 4