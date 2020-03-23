#define _CRT_SECURE_NO_WARNINGS 1

//编写代码，演示多个字符从两端移动,向中间移动
//分析;I belive you!!
//     **************
//     1、创建两个数组
//     2、计算数组元素个数
//     3、数组的左下标与右下标
//     4、数组1的左下标元素替换数组2的左下标元素；数组1的右下标元素替换数组2的右下标元素；
//     5、循环实现从左到中间靠拢

//方法一：使用sizeof计算数组元素个数
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "I belive you!!";//注意是char类型
//	char arr2[] = "**************";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//sz = sizeof(arr1) / sizeof(arr1[0])与sz = sizeof(arr1) / sizeof(char)相同，但如果整形，需要修改，不推荐使用
//	int left = 0;
//	int right = sz - 2;//计算数组元素个数时，包含\0结束标志，所以是right = sz - 2；char arr[] = "bit";//bit\0;总共4个元素，下标时不包含\0,
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠函数-单位:毫秒
//		system("cls");//执行系统命令--cls:清理屏幕信息,为了更好的显示在一行;记得引用头文件#include <windows.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//方法二：使用strlen
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "I belive you!!";//注意是char类型
//	char arr2[] = "**************";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;//计算字符串长度时，不包含\0结束标志，所以是right = len - 1
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠函数-单位:毫秒，Sleep大写
//		system("cls");//执行系统命令--cls:清理屏幕信息,为了更好的显示在一行
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//方法三：for循环实现
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	char arr1[] = "I belive you!!";//注意是char类型
	char arr2[] = "**************";
	int len = strlen(arr1);
	int left = 0;
	int right = len - 1;//计算字符串长度时，不包含\0结束标志，所以是right = len - 1
	for (left = 0, right = len - 1; left <= right; left++, right--)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//睡眠函数-单位:毫秒
		system("cls");//执行系统命令--cls:清理屏幕信息,为了更好的显示在一行
	}
	printf("%s\n", arr2);
	return 0;
}