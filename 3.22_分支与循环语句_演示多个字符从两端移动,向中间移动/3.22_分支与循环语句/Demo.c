#define _CRT_SECURE_NO_WARNINGS 1

//��д���룬��ʾ����ַ��������ƶ�,���м��ƶ�
//����;I belive you!!
//     **************
//     1��������������
//     2����������Ԫ�ظ���
//     3����������±������±�
//     4������1�����±�Ԫ���滻����2�����±�Ԫ�أ�����1�����±�Ԫ���滻����2�����±�Ԫ�أ�
//     5��ѭ��ʵ�ִ����м俿£

//����һ��ʹ��sizeof��������Ԫ�ظ���
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "I belive you!!";//ע����char����
//	char arr2[] = "**************";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//sz = sizeof(arr1) / sizeof(arr1[0])��sz = sizeof(arr1) / sizeof(char)��ͬ����������Σ���Ҫ�޸ģ����Ƽ�ʹ��
//	int left = 0;
//	int right = sz - 2;//��������Ԫ�ظ���ʱ������\0������־��������right = sz - 2��char arr[] = "bit";//bit\0;�ܹ�4��Ԫ�أ��±�ʱ������\0,
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯�ߺ���-��λ:����
//		system("cls");//ִ��ϵͳ����--cls:������Ļ��Ϣ,Ϊ�˸��õ���ʾ��һ��;�ǵ�����ͷ�ļ�#include <windows.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��������ʹ��strlen
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "I belive you!!";//ע����char����
//	char arr2[] = "**************";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;//�����ַ�������ʱ��������\0������־��������right = len - 1
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯�ߺ���-��λ:���룬Sleep��д
//		system("cls");//ִ��ϵͳ����--cls:������Ļ��Ϣ,Ϊ�˸��õ���ʾ��һ��
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��������forѭ��ʵ��
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	char arr1[] = "I belive you!!";//ע����char����
	char arr2[] = "**************";
	int len = strlen(arr1);
	int left = 0;
	int right = len - 1;//�����ַ�������ʱ��������\0������־��������right = len - 1
	for (left = 0, right = len - 1; left <= right; left++, right--)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//˯�ߺ���-��λ:����
		system("cls");//ִ��ϵͳ����--cls:������Ļ��Ϣ,Ϊ�˸��õ���ʾ��һ��
	}
	printf("%s\n", arr2);
	return 0;
}