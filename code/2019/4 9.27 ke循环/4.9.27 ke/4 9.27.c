#define _CRT_SECURE_NO_WARNINGS 1


//for��continue�����������֣��ٵ�ѭ�����֣�while��continue����ѭ������

////ѭ��
////whileѭ��
////����1  ��ӡ1-10
//#include <stdio.h>
//int main()
//{
//	int i=1;//��ʼ��
//	while(i<=10)//�ж�
//	{
//		printf("%d ",i);
//		i++;//����
//	}
//	return 0;
//}
////������Ϊ1 2 3 4 5 6 7 8 9 10



////����2 ע��break
//#include <stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			break;//��ֹwhile�����õ�ѭ��
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
////������Ϊ��1 2 3 4



////����3 ע��continue
//#include <stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			continue;//��ֹwhile�б���ѭ����ֱ������while����һ��ѭ��
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
////������Ϊ��1 2 3 4 ����������ѭ��



////forѭ��
////����4 
//#include<stdio.h>
//int main ()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}

////����5 break
//#include<stdio.h>
//int main ()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			break;
//		printf("%d\n",i);
//	}
//	return 0;
//}
////���Ϊ1 2 3 4

////����6
//#include<stdio.h>
//int main ()
//{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			continue;//����5��ִ��i++
//		printf("%d\n",i);
//	}
//	return 0;
//}
////���Ϊ1 2 3 4 6 7 8 9 10

////����7 
//#include<stdio.h>
//#include <windows.h>
//int main ()
//{
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		Sleep(1000);
//		printf("%d\n",i);
//		i=0;
//	}
//	return 0;
//}
//
////���Ϊ0 1 1...1



//����8
#include<stdio.h>
int main ()
{
	int i=0;
	int arr[10]={0};
	for(i=0;i<=13;i++)
	{
		printf("hehe\n");
		arr[i]=0;
	}
	return 0;
}

//���Ϊ��hehe��ѭ��

