#define _CRT_SECURE_NO_WARNINGS 1
//
////求10个数中的最大数
//
//#include <stdio.h>
//int main ()
//{	
//	int arr[10]={0};
//	int i=0;
//	int max=0;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);//输入10个数输入到数组中
//	}
//	
//	//十次进行比较
//	for (i=0;i<10;i++)
//	{
//		if(arr[i]>max)
//			max=arr[i];
//	}
//
//	printf("max=%d\n",max);
//	return 0;
//}
//缺点：负数怎么办，若输入均为负数，则最大值为0，由于定义了int max=0


//改正：
#include <stdio.h>
int main ()
{	
	int arr[10]={0};
	int i=0;
	int max=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);//输入10个数输入到数组中
	}
	
	max=arr[0];//假设数组中的第一个数为最大值，或者数组中的任意一个元素为最大值
	
	//十次进行比较
	for (i=0;i<10;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}

	printf("max=%d\n",max);
	return 0;
}

//注意测试：正数测试一次，负数测试一次，正负数交替测一次