#define _CRT_SECURE_NO_WARNINGS 1

//֪ʶ��1���⺯����ѧϰ
//     1��c�����еĿ⺯����IO�������ַ��������������ַ������������ڴ����������ʱ��/���ڲ�����������ѧ����
//     2��ʹ�ÿ⺯����������� #include ��Ӧ��ͷ�ļ���

//1.1 strcpy--string copy---�ַ�������---�ַ���������
//char * strcpy ( char * destination, const char * source );
//Ϊ�˱��������Ŀ��ָ�������Ĵ�СӦ���㹻�����԰�����Դ��ͬ��C�ַ���(������ֹnull�ַ�)���������ڴ��в�Ӧ����Դ�ص���
//��sourceָ���C�ַ������Ƶ�destinationָ��������У�������ֹ�Ŀ��ַ������ڸ�λ��ֹͣ����
//destination��ָ��Ҫ�������ݵ�Ŀ�������ָ�롣
//source��Ҫ���Ƶ�C�ַ�����

//case1��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "Sample string");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}
//�����Sample string��Sample string��Sample string

//case2��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "***********";
//	char arr2[] = "YMT";
//	strcpy(arr1, arr2);
//	printf("arr1: %s\narr2: %s\n", arr1, arr2); //YMT\0 *******,��\0����
//	return 0;
//}

//1.2 memset--memory set---�ڴ�����---�ڴ��������
//void * memset ( void * ptr, int value, size_t num );
//��ptrָ����ڴ���ǰnum���ֽ�����Ϊָ��ֵ������Ϊ�޷����ַ���
//ptr��ָ��Ҫ�����ڴ���ָ��
//value:Ҫ���õ�ֵ����ֵ��Ϊ�������ݣ����Ǹú���ʹ�ø�ֵ���޷���charת��������ڴ��
//num��Ҫ����Ϊ��ֵ���ֽ�����size_t���޷����������͡�

//case1��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}

//case2��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "***********";
//	memset(arr1, 'T', 5);
//	printf("arr1: %s\n", arr1); 
//	return 0;
//}

//1.3 strcat --- �����ַ���
//char * strcat ( char * destination, const char * source );
//��Դ�ַ����ĸ������ӵ�Ŀ���ַ�����Ŀ�ĵ��е���ֹ���ַ���Դ�ĵ�һ���ַ����ǣ�
//������Ŀ�ĵ��е������ַ������γɵ����ַ�����ĩβ����һ�����ַ���
//destination��ָ��Ŀ�������ָ�룬������Ӧ�ð���һ��C�ַ����������㹻�󣬿��԰������������Ľ���ַ�����
//source��Ҫ���ӵ�C�ַ������ⲻӦ��Ŀ�ĵ��ص���

//case��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[80];
//	strcpy(str, "these ");
//	strcat(str, "strings ");
//	strcat(str, "are ");
//	strcat(str, "concatenated.");
//	puts(str);
//	return 0;
//}

//֪ʶ��2���Զ��庯��
//      1���Զ��庯��---������������ֵ���͡�����������������
//2.1 дһ������ʵ���������е����ֵ
//int get_max(int x, int y)
//{
//	return ((x > y) ? x : y);
//}
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	printf("��������������");
//	scanf("%d%d", &input1, &input2);
//	int max = get_max(input1, input2);
//	printf("%d\n", max);
//	return 0;
//}
//2.2 дһ�����������������ͱ���������
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
//
//#include <stdio.h>
//int swap(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;//temp = a;
//	*pa = *pb;//a = b
//	*pb = temp;// b = temp
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//֪ʶ��3���β���ʵ��
//ʵ�ʲ�����1����ʵ���������Ĳ�������ʵ�Ρ�
//         2��ʵ�ο����ǣ����������������ʽ�������ȡ�
//         3������ʵ���Ǻ������͵������ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ���Ա㽫��Щֵ�����β�

//��ʽ������1����ʽ������ָ�������������еı�����
//         2����ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ��---- ��ʽ������
//         3����ʽ�����������������֮����Զ������ˣ���ʽ����ֻ�ں�������Ч��
//         4���β�ʵ������ʵ�ε�һ����ʱ����


//֪ʶ��4��������Ƕ��ʹ��
//case:
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//�����hehe hehe hehe ������hehe��

//֪ʶ��5����������ʽ����---��һ�������ķ���ֵ��Ϊ����һ�������Ĳ�����
//5.1 strlen����ʽ����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = "hello";
//	//int ret = strlen(arr);
//	int len = strlen(strcat(arr, "word"));
//	//printf("%d\n", ret);
//	printf("%d\n", len);
//	return 0;
//}

//5.2 printf�ķ���ֵ---�����е�ÿһ�������ش�ӡ���ַ�����������ִ����򷵻�һ����ֵ��
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", printf("%d", printf("%d", 43)));
//	return 0;
//}
//���������4321--43�����ַ�--2һ���ַ�--1----4321

//֪ʶ��6�������������Ͷ���
//       1���������������߱�������һ��������ʲô��������ʲô������������ʲô��
//          ע�⣺����Ҫ������������ʹ��
//                ����������һ��Ҫ����ͷ�ļ���
//       2���������壺�����ľ���ʵ�֣����������Ĺ���ʵ��

//case:
//#include <stdio.h>
////��������
//int get_max(int x, int y);
//
////��������
//int get_max(int x, int y)
//{
//	return ((x > y) ? x : y);
//}
//
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	printf("��������������");
//	scanf("%d%d", &input1, &input2);
//	int max = get_max(input1, input2);//��������
//	printf("%d\n", max);
//	return 0;
//}

//֪ʶ��7����������
//7.1 ��ֵ���ã��������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��

//7.2 ��ַ���ã��������ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
//             �����ú����ͺ�����ߵı�����������������ϵ��--- �����ڲ�����ֱ�Ӳ��������ⲿ�ı���


//������ϰ��
//1.1 ����ʵ���ж�һ�����Ƿ�Ϊ����
//����1��
//#include <stdio.h>
////1.1---���庯������ʱ���ò�ͬ�ı���---Ϊn
//int is_prime(int n)
//{
//	//���� 2 --- n-1��������n%i==0 ��������������0����������������1
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
////1.2---���庯������ʱ��ʹ����ͬ�ı���---��Ϊi
////int is_prime(int i)
////{
////	//���� 2 --- n-1��������n%i==0 ��������������0����������������1
////	int n = 0;
////	for (n = 2; n < i; n++)
////	{
////		if (i%n == 0)
////		{
////			return 0;
////		}
////	}
////	return 1;
////}
//int main()
//{
//	//��ӡ1-100����
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//i==1����������
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}

//��������
//#include <math.h>
//#include <stdio.h>
//int is_prime(int n)
//{
//	//���� 2 --- n-1��������n%i==0 ��������������0����������������1
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	//ֻ��һ����������ǲ�����forѭ��
//	return 1;
//}
//int main()
//{
//	//��ӡ1-100����
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//i==1����������
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}
//
////��������
//#include <math.h>
//#include <stdio.h>
//int is_prime(int n)
//{
//	//���� 2 --- n-1��������n%i==0 ��������������0����������������1
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	//ֻ��һ����������ǲ�����forѭ��
//	return 1;
//}
//int main()
//{
//	//��ӡ1-100����
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 201; i += 2)
//	{
//		if (is_prime(i) == 1)//i==1����������
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}

//1.2 ����ʵ���ж�һ���ǲ�������
//#include <stdio.h>
//int Is_leap_year(int y)
//{
//	/*if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
//	{
//	return 1;
//	}
//	else
//	{
//	return 0;
//	}*/
//	return ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
//}
//int main()
//{
//	//����һ��year
//	int year = 0;
//	printf("��������ݣ�");
//	scanf("%d", &year);
//
//	if (Is_leap_year(year) == 1)
//	{
//		printf("%d������ ", year);
//	}
//	else
//	{
//		printf("%d��������", year);
//	}
//	return 0;
//}

//ͳ��1000-2000֮�������
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;//��ֻ�����ֽ������/����---�����귵��1���������귵��0
//	}
//	else
//	{
//		return 0;
//	}
//	//return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	//����1000-2000
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)//year == 1��������
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//1.3 ����ʵ��һ��������������Ķ��ֲ���
//#include <stdio.h>
//int Binary_search(int arr[], int k, int sz)//int arr[] �ȼ��� int* arr
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int  mid = (left + right) / 2;//������ѭ�����ڲ�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//��left>rightʱ�������Ҳ���
//	return -1;//��Ϊ�����±��д�0��ʼ��������-1��ʾ
//}
//int main()
//{
//	//����һ����������
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//ȷ�����ҵ�Ԫ��
//	int k = 0;
//	scanf("%d", &k);
//	//��������Ԫ�ش�С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Binary_search(arr,k,sz);//���鴫��ʱ������ȥһ���������������ϴ���ȥ�����������Ԫ�صĵ�ַ &arr[0]�����鴫�η�������-�����Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}

//1.4 ����ÿ����һ�������������num��ֵ����1
void Add(int* p)
{
	(*p)++;//*p = num -----�ȼ���num++
}

int main()
{
	int num = 0;
	Add(&num);//�ı�ʵ�ε�ֵ������ַ����
	printf("%d\n", num);//1
	Add(&num);
	printf("%d\n", num);//2

	return 0;
}