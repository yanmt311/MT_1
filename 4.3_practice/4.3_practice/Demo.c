//#define _CRT_SECURE_NO_WARNINGS 1
//
////2
//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, *p = &a;
//	a.a = 99;
//	printf("%d\n", a.a);//����ṹ���г�Աa������
//	printf("%d\n", a.b);
//	printf("%d\n", p->a);
//	printf("%d\n", p->b);
//	printf("%d\n", (*p).a);
//	printf("%d\n", (*p).b);
//	return 0;
//}
//
////3
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p) //����2�ĵ�ַ
//{
//	printf("%s\n", (*p).name);//�����ú�--����2 --������
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },{ 9802, "wang", 19 },{ 9803, "zhao", 18 }};
//	fun(students + 1); //����ڶ�����������
//	return 0;
//}
//
//
////7����ˮ����
////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//
//int BuySodawater(int money, int price)
//{
//	int EmptyBottle = 0;
//	int count = 0;
//	EmptyBottle = money / price;
//	count = money / price;
//	while (EmptyBottle>1)
//	{
//		count += EmptyBottle / 2;
//		EmptyBottle = EmptyBottle / 2 + EmptyBottle % 2;
//	}
//	return count;
//}
//int main()
//{
//	int money = 0;
//	int price = 0;
//
//	printf("�������ܽ�");
//	scanf("%d", &money);
//	printf("�����뵥�ۣ�");
//	scanf("%d", &price);
//	int ret = BuySodawater(money, price);
//	printf("%d\n", ret);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("��������������");
//	scanf("%d%d%d\n", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("a = %d,b = %d,c = %d\n", a, b, c);
//	return 0;
//}
//
////дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%4d", i);
//		}
//		i++;
//	}
//	printf("\n");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = 0;
//	while (b%a != 0)
//	{
//		c = b%a;
//		a = c;
//		b = a;
//	}
//	printf("%d = %d*%d\%d", d, a, c, b);
//	return 0;
//}
//
////��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 1000;
//	while (year >= 1000 && year <= 2000)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%5d", year);
//		}
//		year++;
//	}
//	printf("\n");
//	return 0;
//}
//
////��ӡ100~200֮�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b<a; b++)
//		{
//			if (a%b == 0)
//				break;
//		}
//		if (b >= a)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//����1-100����
//	for (i; i < 100; i++)
//	{
//		//��λ��9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		//ʮλ��9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	//����1-100����
//	int i = 0;
//	double sum = 0;//ע�⸡����������--float--double
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	//���������10����----����
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	printf("������ʮ������>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ٶ�arr[0]������������Ԫ��
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	for (line = 1; line <= 9; line++)
//	{
//		int row = 0;
//		//��ӡһ��
//		for (row = 1; row <= line; row++)
//		{
//			printf("%d*%d=%-2d\t ", line, row, line*row);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("***********************************\n");
//	printf("*******   1. play   0. exit  ******\n");
//	printf("************************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
////���ֲ���----log2 n------����2^32����n==32
////   1������һ����������
////   2����������Ԫ�ظ���
////   3���������±꣬���±꣬�����м��±� 
////   4���ж��м��±��Ԫ��ֵ�Ƿ�����ҵ�����ȣ�����ȣ�������±�ֵ������ȼ������ҡ������꣬û�ҵ�������Ҳ���
////    1��2��3��4��5��6��7��8��9��10
////�±꣺ 0��             9
////���ֲ��ң���0+9��/2 = 4
//
////�±�  0      4        9
////5��7С�����±�4+1=5  5      9
////���ֲ��ң���5+9��/2 = 7
//
////�±�         5   7
////8��7�����±�7-1=6  5 6
////���ֲ��ң���5+6��/2 = 5
//
////�±�         5 6
////6��7С�����±�5+1=6   6 
////���ֲ��ң���6+6��/2 = 6
//
////�±�           6
////7����7���ҵ��ˣ�����±�6
//int main()
//{
//	//����һ���������� 
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 7;//���ҵ���
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	//ѭ������������������ֵ�ıȽ�
//	while (left <= right)
//	{
//		//һ���ж�
//		int mid = (left + right) / 2;//����д������
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;//û��break������ѭ��
//		}
//	}
//	//���������1��break������������ѭ����2��������left<=right,ʹ�佻��
//	if (right<left)//��Ϊiÿ����+1�ģ���������==��Ȼ��Ŵ��ڣ�ֻҪ==�ˣ�ѭ���ͽ�����
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//
////��ϰ1������ʵ��-��ӡ100��200֮���������
////����1��
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
//
//
////��������
//#include <math.h>
//#include <stdio.h>
//
//
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
//
////��������
//#include <math.h>
//#include <stdio.h>
//
//
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
//
//
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
//
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
//
//#include <stdio.h>
//void Multiplication_table(int input)
//{
//	int line = 0;
//	//���δ�ӡ����
//	for (line = 1; line <= input; line++)
//	{
//		int row = 0;
//		//��ӡһ��
//		for (row = 1; row <= line; row++)
//		{
//			printf("%d*%d=%-5d\t", row, line, row*line);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	printf("������˷��ھ���Ľ�����");
//	scanf("%d", &input);
//	Multiplication_table(input);
//	return 0;
//}
//
//void S_print(unsigned int n)
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
//	S_print(n / 10);
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
//
////����1���ݹ�
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
//	printf("%d! = %d ", num, ret);
//	return 0;
//}
////����2���ǵݹ�
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
//	printf("%d! = %d ", num, ret);
//	return 0;
//}
//
////����һ���ݹ�
//int String_length(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + String_length(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = String_length(arr);
//	printf("%d \n", ret);
//	return 0;
//}
//
////���������ǵݹ�--ѭ��
//int String_length(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
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
//
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char temp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) > 1)
//	{
//		reverse_string(arr + 1);
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
//
////case6��дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�����磬
////����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
////������DigitSum(1729)
////     DigitSum(172)+9--- DigitSum(172)+1729%10
////     DigitSum(17)+2+9
////     DigitSum(1)+7+2+9
////     1+7+2+9
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
//
////case5����дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
////������3^2 = 3*3=3*3^1
////     5^4 = 5*5*5*5 = 5*5^3 = 5*5*5^2
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
//	scanf("%d%d", &n, &m);
//
//	int ret = Power(n, m);
//	printf("%d^%d = %d \n", n, m, ret);
//	return 0;
//}
//
//
////����һ���ݹ�
//int Fib(int n)
//{
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//	else
//		return 1;
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������");
//	scanf("%d", &num);
//	int ret = Fib(num);
//	printf("��%d��쳲������� = %d \n", num, ret);
//	return 0;
//}
//
////���������ǵݹ�---ѭ��
////     c = a + b;
////     a = b;
////     b = c;
////��3��쳲�������--���1��--ѭ��1��
////��4��쳲�������--���2��--ѭ��2��
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
//
//
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
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ֻ�ܽ���д���������У����鴫�δ���ȥ����������Ԫ�ص�ָ�룬
//	//����int sz = sizeof(arr) / sizeof(arr[0])�ں����ڲ�Ϊ1��
//	//sizeof(arr)Ϊ��Ԫ�ص�ַ����32λ��4���ֽ�
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
//
//
//#include <stdio.h>
////��ʼ������ȫΪ0
//void init(int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr2[i] = 0;
//		//arr[i] = i;//��ʼ������Ϊ1-9
//	}
//}
//
////��ӡ����
//void print(int arr2[], int sz)
//{
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//}
//
////����Ԫ�ص�����
//void reverse(int arr2[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	if (left < right)
//	{
//		int tmp = arr2[left];
//		arr2[left] = arr2[right];
//		arr2[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	//����һ������
//	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };//��ζ����������
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	printf("ԭ���飺\n");
//	print(arr2, sz);
//
//	printf("�������飺\n");
//	reverse(arr2, sz);
//	print(arr2, sz);
//
//	printf("��ʼ�����飺\n");
//	init(arr2, sz);
//	print(arr2, sz);
//	return 0;
//}
//
//
//void Swap(int* arr1, int arr2[], int sz1, int sz2)
//{
//	int left1 = 0;
//	int right1 = sz1 - 1;
//	int left2 = 0;
//	int right2 = sz2 - 1;
//	while (left1 <= right1 && left2 <= right2)
//	{
//		//�������ν���
//		int temp = arr1[left1];
//		arr1[left1] = arr2[left2];
//		arr2[left2] = temp;
//		left1++;
//		left2++;
//	}
//}
//
////��ӡ����
//void PrintArr(int arr[], int sz)
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
//	//������������
//	int arr1[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
//	int arr2[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
//	//��������Ԫ�ظ���
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	//��ӡԭ����
//	printf("ԭ���飺\n");
//	PrintArr(arr1, sz1);
//	PrintArr(arr2, sz2);
//
//	//��������Ԫ��
//	Swap(arr1, arr2, sz1, sz2);
//	//��ӡ�����������
//	printf("����������飺\n");
//	PrintArr(arr1, sz1);
//	PrintArr(arr2, sz2);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int num = 0;
//	int count = 0;
//	num = m^n;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	10---00000000000000000000000000001010
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//
//#include <stdio.h>
//int BinaryReturn(int x)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = BinaryReturn(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//#include <stdio.h>
//void swap(int* x, int* y)
//{
//	*x = *x^*y;
//	*y = *x^*y;
//	*x = *x^*y;
//}
//int main()
//{
//	int n = 13;
//	int m = 11;
//	printf("n = %d m=%d\n", n, m);
//	swap(&n, &m);
//	printf("n = %d m=%d\n", n, m);
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		int count = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
int BuySodawater(int money, int price)
{
	int EmptyBottle = 0;
	int count = 0;
	//��ƿ��
	EmptyBottle = money / price;
	//�ȵ�ƿ��
	count = money / price;
	while (EmptyBottle>1)
	{
		count += EmptyBottle / 2;
		EmptyBottle = EmptyBottle / 2 + EmptyBottle % 2;
	}
	return count;
}
int main()
{
	int money = 0;
	int price = 0;


	printf("�������ܽ�");
	scanf("%d", &money);
	printf("�����뵥�ۣ�");
	scanf("%d", &price);
	int ret = BuySodawater(money, price);
	printf("%d\n", ret);
	return 0;
}


