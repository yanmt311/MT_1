#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ֪ʶ�㣺1��main�����ǳ������ڡ���һ������ֻ��һ��
//		   2��printf = print + function ��ӡ����������������Ļ�ϴ�ӡ����  
//         3��stdio = standard + input + output��׼�������ͷ�ļ�

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//֪ʶ�㣺1��scanf ��VS����Ҫ�ڵ�һ�м���#define _CRT_SECURE_NO_WARNINGS 1
//        2��int sum = 0;  �������ʱ��Ҫ�ڿ�ͷ������ȫ

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("����������������");
//	scanf("%d %d", &num1, &num2);
//	printf("num1 = %d,num2 = %d\n", num1, num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//֪ʶ�㣺1���ֲ����������ڱ������ڵľֲ���Χ��ȫ�ֱ������ùᴩ��������
//        2���ֲ�������ȫ�ֱ���ͬ��ʱ��ȫ�ֱ�������
//        3����������Ǳ�����ִ�еĴ��뷶Χ
//        4��������������ʱ�����Ĵ���������֮���һ��ʱ���
//        5��������ڲ�����ı���-�ֲ�����
//           �ڴ����֮�ⶨ��ı���-ȫ������
//        6��extern int g_val;

//int a1 = 3;;
//int main()
//{
//	int a = 1;
//	int a1 = 4;
//	printf("a = %d,a1 = %d\n", a,a1);
//	return 0;
//}

//��������
//int main()
//{
//	{
//		//�ֲ�����ֻ���ھֲ��������ʹ�� 
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	//����ʹ��
//	printf("a = %d\n", a);
//	return  0;
//}

//������1���ֲ������������򣺾ֲ��������ڵľֲ���Χ-�����
//        2��ȫ�ֱ�����������ȫ�ֱ���������������������

//�ֲ�����
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("a = %d\n", a);
//	return 0;
//}

//ȫ�ֱ���
//int num = 1000;
//void test()
//{
//	printf("3:num = %d\n", num);
//}
//int main()
//{
//	printf("1:num = %d\n", num);
//	{
//		printf("2:num = %d\n", num);
//	}
//	test();
//	return 0;
//}

//���䣺����һ���ⲿ��ʶ��
//extern int g_val;
//int main()
//{
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//֪ʶ�㣺1���������͵Ĵ�С
//		  2��bit--byte--kb--mb--gb--tb--pb(1���ֽ�8��bitλ������1024)
//int main()
//{
//	printf("%d\n",sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4(32bit)/8(64bit)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double ));//8
//	printf("%d\n", sizeof(long double));//8
//	return 0;
//}

//��� - 180 - ����
//���� 49.6  - С��-������ 
//���� - lily
int main()
{
	float weight = 49.5f;//double
	printf("weight = %f\n", weight);
	double salary = 10000.0;//8�ֽ� - salary�������ڴ�����8���ֽڵĿռ䣬�������10000.0
	return 0;
}








