#define _CRT_SECURE_NO_WARNINGS 1
//
//
//�����������Ӵ�С���
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\t%d\t%d\t\n",a,b,c);

	//��������̶���a��b��c
	//int a=2;
	//int b=3;
	//int c=5;

	if(a<b)
	{
		int tmp=a;
		a=b;
		b=tmp;//���������Ĵ���a��
	}

	if(a<c)
	{
		int tmp=a;
		a=c;
		c=tmp;//���������ֵ�浽a��
	}

	if(b<c)
	{
		int tmp=b;
		b=c;
		c=tmp;//���������ֵ�浽b��
	}
	printf ("%d %d %d",a,b,c);//ע��a�����ֵ��b��ϴ�ֵ��c����Сֵ
	return 0;
}




////�Ż�ʱ�������
//
//#include <stdio.h>
//
////��ʵ�δ����βε�ʱ���βν���ʵ�ε�һ����ʱ����
////���βεĸı䲻��ı�ʵ��
//
////�β�
//int Swap(int x,int y)
//{
//	int tmp=x;
//	x=y;
//	y=tmp;
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d",&a,&b,&c);
//	printf("%d\t%d\t%d\t\n",a,b,c);
//
//	if(a<b)
//	{
//		//ʵ��
//		Swap(a,b);
//	}
//
//	if(a<c)
//	{
//		Swap(a,c);
//	}
//
//	if(b<c)
//	{
//		Swap(b,c);
//	}
//	printf ("%d %d %d",a,b,c);//ע��a�����ֵ��b��ϴ�ֵ��c����Сֵ
//	return 0;
//}


//��������и������Ż�
//�ģ�ָ�뽨���βκ�ʵ�ε���ϵ


//#include <stdio.h>
//void Swap(int* px,int* py)//ֻ��ϰ��ǰ��p
//{
//	int tmp=*px;//*px��a
//	*px=*py;//*py��b
//	*py=tmp;
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d",&a,&b,&c);
//	printf("%d\t%d\t%d\t\n",a,b,c);
//
//	if(a<b)
//	{
//		//ʵ��
//		Swap(&a,&b);
//	}
//
//	if(a<c)
//	{
//		Swap(&a,&c);
//	}
//
//	if(b<c)
//	{
//		Swap(&b,&c);
//	}
//	printf ("%d %d %d",a,b,c);//ע��a�����ֵ��b��ϴ�ֵ��c����Сֵ
//	return 0;
//}

//�������ڲ���ı亯���ⲿ��ĳЩֵʱ������ֵ��ʹ��ָ��
//�������ڲ���������ı亯���ⲿ��ĳЩֵʱ��ֻ����õ��ⲿ��ֵʱ���������ü���