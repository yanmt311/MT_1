#define _CRT_SECURE_NO_WARNINGS 1
//case1:ʹ��ָ���ӡ��������
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int *p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}


//�ַ�������--дһ����������������һ���ַ��������ݡ�
//#include <stdio.h>
//#include <string.h>
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	char tmp = 0;
//
//	while (left<right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = {0};
//	//scanf("%s", arr);
//	gets(arr);
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

//�������
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
#include <stdio.h>
#include <string.h>
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int ret = 0;//�洢����õ�ÿһ��
	scanf("%d%d", &a, &n);

	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}
//��ӡˮ�ɻ���
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include <math.h>
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int sum = 0;
		int count = 1;
		//�ж�i�Ƿ�Ϊ��ˮ�ɻ�����
		//1. ����i��λ��
		int tmp = i;
		while (tmp/=10)
		{
			count++;
		}
		//2. �õ�i��ÿһλ������ÿһλ��λ���η���
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		//3. �ж�
		if (sum == i)
		{
			printf("%d ", i);
		}
	}

	return 0;
}

//��ӡ����
int main()
{
	int line = 0;
	scanf("%d", &line);//7
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line-1; i++)
	{
		int j = 0;
		for (j = 0; j<=i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}