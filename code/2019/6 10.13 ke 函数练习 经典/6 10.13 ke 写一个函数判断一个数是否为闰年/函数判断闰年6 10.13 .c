#define _CRT_SECURE_NO_WARNINGS 1

//程序1  写一个函数判断(1000,2000年之间)一个数是否为闰年
//1.1  代码1
//#include <stdio.h>
//int main ()
//{
//	int year = 0;
//	scanf("%d",&year);
//	if((year%4 == 0)&&(year%100 != 0)||(year%400 == 0))
//		printf("%d是素数",year);
//	else 
//		printf("%d不是素数",year);
//	return 0;
//}

 

//1.2  代码2
//#include <stdio.h>
//is_leap_year(int year)
//{
//	if((year%4 == 0)&&(year%100 != 0)||(year%400 == 0))
//		return 1;
//	else 
//		return 0;
//
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for(year=1000; year<=2000; year++)
//	{
//		if(1 == is_leap_year(year))
//		{
//			count++;
//			printf("%d ",year);
//		}
//	}
//	printf("\n");
//	printf("count = %d\n",count);
//	return 0;
//
//}



//1.3  代码3
//#include <stdio.h>
//is_leap_year(int year)
//{
//	if((year%4 == 0)&&(year%100 != 0))
//		return 1;
//	if(year%400 == 0)
//		return 1;
//	return 0;
//
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for(year=1000; year<=2000; year++)
//	{
//		if(1 == is_leap_year(year))
//		{
//			count++;
//			printf("%d ",year);
//		}
//	}
//	printf("\n");
//	printf("count = %d\n",count);
//	return 0;
//}



//1.4 代码4
//#include <stdio.h>
//is_leap_year(int year)
//{
//	return ((year%4==0)&&(year%100 != 0)||(year%400 == 0));
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for(year=1000; year<=2000; year++)
//	{
//		if(1 == is_leap_year(year))
//		{
//			count++;
//			printf("%d ",year);
//		}
//	}
//	printf("\n");
//	printf("count = %d\n",count);
//	return 0;
//
//}
