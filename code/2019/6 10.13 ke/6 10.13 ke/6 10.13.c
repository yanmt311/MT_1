#define _CRT_SECURE_NO_WARNINGS 1


////����1 strcpy
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//int *P = NULL;
//	//Null NUL ����\0
//
//	char str1[30] = {0};
//	//char str2[] = "hello word";
//	//strcpy(str1,str2);
//	
//	//����������Դ�ļ�û�н�\0��Ϊ���Ľ����ַ�
//	//char str3[] = {'b','i','t'};
//	//����
//	char str3[] = {'b','i','t','\0'};
//	strcpy(str1,str3);
//
//	printf("%s\n",str1);
//
//	return 0;
//}


//memset  "�������� ��ʼ��ַ�����õ��ַ��������õ��ַ�������"
#include <stdio.h>
int main()
{
   char buffer[] = "This is a test of the memset function";

   printf( "Before: %s\n", buffer );
   memset( buffer, '*', 4 );
   printf( "After:  %s\n", buffer );

}