#define _CRT_SECURE_NO_WARNINGS 1


//程序 模拟登陆界面
#include <stdio.h>
int main()
{
	int i = 0;
	char password[20] = {0};//给密码一定的空间


	for(i=0; i<3; i++)
	{
		printf("请输入密码->:");
		scanf("%s",password);
		if(0 == strcmp(password,"123456"))//strcmp比较两个字符串的大小
		{
			break;
		}
		else 
		{
			printf("密码输入错误，请重新输入密码！\n");
		}
	}
	

	if(i<3)
		printf("登陆成功!");
	else 
		printf("退出程序!");

	return 0;

}