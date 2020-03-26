#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>



//思想：试除法
//素数求解的n种境界
//打印100-200之间的素数
int main ()
{
 int i=0;
 int j=0;
 int count=0;//计数器
 for(i=100;i<=200;i++)
 {
    //printf("%5d",i);//输出100-200间的数
    //判断i是否为素数
    //判段100是否为素数，即用100除2-99间的数，若除不尽则为素数
    //对与任意i，用2~i-1的数
	 for(j=2;j<i;j++)
	{
		if(i%j==0)
		break;//j不满足j<i,或能除尽不是素数的
	}
	if(j>=i)
	{
		count++;//计数
		printf("%d\n",i);//j>=i必然为i素数
	}
 }
	printf("count=%5d\n",count);//i均输出后计数，注意放的位置
	return 0;
}

//优化1
//for(i=100;i<=200;i++)
// {
//    
//	 for(j=2;j<i/2;j++)//注意i/2少了一半，被2整除必然不是素数,c=a*b,其中至少有一个是小于i/2
//	{
//		if(i%j==0)
//		break;
//	}
//	if(j>=i/2)
//	{
//		count++;
//		printf("%d\n",i);
//	}
//	
//	
// }
//	printf("count=%5d\n",count);
//	return 0;
//
//}


//优化2
for(i=100;i<=200;i++)
 {
    
	 for(j=2;j<=sqrt(i);j++)//注意sqrt包含在math.h头文件中
	{
		if(i%j==0)
		break;
	}
	if(j>sqrt(i))
	{
		count++;
		printf("%d\n",i);
	}
	
	
 }
	printf("count=%5d\n",count);
	return 0;
}


////优化3
//for(i=101;i<=200;i+=2)
// {
//    
//	 for(j=2;j<=sqrt(i);j++)
//	{
//		if(i%j==0)
//		break;
//	}
//	if(j>sqrt(i))//注意不能大于等于？？
//	{
//		count++;
//		printf("%d\n",i);
//	}
//	
//	
// }
//	printf("count=%5d\n",count);
//	return 0;
//}