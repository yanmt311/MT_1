#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <string.h>
//#define N 100
//int main()
//{
//	char a[N];
//	gets(a);
//	int len = strlen(a);
//	int i, j;
//	int t = len - 1;
//	int temp;
//	for (i = len - 1; i >= 0; i--)//从后往前臊面字符串数组
//	{
//
//		if (a[i] == ' ')
//		{
//			temp = i;//如果是空格记录此时的位置
//			for (; i <= t; i++)
//			{
//				printf("%c", a[i + 1]);//用循环空格的后一个单词输出
//			}
//			printf(" ");//打印空格
//			i = temp;//回到空格的位置
//			t = temp - 1;
//
//		}
//	}
//	for (int j = 0; j<temp; j++)//因为第一个单词之前没有空格，所以循环里不会输出第一个单词，所以需要在循环之外将字符串的第一个单词单独输出
//		printf("%c", a[j]);
//	return 0;
//}


#include"stdio.h"
#include"stdlib.h"
#include"string.h"

/**
void reverse_str(char *s,int begin,int end){

int i=begin,j=end;
char temp;
while(i<j){
temp=s[i];
s[i]=s[j];
s[j]=temp;
i++;
j--;
}
//return s;
}
**/

int main(){
	int i = 0;
	int j, begin, end;
	char str[100];
	char temp;

	//scanf("%s",str);
	gets(str);
	//printf("%s ",str);
	j = strlen(str) - 1;

	//reverse_str(str,i,j);
	while (i<j){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}

	//printf("%s\n",str);

	i = 0;
	while (str[i] != '\0'){
		if (str[i] != ' '){
			begin = i;

			while (str[i] != '\0' && str[i] != ' '){
				i++;
			}
			i = i - 1;
			end = i;

			while (begin<end){

				temp = str[begin];
				str[begin] = str[end];
				str[end] = temp;
				begin++;
				end--;
			}
		}
		i++;
	}

	printf("%s", str);
	return 0;

}