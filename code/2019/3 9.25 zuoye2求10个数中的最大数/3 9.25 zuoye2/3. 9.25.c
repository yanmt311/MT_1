#define _CRT_SECURE_NO_WARNINGS 1
//
////��10�����е������
//
//#include <stdio.h>
//int main ()
//{	
//	int arr[10]={0};
//	int i=0;
//	int max=0;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);//����10�������뵽������
//	}
//	
//	//ʮ�ν��бȽ�
//	for (i=0;i<10;i++)
//	{
//		if(arr[i]>max)
//			max=arr[i];
//	}
//
//	printf("max=%d\n",max);
//	return 0;
//}
//ȱ�㣺������ô�죬�������Ϊ�����������ֵΪ0�����ڶ�����int max=0


//������
#include <stdio.h>
int main ()
{	
	int arr[10]={0};
	int i=0;
	int max=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);//����10�������뵽������
	}
	
	max=arr[0];//���������еĵ�һ����Ϊ���ֵ�����������е�����һ��Ԫ��Ϊ���ֵ
	
	//ʮ�ν��бȽ�
	for (i=0;i<10;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}

	printf("max=%d\n",max);
	return 0;
}

//ע����ԣ���������һ�Σ���������һ�Σ������������һ��