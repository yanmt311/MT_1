#define _CRT_SECURE_NO_WARNINGS 1

//֪ʶ�㣺���鴫��

//case1:ð������
//case1��ʵ��һ�������������ð������
//������1��ð�������������ڵ�Ԫ�رȽ�
//     2����һ��ð������ ---ȷ�������
//        10��9��8��7��6��5��4��3��2��1
//        9��10��8��7��6��5��4��3��2��1
//        9��8��10��7��6��5��4��3��2��1
//        ....
//        9��8��7��6��5��4��3��2��1��10
//        
//      ��Ԫ�ظ���Ϊ10---����--9��
//      ��һ�˶Ա�9�Σ��ڶ���8�Σ�������7��...
//     3�����鴫��һ��������Ԫ�صĴ�С


//����1:һ�㷽��
//void BubbleSort(int arr[],int sz)//int arr[]----int* arr----������Ԫ�صĵ�ַ
//{
//	//ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{ 
//			//ð�������ʵ��
//			if (arr[j]>arr[j + 1])
//			{ 
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////��ӡ����
//void PrintfArr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//����һ��������
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//
//	//��������Ԫ�ظ����Ĵ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);//ֻ�ܽ���д���������У����鴫�δ���ȥ����������Ԫ�ص�ָ�룬����int sz = sizeof(arr) / sizeof(arr[0])�ں����ڲ�Ϊ1��sizeof(arr)Ϊ��Ԫ�ص�ַ����32λ��4���ֽ�
//
//	//������ӡ���麯��
//	PrintfArr(arr, sz);
//
//	//����һ��ð��������---������arr�ų�����
//	BubbleSort(arr,sz);
//
//	//������ӡ���麯��
//	PrintfArr(arr, sz);
//	return 0;
//}
//
////����2��ð�������Ż�---��������������Ż�
//void BubbleSort(int arr[], int sz)//int arr[]----int* arr----������Ԫ�صĵ�ַ
//{
//	//ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//ð�������ʵ��
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)//��һ��ð�������꣬��������Ԫ��û�н���������Ϊ��������
//		{
//			break;
//		}
//	}
//}
//
////��ӡ����
//void PrintfArr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//����һ��������
//	//int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//��������Ԫ�ظ����Ĵ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);//ֻ�ܽ���д���������У����鴫�δ���ȥ����������Ԫ�ص�ָ�룬����int sz = sizeof(arr) / sizeof(arr[0])�ں����ڲ�Ϊ1��sizeof(arr)Ϊ��Ԫ�ص�ַ����32λ��4���ֽ�
//
//	//������ӡ���麯��
//	PrintfArr(arr, sz);
//
//	//����һ��ð��������---������arr�ų�����
//	BubbleSort(arr, sz);
//
//	//������ӡ���麯��
//	PrintfArr(arr, sz);
//	return 0;
//}


//֪ʶ�㣺���������---���鴫��
//       ע�⣺1��sizeof(arr) --- sizeof(������) -  ��������ʾ�������飬--�����������������Ĵ�С����λΪ�ֽ�
//            2��&arr ---&������ - ��������ʾ�������飬--ȡ����������������׵�ַ��
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	printf("%p\n", arr); //��Ԫ�ص�ַ---32λ-4���ֽ�  64λ-8���ֽ�
//	printf("%p\n", &arr[0]);//Ԫ�صĵ�ַ
//	printf("%p\n", &arr);//��������ĵ�ַ---ֻ��ӡ��Ԫ�ص�ַ
//
//	printf("%p\n", arr+1); //��Ԫ�ص�ַ---32λ-4���ֽ�  64λ-8���ֽ�
//	printf("%p\n", &arr[0]+1);//Ԫ�صĵ�ַ
//	printf("%p\n", &arr+1);//��������ĵ�ַ---ֻ��ӡ��Ԫ�ص�ַ
//
//	printf("%d\n", sizeof(arr));//��������Ĵ�С ---10��Ԫ��*sizeof��int��= 40
//	printf("%d\n", sizeof(arr[0]));//����Ԫ�ص��ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//��������Ԫ�صĸ���
//
//	return 0;
//}

//case2�����ֲ�����������
#include <stdio.h>
int Binary_search(int arr[], int k, int sz)//int arr[] �ȼ��� int* arr
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int  mid = (left + right) / 2;//������ѭ�����ڲ�
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	//��left>rightʱ�������Ҳ���
	return -1;//��Ϊ�����±��д�0��ʼ��������-1��ʾ
}
int main()
{
	//����һ����������
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//ȷ�����ҵ�Ԫ��
	int k = 0;
	scanf("%d", &k);
	//��������Ԫ�ش�С
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = Binary_search(arr, k, sz);//���鴫��ʱ������ȥһ���������������ϴ���ȥ�����������Ԫ�صĵ�ַ &arr[0]�����鴫�η�������-�����Ԫ�صĵ�ַ
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���:%d\n", ret);
	}
	return 0;
}