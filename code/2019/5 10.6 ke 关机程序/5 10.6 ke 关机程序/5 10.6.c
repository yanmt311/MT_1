#define _CRT_SECURE_NO_WARNINGS 1
//
////����1  �ػ�  ʹ��goto���
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main ()
//{
//	char input[20] = {0};
//	system("shutdowm -s -t 60");
//again:
//	printf("���Խ���1����֮�ڹػ���������룺��������ȡ���ػ�!\n������");
//	scanf("%s",&input);
//
//	if(0 == strcmp(input,"������"))
//	{
//		system("shutdown -a");
//	}
//
//	else 
//	{
//		goto again;
//	}
//
//	return 0;
//}

//����2 ʹ��ѭ�����йػ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char input[20] = {0};
	system("shutdowm -s -t 60");
	
	while(1)
	{
		printf("���Խ���1����֮�ڹػ���������룺��������ȡ���ػ�!\n������");
		scanf("%s",&input);
		if(0 == strcmp(input,"������"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}