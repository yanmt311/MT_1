#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//������һ����ͬ����Ԫ�صļ���

//֪ʶ��1��һά����Ĵ���
//        ����Ԫ������ ������[�����С--�������ʽ]
//        ע�⣺����ʹ�ñ���
int main()
{
	//1
	int arr[10];
	//2
	int arr[4 + 4];
	//3--error
	int n = 5;
	int arr[n];//����ʹ�ñ���
	return 0;
}

//֪ʶ��2��һά����ĳ�ʼ��
int main()
{
	//1---����ȫ��ʼ��--ʣ���Ĭ�ϳ�ʼ��Ϊ0
	int arr[20] = { 1, 2, 3, 4 }; 
	//2---��ȫ��ʼ��
	int arr2[10] = { 0 };
	int arr3[5] = { 1, 2, 3, 4, 5 };
	//3---�ַ���ʼ��--������ASCII��
	char arr4[] = { 'a', 'b', 'c' };
	char arr5[] = { 'a', 'b', 99 };
	char arr6[] = "hello";

	//ע��sizeof---ֻ���������ռ�ļ��㣬��λ���ֽڣ�sizeof�����ͣ�*����Ԫ�ظ���---����Ԫ�ظ�������\0
	//            char---1��int---4��double---8
	//    strlen---ֻ�Ǽ���Ԫ�ظ�������\0��ֹ������һֱ����Ѱ��\0
	printf("%d\n", strlen(arr5));//���ֵ---û��\0
	printf("%d\n", strlen(arr6));//5---5��Ԫ��
	printf("%d\n", sizeof(arr5));//3--3��Ԫ��*sizeof(char)= 3
	printf("%d\n", sizeof(arr6));//6--6��Ԫ�أ�����\0��*sizeof(char) = 6
	return 0;
}

//֪ʶ��3��һά�����ʹ��---�����±��0��ʼ
//case1:��ӡ�����е�Ԫ��
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//��ӡ�����е�ĳ��Ԫ��
	printf("arr1[3] = %d\n", arr1[3]);

	//��ӡ��������Ԫ�ظ���
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		printf("arr1[%d] = %d \n", i,arr1[i]);
	}
	return 0;
}

//֪ʶ��4��һά�������ڴ��еĴ洢
//case1:��ӡ����Ԫ�ص�ַ
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);//%p - ��ӡ��ַ---&arr[i]--һ��Ҫ�е�ַ����
	}
	return 0;
}
//������������ڵ�ַ����ĸ��ֽ�-- - ���������±��������Ԫ�صĵ�ַ��Ҳ���й��ɵĵ���
//�������ڴ�����������ŵ�
//& arr[0] = 004FF7F4
//& arr[1] = 004FF7F8
//& arr[3] = 004FF800
//& arr[4] = 004FF804
//& arr[5] = 004FF808
//& arr[7] = 004FF810
//& arr[8] = 004FF814
//& arr[9] = 004FF818

//case2�����ݴ�ӡ������Ԫ�ص�ַ��ӡ����Ԫ��---*---��Ӧ��
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int* p = arr;//p�����arr�еĵ�ַ
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", *p);//*p--��arr�е�����Ԫ��
		p++;//��ַ��1����ӦԪ�ؾ͵�����---*p++---Ԫ�ظ����ĵ���--û�б�Ҫ
	}
	printf("\n");
	return 0;
}

