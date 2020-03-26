#define _CRT_SECURE_NO_WARNINGS 1

////给定两个整形变量的值,将两个值的内容进行交换
//
//#include <stdio.h>
//int tmp;
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int tmp=0;
//
//	scanf("%d%d",&num1,&num2);
//	//交换
//
//	printf("num1=%d,num2=%d\n",num1,num2);
//
//	tmp=num1;
//	num1=num2;
//	num2=tmp;
//
//	printf("num1=%d,num2=%d\n",num1,num2);
//
//	return 0;
//}


//优化1
//题：不允许创建临时变量，交换两个数的内容
//采用+ -法，或者 异或法

//#include <stdio.h>
//int main()
//{
//	int num1=0;
//	int num2=0;
//
//	scanf("%d%d",&num1,&num2);
//	//交换
//
//	printf("num1=%d,num2=%d\n",num1,num2);
//
//	num1=num1+num2;
//	num2=num1-num2;
//	num1=num1-num2;//存在缺陷
//
//	printf("num1=%d,num2=%d\n",num1,num2);
//
//	return 0;
//}
//

//优化2 采用异或
#include <stdio.h>
int main()
{
	int num1=0;
	int num2=0;

	scanf("%d%d",&num1,&num2);
	//交换

	printf("num1=%d,num2=%d\n",num1,num2);

	//3=011 num1
	//5=101 num2
	//  110 异或num1

	//0^a=a
	//a^a=0

	//异或—按二进制位异或
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;

	printf("num1=%d,num2=%d\n",num1,num2);

	return 0;
}