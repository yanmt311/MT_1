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
//	printf("%d\n", a.a);//输出结构体中成员a的数据
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
//void fun(struct stu *p) //数组2的地址
//{
//	printf("%s\n", (*p).name);//解引用后--数组2 --的名字
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },{ 9802, "wang", 19 },{ 9803, "zhao", 18 }};
//	fun(students + 1); //代表第二个数组内容
//	return 0;
//}
//
//
////7喝汽水问题
////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
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
//	printf("请输入总金额：");
//	scanf("%d", &money);
//	printf("请输入单价：");
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
//	printf("请输入三个数：");
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
////写一个代码打印1-100之间所有3的倍数的数字
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
////打印1000年到2000年之间的闰年
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
////打印100~200之间的素数
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
//	//生成1-100的数
//	for (i; i < 100; i++)
//	{
//		//个位含9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		//十位含9
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
//	//生成1-100的数
//	int i = 0;
//	double sum = 0;//注意浮点数的类型--float--double
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
//	//生成随机的10个数----数组
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	printf("请输入十个数：>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//假定arr[0]是数组中最大的元素
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
//		//打印一行
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
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
////二分查找----log2 n------若是2^32，则n==32
////   1、创建一个有序数组
////   2、计算数组元素个数
////   3、计算左下标，右下标，求其中间下标 
////   4、判断中间下标的元素值是否与查找的数相等，若相等，输出其下标值，不相等继续查找。查找完，没找到则输出找不到
////    1，2，3，4，5，6，7，8，9，10
////下标： 0，             9
////二分查找：（0+9）/2 = 4
//
////下标  0      4        9
////5比7小，左下标4+1=5  5      9
////二分查找：（5+9）/2 = 7
//
////下标         5   7
////8比7大，右下标7-1=6  5 6
////二分查找：（5+6）/2 = 5
//
////下标         5 6
////6比7小，左下标5+1=6   6 
////二分查找：（6+6）/2 = 6
//
////下标           6
////7等于7，找到了，输出下标6
//int main()
//{
//	//创建一个有序数组 
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 7;//查找的数
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
//	int left = 0;
//	int right = sz - 1;
//	//循环完成有序数组的所有值的比较
//	while (left <= right)
//	{
//		//一次判断
//		int mid = (left + right) / 2;//不能写在外面
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
//			printf("找到了，下标是：%d\n", mid);
//			break;//没有break，则死循环
//		}
//	}
//	//两种情况：1、break跳出，否则死循环；2、不满足left<=right,使其交错
//	if (right<left)//因为i每次是+1的，所以先是==，然后才大于，只要==了，循环就结束了
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//
////练习1：函数实现-打印100到200之间的素数。
////方法1：
//#include <stdio.h>
////1.1---定义函数参数时，用不同的变量---为n
//int is_prime(int n)
//{
//	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
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
////1.2---定义函数参数时，使用相同的变量---均为i
////int is_prime(int i)
////{
////	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
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
//	//打印1-100的数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//i==1，则是素数
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
////方法二：
//#include <math.h>
//#include <stdio.h>
//
//
//int is_prime(int n)
//{
//	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	//只有一种情况，就是不满足for循环
//	return 1;
//}
//int main()
//{
//	//打印1-100的数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//i==1，则是素数
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
////方法三：
//#include <math.h>
//#include <stdio.h>
//
//
//int is_prime(int n)
//{
//	//生成 2 --- n-1的数，若n%i==0 则不是素数，返回0；若是素数，返回1
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	//只有一种情况，就是不满足for循环
//	return 1;
//}
//int main()
//{
//	//打印1-100的数
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 201; i += 2)
//	{
//		if (is_prime(i) == 1)//i==1，则是素数
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
//	//生成一个year
//	int year = 0;
//	printf("请输入年份：");
//	scanf("%d", &year);
//
//
//	if (Is_leap_year(year) == 1)
//	{
//		printf("%d是润年 ", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
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
//	//依次打印行数
//	for (line = 1; line <= input; line++)
//	{
//		int row = 0;
//		//打印一行
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
//	printf("请输入乘法口决表的阶数：");
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
//	printf("请输入一个正整数：");
//	scanf("%d", &num);
//	S_print(num);
//	return 0;
//}
//
////方法1：递归
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
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	int ret = Factorial(num);
//	printf("%d! = %d ", num, ret);
//	return 0;
//}
////方法2：非递归
//int main()
//{
//	int num = 0;
//	printf("请输入n：");
//	scanf("%d", &num);
//	int i = 0;
//	int ret = 1;//若为0，0*任何数为0
//	for (i = 2; i <= num; i++)
//	{
//		ret = ret*i;//叠加相乘
//		//ret = ret+i;//叠加相加
//	}
//	printf("%d! = %d ", num, ret);
//	return 0;
//}
//
////方法一：递归
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
////方法二：非递归--循环
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
////case6：写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和例如，
////调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////分析：DigitSum(1729)
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
//	printf("请输入一个非负整数：");
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("组成%d的数字之和 = %d \n", num, ret);
//	return 0;
//}
//
////case5：编写一个函数实现n的k次方，使用递归实现。
////分析：3^2 = 3*3=3*3^1
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
//	printf("请输入n,m：");
//	scanf("%d%d", &n, &m);
//
//	int ret = Power(n, m);
//	printf("%d^%d = %d \n", n, m, ret);
//	return 0;
//}
//
//
////方法一：递归
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
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	int ret = Fib(num);
//	printf("第%d个斐波那契数 = %d \n", num, ret);
//	return 0;
//}
//
////方法二：非递归---循环
////     c = a + b;
////     a = b;
////     b = c;
////第3个斐波那契数--相加1次--循环1次
////第4个斐波那契数--相加2次--循环2次
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//为了满足n<2时
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
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	int ret = Fib(num);
//	printf("第%d个斐波那契数: = %d \n", num, ret);
//	return 0;
//}
//
//
//void BubbleSort(int arr[], int sz)//int arr[]----int* arr----数组首元素的地址
//{
//	//冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//冒泡排序的实现
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)//第一趟冒泡排序完，发现两两元素没有交换过，则为有序数组
//		{
//			break;
//		}
//	}
//}
//
////打印数组
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
//	//创建一个逆数组
//	//int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//计算数组元素个数的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//只能将其写入主函数中，数组传参传过去的是数组首元素的指针，
//	//所以int sz = sizeof(arr) / sizeof(arr[0])在函数内部为1，
//	//sizeof(arr)为首元素地址，再32位中4个字节
//
//	//创建打印数组函数
//	PrintfArr(arr, sz);
//
//	//创建一个冒泡排序函数---将数组arr排成升序
//	BubbleSort(arr, sz);
//
//	//创建打印数组函数
//	PrintfArr(arr, sz);
//	return 0;
//}
//
//
//#include <stdio.h>
////初始化数组全为0
//void init(int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr2[i] = 0;
//		//arr[i] = i;//初始化数组为1-9
//	}
//}
//
////打印数组
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
////数组元素的逆置
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
//	//创建一个数组
//	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };//意味着三行四列
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	printf("原数组：\n");
//	print(arr2, sz);
//
//	printf("逆置数组：\n");
//	reverse(arr2, sz);
//	print(arr2, sz);
//
//	printf("初始化数组：\n");
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
//		//进行依次交换
//		int temp = arr1[left1];
//		arr1[left1] = arr2[left2];
//		arr2[left2] = temp;
//		left1++;
//		left2++;
//	}
//}
//
////打印数组
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
//	//创建两个数组
//	int arr1[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
//	int arr2[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
//	//计算数组元素个数
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	//打印原数组
//	printf("原数组：\n");
//	PrintArr(arr1, sz1);
//	PrintArr(arr2, sz2);
//
//	//交换数组元素
//	Swap(arr1, arr2, sz1, sz2);
//	//打印交换后的数组
//	printf("交换后的数组：\n");
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
	//空瓶数
	EmptyBottle = money / price;
	//喝的瓶数
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


	printf("请输入总金额：");
	scanf("%d", &money);
	printf("请输入单价：");
	scanf("%d", &price);
	int ret = BuySodawater(money, price);
	printf("%d\n", ret);
	return 0;
}


