#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�ݹ飺1���ݹ����--ջ���--�ڴ�ռ�����
//     2��˼�룺���»�С---��������ı��
//     3����Ҫ���������������������������������������ʱ�򣬵ݹ�㲻�ټ���
//                 ÿ�εݹ����֮��Խ��Խ�ӽ������������

//case1������һ���޷������Σ�����˳���ӡ������ÿһλ
//������1���޷�������--unsigned int
//     2��˳���ӡ--123
//     3��123/10=12  123%10=3
//        12/10=1    12%10=2
//        1/10=0     1%10=1
//     4���ݹ麯��---Sequential_printing---S_print
//        S_print(123)
//        S_print(12)+3
//        S_print(1)+2+3
//        1+2+3
//        ����9�����ú�����С��9��ֱ�Ӵ�ӡ / n%10
//void S_print(unsigned int n)//ֻ�Ǵ�ӡ�����Կ�����
//{
//	if (n > 9)
//	{
//		S_print(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//	{
//		printf("%d ", n % 10);
//	}
//
//	/*if (n > 9)
//	{
//		S_print(n / 10);
//	}
//	printf("%d ", n % 10);*/
//
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("������һ����������");
//	scanf("%d", &num);
//	S_print(num);
//	return 0;
//}

//case2����д��������������ʱ���������ַ����ĳ��ȣ��ݹ�ͷǵݹ�ֱ�ʵ��strlen��
//����һ���ݹ�
//������1����\0��ֹ��������Ѱ��\0,hello----hello\0
//     2��������������������ʵ���������Ԫ�ص�ַ������ֻ��Ҫ���յ�һ���ַ�����Ϊ\0������ַ��������ݹ��ֹ
//     3��String_length��hello��
//        1+String_length��ello��
//        1+1+String_length��llo��
//        1+1+1+String_length��lo��
//        1+1+1+1+String_length��o��
//        1+1+1+1+1+String_length��\0��
//     4��strlen---������\0
//     5������\0�ͽ���Ѱ��---hello��Ϊhe\0llo�������Ϊ2

//int String_length(char* arr)//�����ַ������ȣ�Ϊ����
//{
//	if (*arr != '\0')
//	{
//		return 1 + String_length(arr+1);//arr+1---�ַ������׵�ַ����ƶ�һλ--Ԫ������ƶ�һλ
//		//arr+1--- ����ȼ���++arr��������������д�����ڻ�Ӱ��arr��ֵ��
//		//int a = 1;
//		//int b = a + 1;//b=2,a=1
//		//int c = a++;//c=1,a=2
//		//int d = ++a;//d=2;a=2
//	}
//	else
//	{
//		return 0;//ֱ��*arr == '\0'
//	}
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = String_length(arr);//�����ַ������ȣ�������������������ʵ���������Ԫ�ص�ַ
//	printf("%d \n", ret);
//	return 0;
//}

//���������ǵݹ�--ѭ��
//int String_length(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;//Ϊ����������ƶ�arr����ַ����ƶ�--Ԫ������ƶ�
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = String_length(arr);
//	printf("%d \n", ret);
//	return 0;
//}

//case3���ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//������1��0��= 1   1��=1
//     2��2��=2*1   3��=3*2*1  ... n!=n*(n-1)*(n-2)*...*2*1
//     3��n<=2ʱ��Ϊ1����n>2ʱ��Ϊn*Factorial(n-1)
//����1���ݹ�
//int Factorial(int n)
//{
//	if (n < 2)
//	{
//		return 1;
//	}
//	else
//	{
//		int ret = n*Factorial(n - 1);
//		return ret;
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������");
//	scanf("%d", &num);
//	int ret = Factorial(num);
//	printf("%d! = %d ", num,ret);
//	return 0;
//}

//����2���ǵݹ�
//int main()
//{
//	int num = 0;
//	printf("������n��");
//	scanf("%d", &num);
//	int i = 0;
//	int ret = 1;//��Ϊ0��0*�κ���Ϊ0
//	for (i = 2; i <= num; i++)
//	{
//		ret = ret*i;//�������
//		//ret = ret+i;//�������
//	}
//	printf("%d! = %d ",num, ret);
//	return 0;
//}

//case4���ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//������1��쳲�������:1��1��2��3��5��8��13��21��34��55...
//     2��n<=2ʱ��Ϊ1
//        n>2ʱ��ΪFibonacci_number(n) = Fibonacci_number(n-1) + Fibonacci_number(n-2)

//����һ���ݹ�
//int Fib(int n)
//{
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//	else
//	 return 1;
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������");
//	scanf("%d", &num);
//	int ret = Fib(num);
//	printf("��%d��쳲������� = %d \n", num,ret);
//	return 0;
//}
//���������
//     50
//     49 48
//     48 47 47 46
//     47 46 46 45 46 45  45 44
//     ...
//ʹ�� factorial ������10000�Ľ׳ˣ������ǽ������ȷ�ԣ�������������
//��ʹ�����������ʱ���������Ҫ�����50��쳲��������ֵ�ʱ���ر�ķ�ʱ�䡣

//���������ǵݹ�---ѭ��
//     c = a + b;
//     a = b;
//     b = c;
//��3��쳲�������--���1��--ѭ��1��
//��4��쳲�������--���2��--ѭ��2��
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//Ϊ������n<2ʱ
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//n=3,n-- = 2;n=4,n--=3,n--=2;
//	}
//	return c;
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������");
//	scanf("%d", &num);
//	int ret = Fib(num);
//	printf("��%d��쳲�������: = %d \n", num, ret);
//	return 0;
//}

////case5����дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
////������3^2 = 3*3=3*3^1
////     5^4 = 5*5*5*5 = 5*5^3 = 5*5*5^2
//   
//int Power(int x, int y)
//{
//	if (y == 0)
//	{
//		return 1;
//	}
//	else if (y == 1)
//	{
//		return x;
//	}
//	else
//	{
//		return x*Power(x, y - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("������n,m��");
//	scanf("%d%d", &n,&m);
//
//	int ret = Power(n,m);
//	printf("%d^%d = %d \n", n,m, ret);
//	return 0;
//}

//case6��дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//������DigitSum(1729)
//     DigitSum(172)+9--- DigitSum(172)+1729%10
//     DigitSum(17)+2+9
//     DigitSum(1)+7+2+9
//     1+7+2+9
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		int z = DigitSum(n / 10) + n % 10;
//		return z;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("������һ���Ǹ�������");
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("���%d������֮�� = %d \n", num, ret);
//	return 0;
//}


//case7����дһ������ reverse_string(char * string)���ݹ�ʵ�֣���ʵ�֣��������ַ����е��ַ��������С�Ҫ�󣺲���ʹ��C�������е��ַ�����������
//������abc --- cba
//     1����\0ֹͣ
//     2���������±��й�--���н��� 0--sz-1��1--sz-2

//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char temp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) > 1)
//	{
//		reverse_string(arr+ 1);
//	}
//	*(arr + len - 1) = temp;
//}
//int main()
//{
//	char arr[] = "hello";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



