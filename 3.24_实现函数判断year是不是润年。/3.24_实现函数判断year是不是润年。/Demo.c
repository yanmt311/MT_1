#define _CRT_SECURE_NO_WARNINGS 1

//练习2：实现函数判断year是不是润年
//#include <stdio.h>
//int Is_leap_year(int y)
//{
//	/*if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
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
//	if (Is_leap_year(year) == 1)
//	{
//		printf("%d是润年 ", year);
//	}
//	else
//	{
//		printf("%d不是闰年",year);
//	}
//	return 0;
//}


//统计1000-2000之间的闰年
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 1;//若只用两种结果，是/不是---即闰年返回1；不是闰年返回0
	}
	else
	{
		return 0;
	}
	//return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
}

int main()
{
	int year = 0;
	int count = 0;
	//生成1000-2000
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)//year == 1；是闰年
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}