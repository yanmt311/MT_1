#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//递归：1、递归错误--栈溢出--内存空间用完
//     2、思想：大事化小---调用自身的编程
//     3、必要条件：存在限制条件，当满足这个限制条件的时候，递归便不再继续
//                 每次递归调用之后越来越接近这个限制条件

//case1：接收一个无符号整形，按照顺序打印整数的每一位
//分析：1、无符号整形--unsigned int
//     2、顺序打印--123
//     3、123/10=12  123%10=3
//        12/10=1    12%10=2
//        1/10=0     1%10=1
//     4、递归函数---Sequential_printing---S_print
//        S_print(123)
//        S_print(12)+3
//        S_print(1)+2+3
//        1+2+3
//        大于9，调用函数；小于9，直接打印 / n%10
//void S_print(unsigned int n)//只是打印，所以空类型
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
//	printf("请输入一个正整数：");
//	scanf("%d", &num);
//	S_print(num);
//	return 0;
//}

//case2：编写函数不允许创建临时变量，求字符串的长度（递归和非递归分别实现strlen）
//方法一：递归
//分析：1、遇\0截止，所以是寻找\0,hello----hello\0
//     2、函数传递数组名，其实是数组的首元素地址，所以只需要对照第一个字符，若为\0，或空字符，函数递归截止
//     3、String_length（hello）
//        1+String_length（ello）
//        1+1+String_length（llo）
//        1+1+1+String_length（lo）
//        1+1+1+1+String_length（o）
//        1+1+1+1+1+String_length（\0）
//     4、strlen---不包含\0
//     5、若与\0就结束寻找---hello改为he\0llo，即输出为2

//int String_length(char* arr)//返回字符串长度，为整形
//{
//	if (*arr != '\0')
//	{
//		return 1 + String_length(arr+1);//arr+1---字符串的首地址向后移动一位--元素向后移动一位
//		//arr+1--- 这里等价于++arr，但不建议这样写，由于会影响arr的值；
//		//int a = 1;
//		//int b = a + 1;//b=2,a=1
//		//int c = a++;//c=1,a=2
//		//int d = ++a;//d=2;a=2
//	}
//	else
//	{
//		return 0;//直到*arr == '\0'
//	}
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = String_length(arr);//数组字符串长度，函数传递数组名，其实是数组的首元素地址
//	printf("%d \n", ret);
//	return 0;
//}

//方法二：非递归--循环
//int String_length(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;//为了向后依次移动arr，地址向后移动--元素向后移动
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

//case3：递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//分析：1、0！= 1   1！=1
//     2、2！=2*1   3！=3*2*1  ... n!=n*(n-1)*(n-2)*...*2*1
//     3、n<=2时，为1；当n>2时，为n*Factorial(n-1)
//方法1：递归
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
//	printf("%d! = %d ", num,ret);
//	return 0;
//}

//方法2：非递归
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
//	printf("%d! = %d ",num, ret);
//	return 0;
//}

//case4：递归和非递归分别实现求第n个斐波那契数
//分析：1、斐波那契数:1，1，2，3，5，8，13，21，34，55...
//     2、n<=2时，为1
//        n>2时，为Fibonacci_number(n) = Fibonacci_number(n-1) + Fibonacci_number(n-2)

//方法一：递归
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
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	int ret = Fib(num);
//	printf("第%d个斐波那契数 = %d \n", num,ret);
//	return 0;
//}
//结果分析：
//     50
//     49 48
//     48 47 47 46
//     47 46 46 45 46 45  45 44
//     ...
//使用 factorial 函数求10000的阶乘（不考虑结果的正确性），程序会崩溃。
//在使用这个函数的时候如果我们要计算第50个斐波那契数字的时候特别耗费时间。

//方法二：非递归---循环
//     c = a + b;
//     a = b;
//     b = c;
//第3个斐波那契数--相加1次--循环1次
//第4个斐波那契数--相加2次--循环2次
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

////case5：编写一个函数实现n的k次方，使用递归实现。
////分析：3^2 = 3*3=3*3^1
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
//	printf("请输入n,m：");
//	scanf("%d%d", &n,&m);
//
//	int ret = Power(n,m);
//	printf("%d^%d = %d \n", n,m, ret);
//	return 0;
//}

//case6：写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//分析：DigitSum(1729)
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
//	printf("请输入一个非负整数：");
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("组成%d的数字之和 = %d \n", num, ret);
//	return 0;
//}


//case7：编写一个函数 reverse_string(char * string)（递归实现），实现：将参数字符串中的字符反向排列。要求：不能使用C函数库中的字符串操作函数
//分析：abc --- cba
//     1、与\0停止
//     2、与左右下标有关--进行交换 0--sz-1；1--sz-2

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



