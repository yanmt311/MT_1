#define _CRT_SECURE_NO_WARNINGS 1

//����1  дһ�������ж�(1000,2000��֮��)һ�����Ƿ�Ϊ����
//1.1  ����1
//#include <stdio.h>
//int main ()
//{
//	int year = 0;
//	scanf("%d",&year);
//	if((year%4 == 0)&&(year%100 != 0)||(year%400 == 0))
//		printf("%d������",year);
//	else 
//		printf("%d��������",year);
//	return 0;
//}

 

//1.2  ����2
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



//1.3  ����3
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



//1.4 ����4
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
