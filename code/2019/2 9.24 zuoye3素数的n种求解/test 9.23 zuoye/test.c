#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>



//˼�룺�Գ���
//��������n�־���
//��ӡ100-200֮�������
int main ()
{
 int i=0;
 int j=0;
 int count=0;//������
 for(i=100;i<=200;i++)
 {
    //printf("%5d",i);//���100-200�����
    //�ж�i�Ƿ�Ϊ����
    //�ж�100�Ƿ�Ϊ����������100��2-99�����������������Ϊ����
    //��������i����2~i-1����
	 for(j=2;j<i;j++)
	{
		if(i%j==0)
		break;//j������j<i,���ܳ�������������
	}
	if(j>=i)
	{
		count++;//����
		printf("%d\n",i);//j>=i��ȻΪi����
	}
 }
	printf("count=%5d\n",count);//i������������ע��ŵ�λ��
	return 0;
}

//�Ż�1
//for(i=100;i<=200;i++)
// {
//    
//	 for(j=2;j<i/2;j++)//ע��i/2����һ�룬��2������Ȼ��������,c=a*b,����������һ����С��i/2
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


//�Ż�2
for(i=100;i<=200;i++)
 {
    
	 for(j=2;j<=sqrt(i);j++)//ע��sqrt������math.hͷ�ļ���
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


////�Ż�3
//for(i=101;i<=200;i+=2)
// {
//    
//	 for(j=2;j<=sqrt(i);j++)
//	{
//		if(i%j==0)
//		break;
//	}
//	if(j>sqrt(i))//ע�ⲻ�ܴ��ڵ��ڣ���
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