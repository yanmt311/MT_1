#define _CRT_SECURE_NO_WARNINGS 1

////�����������α�����ֵ,������ֵ�����ݽ��н���
//
//#include <stdio.h>
//int tmp;
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int tmp=0;
//
//	scanf("%d%d",&num1,&num2);
//	//����
//
//	printf("num1=%d,num2=%d\n",num1,num2);
//
//	tmp=num1;
//	num1=num2;
//	num2=tmp;
//
//	printf("num1=%d,num2=%d\n",num1,num2);
//
//	return 0;
//}


//�Ż�1
//�⣺����������ʱ����������������������
//����+ -�������� ���

//#include <stdio.h>
//int main()
//{
//	int num1=0;
//	int num2=0;
//
//	scanf("%d%d",&num1,&num2);
//	//����
//
//	printf("num1=%d,num2=%d\n",num1,num2);
//
//	num1=num1+num2;
//	num2=num1-num2;
//	num1=num1-num2;//����ȱ��
//
//	printf("num1=%d,num2=%d\n",num1,num2);
//
//	return 0;
//}
//

//�Ż�2 �������
#include <stdio.h>
int main()
{
	int num1=0;
	int num2=0;

	scanf("%d%d",&num1,&num2);
	//����

	printf("num1=%d,num2=%d\n",num1,num2);

	//3=011 num1
	//5=101 num2
	//  110 ���num1

	//0^a=a
	//a^a=0

	//��򡪰�������λ���
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;

	printf("num1=%d,num2=%d\n",num1,num2);

	return 0;
}