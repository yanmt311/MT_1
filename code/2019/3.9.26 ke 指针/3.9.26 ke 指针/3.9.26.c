#define _CRT_SECURE_NO_WARNINGS 1


////程序1  打印内存地址
//#include<stdio.h>
//int main()
//{
//	int num=10;//开辟四个字节
//	&num;
//	printf("%p\n",&num);//%p地址的打印首字节的位置，十六进制存，0不省略
//	printf("%x\n",&num);//%x十六进制的打印，0省略
//
//	//二进制：00000000 00000000 00000000 00001010
//	//十六进制：00 00 00 0a，在电脑中存时从右往左存
//	return 0;
//
//}

//
////程序2  指针应用
//#include<stdio.h>
//int main()
//{
//	int num=10;
//	int*  p=&num;//*说明p是一个指针变量，int说明p指向整形的num变量 
//	
//	/*char ch='w';
//	char* pc=&ch;*/
//
//	*p=20;//*p代表*p的内容num，等于20，是给num赋值为20
//	return 0;
//}
//



//程序3 指针大小

#include<stdio.h>
int main ()
{
	printf("%d\n",sizeof(int*));//4
	printf("%d\n",sizeof(char*));//4
	printf("%d\n",sizeof(double*));//4
	//指针大小在32位是4个字节，64位8个字节，与类型无关

	return 0;
}

//3 9.25 zuoye3将三个数按从大到小输出的优化采用了指针