//#define _CRT_SECURE_NO_WARNINGS 1
//
////求除0-999水仙花数（各位数字的位数次方和恰好等于该数本身）
//
//#include <stdio.h>
//#include <math.h>
//int main ()
//{
//	int i = 0;
//	for(i=0; i<999; i++)//范围
//	{
//		//判断i是否为水仙花数
//		//1.求位数
//			//任意一个数除10 商是否为0，为0，则截止,循环
//			int count = 1;
//			int temp = i; //为了避免循内部改变变量
//			int sum = 0;
//			//内部改变了循环变量
//			/*while(i/10 != 0)
//			{
//				count ++;
//				i = i/10;
//			}*/
//
//
//			while(temp/10 != 0)
//			{
//				count ++;
//				temp = temp/10;
//			}
//		//2.计算次方和
//		
//			temp = i;
//			while (temp != 0)
//			{
//				sum += pow(temp%10,count);
//				temp = temp/10;//如123 将3去除，把12赋给temp
//			}
//		//3.判断
//			if(sum == i)
//			{
//				printf("%d ",i);
//			}	
//	}
//	
//	return 0;
//}
//

