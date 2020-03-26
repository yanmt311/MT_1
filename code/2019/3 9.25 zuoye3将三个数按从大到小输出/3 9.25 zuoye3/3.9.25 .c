#define _CRT_SECURE_NO_WARNINGS 1
//
//
//将三个数按从大到小输出
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\t%d\t%d\t\n",a,b,c);

	//或者输入固定的a，b，c
	//int a=2;
	//int b=3;
	//int c=5;

	if(a<b)
	{
		int tmp=a;
		a=b;
		b=tmp;//将两者最大的存在a中
	}

	if(a<c)
	{
		int tmp=a;
		a=c;
		c=tmp;//将两者最大值存到a中
	}

	if(b<c)
	{
		int tmp=b;
		b=c;
		c=tmp;//将两者最大值存到b中
	}
	printf ("%d %d %d",a,b,c);//注意a存最大值，b存较大值，c存最小值
	return 0;
}




////优化时陷阱程序
//
//#include <stdio.h>
//
////当实参传给形参的时候，形参将是实参的一份临时拷贝
////对形参的改变不会改变实参
//
////形参
//int Swap(int x,int y)
//{
//	int tmp=x;
//	x=y;
//	y=tmp;
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d",&a,&b,&c);
//	printf("%d\t%d\t%d\t\n",a,b,c);
//
//	if(a<b)
//	{
//		//实参
//		Swap(a,b);
//	}
//
//	if(a<c)
//	{
//		Swap(a,c);
//	}
//
//	if(b<c)
//	{
//		Swap(b,c);
//	}
//	printf ("%d %d %d",a,b,c);//注意a存最大值，b存较大值，c存最小值
//	return 0;
//}


//对陷阱进行改正并优化
//改：指针建立形参和实参的联系


//#include <stdio.h>
//void Swap(int* px,int* py)//只是习惯前加p
//{
//	int tmp=*px;//*px是a
//	*px=*py;//*py是b
//	*py=tmp;
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d",&a,&b,&c);
//	printf("%d\t%d\t%d\t\n",a,b,c);
//
//	if(a<b)
//	{
//		//实参
//		Swap(&a,&b);
//	}
//
//	if(a<c)
//	{
//		Swap(&a,&c);
//	}
//
//	if(b<c)
//	{
//		Swap(&b,&c);
//	}
//	printf ("%d %d %d",a,b,c);//注意a存最大值，b存较大值，c存最小值
//	return 0;
//}

//当函数内部想改变函数外部的某些值时，传递值，使用指针
//当函数内部根本不想改变函数外部的某些值时，只是想得到外部的值时，函数调用即可