#define _CRT_SECURE_NO_WARNINGS 1

////����1 �������������е�����
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = {1,3,5,7,9};
//	int arr2[5] = {2,4,6,8,0};
//
//	/*int temp[5] = {0};
//	temp=arr1;
//	arr1=arr2;
//	arr2=temp;*/  //���ַ����������ǵ�ַ������ȷ
//	int temp = 0;
//	int i = 0;
//
//	for(i=0; i<5; i++)
//	{
//		temp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=temp;
//	}
//	
//
//	for(i=0; i<5; i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");//��ӡarr1
//
//
//
//	for(i=0; i<5; i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	printf("\n");//��ӡarr2
//
//	return 0;
//}
//
////����2 �������ý����������е�����
//
//#include<stdio.h>
//void printf_arr(int arr[5],int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d " ,arr[i]);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int arr1[5] = {1,3,5,7,9};
//	int arr2[5] = {2,4,6,8,0};
//	int temp = 0;
//	int i = 0;
//
//	for(i=0; i<5; i++)
//	{
//		temp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=temp;
//	}
//	
//	printf_arr(arr1,5);//����ֻд�����������
//	printf_arr(arr2,5);
//	return 0;
//}
//
////������Ԫ�صĸ���
//int sz = sizeof(arr1)/sizeof(arr1[0]); //Ԫ�ظ���
////sizeof(arr1)����������ܴ�С ������ֻ����������
////sizeof(arr1[0] ��һ��Ԫ�صĴ�С


//����3 ��Ԫ�ظ��������Ż����ı�Ԫ�ظ������������κα仯
#include<stdio.h>
void printf_arr(int arr[5],int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d " ,arr[i]);
	}
	printf("\n");

}
int main()
{
	int arr1[5] = {1,3,5,7,9};
	int arr2[5] = {2,4,6,8,0};
	int temp = 0;
	int i = 0;
	int sz = sizeof(arr1)/sizeof(arr1[0]);

	for(i=0; i<sz; i++)
	{
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
	
	printf_arr(arr1,sz);//����ֻд�����������
	printf_arr(arr2,sz);
	return 0;
}
