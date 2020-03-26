#define _CRT_SECURE_NO_WARNINGS 1

//演示多个字符从两端输入
#include <stdio.h>
#include <string.h>
#include <windows.h>
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//...

int main()
{
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";

	//"abc"
	//四个字节 a b c \0
	//         0 1 2 3
	//         a=0   c=strlen-1
	int left = 0;
	int right = strlen(arr1)-1;

	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n",arr2);

		Sleep(1000);//延时1000ms
		system("cls");//清屏，使得在一行上一直变化
		
		left++;
		right--;
	}
	return 0;
}