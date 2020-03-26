#define _CRT_SECURE_NO_WARNINGS 1

//链式访问
//程序1 
//#include <stdio.h>
//int main ()
//{
//	int len = strlen("abc");//求长度
//	//printf("%d\n",len);
//	//替换为
//	printf("%d\n",strlen("abc"));
//	return 0;
//}

//程序2 
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = {0};
//
//	strcpy(arr2,arr1);
//	//printf("%s\n",arr2);
//
//	//替换为
//	printf("%s\n",strcpy(arr2,arr1));
//	return 0;
//}

//程序3  更复杂
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = {0};
//
//	strcpy(arr2,arr1);
//	//printf("%s\n",arr2);
//
//	//替换为
//	printf("%d\n",strlen(strcpy(arr2,arr1)));
//	return 0;
//}

//程序4 有趣的问题 关于printf的返回值
#include <stdio.h>
int main()
{
	printf("%d",printf("%d",printf("%d",43)));

	//printf返回的是字符数量
	//即打印结果为4321
	//理由：printf("%d",43)   输出43  返回2
	//      printf（"%d",2）  输出2  返回1
	//      printf（"%d",1）  输出1 


	return 0;
}

