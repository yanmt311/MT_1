#define _CRT_SECURE_NO_WARNINGS 1


//if...else


////程序1  单分支
//#include <stdio.h>
//int main ()
//{
//	int age=0;
//	scanf("%d",&age);//注意%d后不能加\n,否则会延时
//
//	if(age>=18)
//		printf("成年\n");
//	else
//		printf("未成年\n");	
//
//	return 0;
//
//}

//// 程序2 多分支
//#include<stdio.h>
//int main ()
//{
//	int age=0;
//	scanf("%d",&age);
//	
//	if(age<18)
//		printf("未成年\n");
//	else if(age>=18&&age<30)//if(18<=age<=30)表示错误，若输入10，18<=10,为假，即为0；则(0<=30)永远成立，即该逻辑错误
//		printf("青年\n");
//	else if(age>=30&&age<50)
//		printf("壮年\n");
//	else 
//		printf("中老年\n");
//	return 0;
//}

////程序3 判断一个数是否为奇数
//#include <stdio.h>
//int main ()
//{
//	int a = 0;
//	scanf("%d",&a);
//
//	if(a%2!=0)
//		printf("%d是奇数",a);
//	else
//		printf("%d是偶数",a);
//	return 0;
//}


////程序4 输出1-100之间的奇数
////程序4.1

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%2==1)
//			printf("%d ",i);
//	}
//	return 0;
//}


////程序4.2 陷阱程序 错误使用break
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%2==0)
//			break;//break如果遇到偶数，则跳出整个循环
//		else 
//			printf("%d ",i);
//	}
//	return 0;
//}
//


////程序4.3 修改陷阱
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%2==0)
//			continue;
//		else 
//			printf("%d ",i);
//	}
//	return 0;
//}



////程序4.4 优化
//#include <stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ",i);
//	}
//}


////switch: case break;
////程序5  多分支 case
//
//#include<stdio.h>
//int main ()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1://冒号
//			printf("星期一\n");//分号
//			break;//分号
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//		default://冒号
//			printf("输入有误\n");
//			break;
//	}
//	return 0;
//}

//程序6 注意break跳出整个程序，没有则按顺序进行
#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch(n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch(n)
		{//switch允许嵌套使用
			case 1:
				n++;
			case 2:
				m++;
				n++;
				break;//跳出里面的switch循环
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n",m,n);
	return 0;
}