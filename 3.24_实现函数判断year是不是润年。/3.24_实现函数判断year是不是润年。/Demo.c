#define _CRT_SECURE_NO_WARNINGS 1

//��ϰ2��ʵ�ֺ����ж�year�ǲ�������
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
//	//����һ��year
//	int year = 0;
//	printf("��������ݣ�");
//	scanf("%d", &year);
//
//	if (Is_leap_year(year) == 1)
//	{
//		printf("%d������ ", year);
//	}
//	else
//	{
//		printf("%d��������",year);
//	}
//	return 0;
//}


//ͳ��1000-2000֮�������
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 1;//��ֻ�����ֽ������/����---�����귵��1���������귵��0
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
	//����1000-2000
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)//year == 1��������
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}