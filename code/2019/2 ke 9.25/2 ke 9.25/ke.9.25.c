#define _CRT_SECURE_NO_WARNINGS 1




////����1 ~��λȡ��
//#include <stdio.h>
//int main ()
//{
//	int num=0;
//	//00000000 00000000 00000000 00000000
//	//11111111 11111111 11111111 11111111����
//	//11111111 11111111 11111111 11111110�����1
//	//10000000 00000000 00000000 00000001ԭ��Ϊ-1
//	//���� ԭ�룬���룬������ͬ
//	//���� ԭ��ȡ��+1=����
//	//�ڴ��д��Ϊ����
//	//�����ӦΪԭ��
//	printf("%d\n",~num);
//	return 0;
//}


//����2 ++��--

//#include <stdio.h>
//int main ()
//{
//	int a=10;
//	int b=a++;//a=11,b=10�ֿ�  //���壺a=11,b=10
//	//����++����ʹ���ټӼӣ��Ȱ�a��b������a++��a
//
//	int c=++a;//c=11,a=11�ֿ�  //���壺c=12,a=12
//	//ǰ��++���ȼӼӺ�ʹ�ã��Ȱ�a++��c����a++ ��a
//
//	int d=a--;//a=9,d=10�ֿ�  //���壺a=11,d=12
//	//����--����ʹ���ټ������Ȱ�a��d������a--��a
//
//	int e=--a;//e=9,a=9�ֿ�  //���壺e=10,a=10
//	//ǰ��--���ȼ�����ʹ�ã��Ȱ�a--��e����a-- ��a
//	printf("a=%d b=%d c=%d  d=%d e=%d\n",a,b,c,d,e);
//	
//	return 0;
//}
//
////����������Ϊ��a=10,b=10��c=12,d=12��e=10





////����3 ǿ������ת��
//#include <stdio.h>
//int main()
//{
//
//	int a=(int)3.14;//��double ת����int
//	printf("a=%d\n",a);
//
//	return 0;
//}




////  ����4 �ؼ��� typedef
//#include <stdio.h>
//
//typedef unsigned int unit;//tepedef ����������
//int main()
//{
//	//��˼һ��
//	unsigned int num1=10;
//	unit num2=10;
//
//	return 0;
//}



////����5 �ؼ��� static 
//
//#include <stdio.h>
//
//void test()
//{
//	int a=1;
//	a++;
//	printf("%d",a);//���Ϊ22222 ����Ϊa�ھֲ�������������ڿ�ʼ���������ڽ���
//}
//int main ()
//{
//	int i=0;
//	for (i=0;i<5;i++)
//	{
//		test();
//	}
//	return 0;
//}
//

////����6  ���static�ھֲ�����
//#include <stdio.h>
//
//void test()
//{
//	static int a=1;//����֮��δִ�У�
//	a++;
//	printf("%d",a);//���Ϊ23456
//}
//int main ()
//{
//	int i=0;
//	for (i=0;i<5;i++)
//	{
//		test();
//	}
//	return 0;
//}



////����7 ���static��ȫ�ֱ���
//#include <stdio.h>
//int g_val=2019;
////static int g_val=2019;//��������
////��������
//extern int g_val;//ȫ�ֱ���  ����+���� //extern �����ⲿ����
//int main ()
//{
//	printf("%d\n",g_val); 
//	return 0;
//}
//



//����8��static���κ���

#include<stdio.h>

static extern int Add(int x,int y);//extern�����ⲿ����Add

Add(int x,int y)
{
	return x+y;
	//����z=x+y
	//return z;
}

int main()
{
	int sum;//����sum
	sum=Add(2,3);
	printf("%d\n",sum);
	//����printf("%d\n",Add(2,3));

	return 0;
}


//static���ã� 
//	���α���
//		a.���ξֲ�����
		    /*�ı��˱������������ڣ��þ�̬�ֲ���������������Ȼ���ڣ����������
			���������ڲŽ���*/
//		b.����ȫ�ֱ���
			/*�ı���ȫ�ֱ�����������ʹ���ȫ�ֱ���ֻ���ڱ�Դ�ļ���
            ʹ�ã�����������Դ��������ʹ��*/
//	���κ���
        //�ı�������static����ֻ���ں������ڵ�Դ�ļ�������ʹ�ã�����Դ�ļ��޷�ʹ��