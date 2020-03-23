#define _CRT_SECURE_NO_WARNINGS 1
//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序
//分析：1、for循环实现三次密码的输入
//     2、若密码和输入的字符串相等，则登陆成功，否则，登陆失败
//     3、字符串比较，用strcmp,不能用== -----string compare---引用头文件#include <string.h>
//     4、数组---地址，所以scanf时不用写&符号
//知识点：
//如果你引入自己创建的头文件，那使用""
//#include "test.h"
////如果你引入库函数的头文件，那使用<>
//#include <stdio.h>

#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i=0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s",password);

		if (0 == strcmp(password, "123456"))
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("登陆失败\n");
	}
	return 0;
}

