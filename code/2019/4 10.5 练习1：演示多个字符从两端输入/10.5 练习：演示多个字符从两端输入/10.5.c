#define _CRT_SECURE_NO_WARNINGS 1

//��ʾ����ַ�����������
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
	//�ĸ��ֽ� a b c \0
	//         0 1 2 3
	//         a=0   c=strlen-1
	int left = 0;
	int right = strlen(arr1)-1;

	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n",arr2);

		Sleep(1000);//��ʱ1000ms
		system("cls");//������ʹ����һ����һֱ�仯
		
		left++;
		right--;
	}
	return 0;
}