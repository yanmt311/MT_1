#define _CRT_SECURE_NO_WARNINGS 1

////����1 whileѭ��
//
//#include <stdio.h>
//int main()
//{
//int line=0;
//printf("1\n");
//
//while(line<=20000)
//{
//	printf("д����\n");
//	line++;
//}
//
//if(line>20000)
//{
//	printf("�ҹ���\n")
//}
//
//return 0;
//}


////����2 �����ĵ���
//
//#include<stdio.h>
//
//int add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//
//}
//
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum=0;
//	printf("������������");
//	scanf("%d%d",&num1,&num2);
//
//	//sum=sum1+sum2;
//
//	//���ú���������
//	sum=add(num1,num2);
//
//	printf("sum=%d\n",sum);
//	return 0;
//
//}


////����3  �����뺯��
//
//#include<stdio.h>
//
////���ú���������
//void print_arr(int arr[10],int size)
//{	
//	int i=0;
//	for(i=0;i<size;i++)//i��0��9,�����±�
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int arr[10]={0};
//	int i=0;
//	////������������
//	//for(i=0;i<10;i++)//i��0��9,�����±�
//	//{
//	//	printf("%d ",arr[i]);
//	//}
//	//printf("\n");
//	//
//	
//
//	print_arr(arr,10);//arr������������10�������
//
//	//�������������
//	for(i=0;i<10;i++)//i��0��9,�����±�
//	{
//		scanf("%d",&arr[i]);//ע��%d��Ҫ���ո� �������ʱ��Ҫ���ո�
//	}
//
//	print_arr(arr,10);//�滻���е����
//
//	////�������������
//	//for(i=0;i<10;i++)//i��0��9,�����±�
//	//{
//	//	printf("%d ",arr[i]);
//	//}
//
//	printf("\n");
//
//
//	return 0;
//}


//����4 ����������

#include<stdio.h>

int main()
{
	int num=15;
	//8 4 2 1
	//int ��4���ֽڣ��ܹ�32����λ
	//15�Ķ����� 00000000 00000000 00000000 00001111
	//num=num>>1;//>>���ƣ�<<����
	// 0 00000000 00000000 00000000 0000111 Ϊ7
	//������λ��0��������λ��1
	  num=num<<1;
	  //num<<=1;
	//0000000 00000000 00000000 00001111 0
	printf("%d\n",num);
	return 0;
}