#define _CRT_SECURE_NO_WARNINGS 1


//�����������һ����

////����1  ���ַ�
//#include<stdio.h>
//int main ()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 7;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	while(left<=right)//ע��һ���� С�ڵ���
//	{
//		
//		//int mid = (left+right)/2;//���Ƚϴ�ʱ�Ͳ�׼ȷ��
//		int mid = left+(right-left)/2;
//		if(arr[mid] < key)//��������±�
//		{
//			left = mid+1;
//
//		}	
//		else if(arr[mid] > key)
//		{
//			right =mid-1;
//		}
//		else if(arr[mid] = key) 
//		{
//			break;
//		}
//	}
//	if(left<=right)
//	{
//		printf("�ҵ���\n");
//	}
//	else 
//	{
//		printf("δ�ҵ�\n");
//	}
//	return 0;
//}




//����2 ���ֲ��� �������㷨
#include<stdio.h>
int BinarySearch(int arr[],int key,int sz)
{
	int left = 0;
	int right = sz-1;

	while(left<=right)//ע��һ���� С�ڵ���
	{
		
		//int mid = (left+right)/2;//���Ƚϴ�ʱ�Ͳ�׼ȷ��
		int mid = left+(right-left)/2;
		if(arr[mid] < key)//��������±�
		{
			left = mid+1;

		}	
		else if(arr[mid] > key)
		{
			right =mid-1;
		}
		else if(arr[mid] = key) 
		{
			return mid;
		}
	}
	return -1;
}
int main ()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int key = 7;
	int ret = 0;//�����Ҳ����ķ���ֵ
	int sz = sizeof(arr)/sizeof(arr[0]);//Ԫ�ظ���
	ret = BinarySearch(arr,key,sz);

	if(ret == -1)
	{
		printf("δ�ҵ�\n");
	}
	else 
	{
		printf("�ҵ���:%d  \n",ret);//ret ���±�
	}

	return 0;
}
