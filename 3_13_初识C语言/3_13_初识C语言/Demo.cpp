#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//֪ʶ�㣺1�������ķ��ࣺ
//			1.1 ���泣���� ���涨��ĳ��� 3.12��1000
//          1.2 const ���εĳ������� const int a = 10;
//             ���䣺����Ĵ�С����Ϊ����
//               const int num = 10;
//               int arr[n] = {0};
//          1.3 #define ����ı�ʶ������: #define MAX 100(�������е�MAX����Ϊ100)
//          1.4 ö�ٳ���: ö��---�����ǿ���һһ�оٵĳ���
//							���Ա� ��male ��female ��secret
//        2��enum ö�ٵĹؼ���(�ص�����)��enum sex

//int main()
//{
//	const int a = 100;
//	//a = 20;//ע���ʱaλ�����������ٸı䡣
//	printf("%d\n", a);//100
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);//100
//	return 0;
//}

//����һ���Ա�ö�ٳ���
//enum sex
//{
//	//ö�ٳ���
//	male,
//	female,//ע��Ϊ����
//	secret
//
//};
//int main()
//{
//	enum sex s = male;
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//	return 0;
//}


//�ص�֪ʶ�㣺1���ַ�����˫���������һ���ַ�����Ϊ�ַ���
//        2���ַ����Ľ�����־��һ�� \0 ��ת���ַ����ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ������ݡ�
//        3������ACSII
//        4���ַ���%s���ַ�%c������%d��%p ��ӡ��ַ
//        5����ӡ�ַ�������strlen-----string length-----��ͷ�ļ�#include <string,h>
//        6���ر�ע��arr2[]
//        7��//"";//���ַ���


//#include <string.h>//�ַ�����ͷ�ļ�
//int main()
//{
//	char arr1[] = "abc" ;
//	char arr2[] = { 'a', 'b', 'c' };
//	char arr3[] = { 'a', 'b', 'c', 0 };
//	char arr4[] = { 'a', 'b', 'c','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//abc�������̣���Ϊ������\0����0Ϊ������־��û������\0ʱ��Ϊ���ֵ��\0��ACSIIֵ��0��
//	printf("%s\n", arr3);//abc
//	printf("%s\n", arr4);//abc
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//�����
//	printf("%d\n", strlen(arr3));//3
//	printf("%d\n", strlen(arr4));//3
//	return 0;
//}

//֪ʶ�㣺1��ת���ַ�
//        2����Ļ��ӡ�����ţ�����\';��Ļ�ϴ�ӡ˫���ţ�����\"
//        3��\ddd (ddd��ʾ1-3���˽������֣�ע�ⲻ�ܴ���8,\32)
//        4��\xdd��dd��ʾ2��ʮ���������֣�\x41��
//        5��printf("%c\n", '\32');//��8���Ƶ�32ת����10����������ΪASCII��ֵ������Ǹ��ַ�
//           printf("%c\n", '\x41');//��16���Ƶ�41ת����10��������4*16^1+1*16^0=65����ΪASCII��ֵ������Ǹ��ַ�


//��ӡһ��Ŀ¼���������ַ�������
//#include <string.h>
//int main()
//{
//	printf("c:\code\32\test.c\n");
//	printf("%d\n", strlen("c:\test\121"));//7
//	printf("%c\n", 'a');//a
//	printf("%c\n", '\'');//'
//	printf("%s\n", "abc");//abc
//	printf("%s\n", "\"");//"
//	return 0;
//}


//֪ʶ�㣺1���������Ǽ򻯴��룬���븴��

//��ҵ��������������������ֵ
//int Max(int x, int y)//�βΣ�ûʵ������
//{
//	int m = 0;
//	if (x > y)
//		m = x;
//	else 
//		m = y;
//	return m;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//��������������ĺ�
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//֪ʶ�㣺ѡ��ṹif����------------����ֻ��1/0����ֵ
//                   { };
//               else
//                   { };
//int main()
//{
//	int coding = 0;
//	printf("ѧϰ����ѡ��0/1��");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("home\n");
//	}
//	return 0;
//}



//֪ʶ�㣺ѭ���ṹ�� 1��while(���ʽ)
//                          ѭ�����
//                   2��for�����ʽ1�����ʽ2�����ʽ3��
//                          ѭ�����
//                   3��do
//                          ѭ�����
//                     while �����ʽ����

//int main()
//{
//	int line = 0;
//	while (line <= 20000)//��������ִ��ѭ����
//	{
//		line++;
//		printf("%d\n", line);
//	}
//	if (line>20000)
//	{
//		printf("����\n");
//	}
//	return 0;
//}


//֪ʶ�㣺1��c����ע�ͷ��/* */
//                 ����Ƕ��ע��
//        2��C++ע�ͷ��//


//֪ʶ�㣺1�����飺һ����ͬԪ�ص����ݵļ���
//        2����ӡ����
//        3�������С����Ϊ����
//        4���±��0��ʼ

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11 };
//	printf("%d\n", arr[0]);//��ӡ�����һ��Ԫ��
//
//	int i = 0;
//	while (i < 9)
//	{
//		printf("%2d", arr[i]);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}


//֪ʶ�㣺������

//������������+ - * / %,  /���Ϊ�̣�%���Ϊ����
//int main()
//{
//	int a = 5 % 2;
//	int b = 5 / 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//��λ��������>>,<<

//λ��������& | ^ ,��ʮ����ת��Ϊ�����ƺ��ٽ��а�λ& | ^
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;//��(2����)λ��
//	//011
//	//101
//	//001
//	printf("c = %d\n", c);
//
//	int d = a|b;//��λ��
//	//011
//	//101
//	//111
//	printf("d = %d\n", d);
//
//	int e = a^b;//��λ���
//	//011
//	//101
//	//110
//	printf("e = %d\n", e);
//	return 0;
//}


//��ֵ�������=��+=��-=��*=��/=��&=��|=��^=��>>=��<<=
//int main()
//{
//	int a = 0;//��������������ʼ��
//	a = 10;//��a��ֵ = ��ֵ������
//	a = a+1;//1
//	a += 1; //2
//	printf("a = %d\n", a);
//
//	//a = a-1;
//	//a-=1;
//	//printf("a = %d\n", a);
//
//	//a = a*10;
//	//a *= 10;
//	//printf("a = %d\n", a);
//
//	//a = a&1;
//	//a &= 1;
//	//printf("a = %d\n", a);
//	return 0;
//}


//��Ŀ��������ֻ��һ��������
//C��������α�ʾ��ٵ���?0 - ��ʾ�٣���0 - ��ʾ�� 1 -1 
//��������Ԫ�ظ�����int sz = sizeof(arr) / sizeof(arr[0]);
//ֱ�Ӽ��㣺printf("%d\n", sizeof(arr));�������Ϊ�����ֽ���

int main()
{
	//int a = 10;
	//int b = 20;
	//int c = a+b;//˫Ŀ��������������������

	//int a = 0;
	//printf("%d\n", !a);

	//int a = -10;
	//a = -a;

	int a = 10;
	printf("%d\n", sizeof(a));//������4 �ֽ�
	printf("%d\n", sizeof a);//4 �ֽ�
	printf("%d\n", sizeof(int));//��������Ҳ���Խ����ַ����ȵļ��㣬4���ֽ�

	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
	printf("%d\n", sizeof(arr));//10Ԫ��*4�ֽ�=40�ֽ�
	printf("%d\n", sz);//10Ԫ��
	return 0;
}