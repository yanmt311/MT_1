#define _CRT_SECURE_NO_WARNINGS 1

//判断1000-2000年之间的闰年


//#include <stdio.h>
//
//int main ()
//
//{
// int year=0;
// int count=0;
// for(year=1000;year<=2000;year++)
// {
//	//判断闰年
//	 if(year%4==0)
//	 {
//		if(year%100!=0)
//		{
//			count++;
//		printf("%d ",year);
//		}
//	 }//第一种情况：能被4整除，但不能被100整除
//
//
//	if(year%400==0)
//	{
//	count++;
//	printf("%d ",year);
//	}//第二种情况：能被400整除
//	
//	//两种情况为或的关系，不能用else，下列情况少2000、1600、1200年三种情况
//	//if(year%4==0)
//	// {
//	//	if(year%100!=0)
//	//	{
//	//		count++;
//	//	printf("%d ",year);
//	//	}
//	// }//第一种情况：能被4整除，但不能被100整除
//	//else(year%400==0)
//	//{
//	//count++;
//	//printf("%d ",year);
//	//}
//
// }
//printf("\ncount=%d\n",count);
//return 0;
//}

//优化1

#include<stdio.h>

int main ()
{
	int year=0;
	int count=0;
	for(year=1000;year<=2000;year++)
	{
		if(((year%4==0)&&(year%100!=0))||(year%400==0))
		{
			count++;
			printf("%d  ",year);
			
		}
	
	}
printf("\ncount=%d\n",count);//计数
return 0;
}

