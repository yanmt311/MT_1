#define _CRT_SECURE_NO_WARNINGS 1


////程序1 strcpy
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//int *P = NULL;
//	//Null NUL 代表\0
//
//	char str1[30] = {0};
//	//char str2[] = "hello word";
//	//strcpy(str1,str2);
//	
//	//错误，由于其源文件没有将\0作为最后的截至字符
//	//char str3[] = {'b','i','t'};
//	//改正
//	char str3[] = {'b','i','t','\0'};
//	strcpy(str1,str3);
//
//	printf("%s\n",str1);
//
//	return 0;
//}


//memset  "三个参数 起始地址，设置的字符，所设置的字符的数量"
#include <stdio.h>
int main()
{
   char buffer[] = "This is a test of the memset function";

   printf( "Before: %s\n", buffer );
   memset( buffer, '*', 4 );
   printf( "After:  %s\n", buffer );

}