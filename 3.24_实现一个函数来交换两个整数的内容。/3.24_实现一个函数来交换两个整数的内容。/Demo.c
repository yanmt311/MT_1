#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�������������������������ݡ�
//����һ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int temp = 0;
//
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//��������
//��ֵ����---�������
//ԭ�򣺴�ֵ���ã��������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//     �β�ʵ������ֻ��ʵ�ε�һ����ʱ����
//#include <stdio.h>
//int swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//
//}

//��ַ����---�޸Ĵ���
//     ��ַ�����ǰѺ����ⲿ�����������ڴ��ַ ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
//     �����ú����ͺ�����ߵı����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���
//     �����ڲ��޸�ʵ��ʱ������Ҫ��ַ����

//��⣺
//int main()
//{
//	int a = 10;
//	int* pa = &a;//��a�ĵ�ַ���ڿ��ٵ��¿ռ�pa�� 
//	*pa = 20;//*pa---��Ӧ�ã�*pa--�ȼ���a��ͨ�����ҵ�a�ĵ�ַѰ�ҵ�a��ֵ������20��ֵ��a
//	printf("a = %d\n", a);
//	return 0;
//}

#include <stdio.h>
int swap(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;//temp = a;
	*pa = *pb;//a = b
	*pb = temp;// b = temp
	return 0;
}
int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a = %d,b = %d\n", a, b);
	return 0;
}
