#define _CRT_SECURE_NO_WARNINGS 1

////����1  define ���峣��
//#include<stdio.h>
//
//#define NUM 1000
//#define STR "�Ǻ�"
//#define LOOP 
//for(;;)
//{
//	printf("hehe\n")
//}
//
////���������������з�\(�ǵ�\���ܼӿո�)
//#define LOOP for(;;)\//�������з�
//{\
//	printf("hehe\n")\
//}
//int main ()
//{
//	int max=NUM;//���ƽ�NUM��1000�滻
//	printf("%d\n",max);//��һ������
//	printf("%s\n",STR);//�ڶ����ַ���
//	LOOP;//����������
//	return 0;
//}



////����2  define �����
//
////2.1 ԭ�ȵĺ�����
// 
//#include<stdio.h>
//
//int ADD(int x,int y)
//{
//	return x+y;
//}
//
//int main ()
//{
//	int a=10;
//	int b=20;
//	int sum=ADD(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}


////2.2 �궨�巨
//
//
//#include<stdio.h>
//
//#define ADD(x,y) ((x)+(y)) 
////����+���+���壬ADD��û�з���;��x��y�����ź������ٴ�����,��ֹ������ִ���
//
//int main ()
//{
//	int a=10;
//	int b=20;
//	int sum=ADD(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}


//2.3 ע������

//#include<stdio.h>
//
//#define MUL(x,y) x*y //����+���+���壬ADD��û�з���
//
//int main ()
//{
//	int a=1+2;
//	int b=1+2;
//	int c=MUL(a,b);//�����9
//	int d=MUL(1+2,1+2);//�����5��Ӧ����9 
//	printf("c=%d,d=%d\n",c,d);
//	printf("%d\n",MUL(1+2,1+2));//�����5��Ӧ����9 
//	//�����������1+2*1+2=5����ֹ���ִ��󣬸�x��y������
//	return 0;
//}


////2.4 ��������
//
//#include<stdio.h>
//#define MUL(x,y) ((x)*(y)) 
//int main ()
//{
//	printf("%d\n",MUL(1+2,1+2));//���ɽ��Ϊ9
//}


