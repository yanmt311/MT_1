#define _CRT_SECURE_NO_WARNINGS 1

////求两个数的最大公约数
//
////辗转相除法：用较大数除以较小数，再用出现的余数（第一余数）去除除数，再用出现的余数（第二余数）去除第一余数，如此反复，直到最后余数是0为止。第二个余数为最大公约数
//
//#include<stdio.h>
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//
//	scanf("%d%d",&a,&b);
//	printf("%d\t%d\t\n",a,b);
//	
//	//循环
//	//a=24 b=18 24%18=6!=0 （a%b=c!=0）
//	//          18%6==0     (b%c==0)  最大公约数为b
//
//	//最大公约数为6
//	while(a%b)//判断与不判断均可 while(a%b!=0)
//	{
//		c=a%b;
//		a=b;
//		b=c;
//	}
//
//	//优化
//	//while(c=a%b)
//	//{
//	//	a=b;
//	//	b=c;
//	//}
//	printf("%d\n",b);
//	printf("%d=%d*%d/%d",
//	return 0;
//}
//a大b小完全可以
//a小b大也可以，当第一次求余时，若不为0 ，则进行了交换，如18%24=18,
//没有必要再前面进行a，b比较，大的给a，小的给b



#include<stdio.h>
int main()
{
	int a=0;
	int b=0;//输入的数
	int m,n;
	int c=0;//最大公约数
	int d=0;//最小公倍数
	printf("请输入两个数：");
	scanf("%d%d",&a,&b);
	m=a;
	n=b;
	printf("a=%d\t b=%d\t m=%d\t n=%d\t\n",a,b,m,n);
	
	while(c=a%b)
	{
		a=b;
		b=c;
	}
	printf("%d\n",b);//最大公约数
	d=m*n/b;
	printf("%d=(%d*%d)\%d\n",d,m,n,b);
	return 0;
}

//注意要将a，b值保存一份，以防止被覆盖