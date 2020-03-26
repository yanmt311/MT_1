#define _CRT_SECURE_NO_WARNINGS 1




//程序1 全部求和1/1+1/2+1/3....+1/100
//
////错误1 
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for(i=1; i<=100; i++)
//	{
//		sum += 1/i;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
////结果为1 错误，因为1/1=1 1/2=0 1/3=0
////两个int 相除为int 
////修正即只要其中一个为浮点型即可



////改正
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	for(i=1; i<=100; i++)
//	{
//		sum += 1.0/i;//1.0浮点，修改sum=0，为浮点，输出%d变为%lf
//	}
//	printf("%lf\n",sum);
//	return 0;
//}



//程序3 计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100
#include <stdio.h>
int main()
{
	int i = 0;
	float sum = 0;
	int flag = 1;//为了变符号
	for(i=1; i<=100; i++)
	{
		sum += flag*1.0/i;
		flag = -flag;
	}
	printf("%lf\n",sum);
	return 0;
}