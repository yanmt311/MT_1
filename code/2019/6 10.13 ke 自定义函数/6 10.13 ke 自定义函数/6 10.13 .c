#define _CRT_SECURE_NO_WARNINGS 1

////����1  �Ƚ������������ֵ
//#include <stdio.h>
//
//int get_max(int x,int y)
//{
//	return x>y?x:y;
//
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	
//	int max = get_max(a,b);//a��b�е����ֵ����max // max = get_max(1,2)

//	printf("max = %d\n",max);
//
//	return 0;
//}



//����2  �������Ľ���
//����

//����ʱ���󣬻��б���������Ӵ���

//��ʵ�δ����β�ʱ���β�ʱʵ�ε�һ����ʱ���������βε��޸Ĳ���ı�ʵ��


//#include<stdio.h>
//void Swap(int x,int y)//�β�
//{
//	int temp = x;
//	x = y;
//	y =temp;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//
//	printf("a=%d b=%d\n",a,b);
//	Swap(a,b);//ʵ��  //��ֵ����
//	printf("a=%d b=%d\n",a,b);
//
//	return 0;
//}

//���� ע��һ��Ҫ��ָ��
#include <stdio.h>
void Swap(int *px,int *py)
{
	int temp =*px;
	*px = *py;
	*py = temp;
}

int main()
{
	int a = 20;
	int b = 10;

	printf("a=%d b=%d\n",a,b);
	Swap(&a,&b);//ʵ��  //��ַ����
	printf("a=%d b=%d\n",a,b);

	return 0;
	
}