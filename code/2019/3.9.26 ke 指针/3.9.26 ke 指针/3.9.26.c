#define _CRT_SECURE_NO_WARNINGS 1


////����1  ��ӡ�ڴ��ַ
//#include<stdio.h>
//int main()
//{
//	int num=10;//�����ĸ��ֽ�
//	&num;
//	printf("%p\n",&num);//%p��ַ�Ĵ�ӡ���ֽڵ�λ�ã�ʮ�����ƴ棬0��ʡ��
//	printf("%x\n",&num);//%xʮ�����ƵĴ�ӡ��0ʡ��
//
//	//�����ƣ�00000000 00000000 00000000 00001010
//	//ʮ�����ƣ�00 00 00 0a���ڵ����д�ʱ���������
//	return 0;
//
//}

//
////����2  ָ��Ӧ��
//#include<stdio.h>
//int main()
//{
//	int num=10;
//	int*  p=&num;//*˵��p��һ��ָ�������int˵��pָ�����ε�num���� 
//	
//	/*char ch='w';
//	char* pc=&ch;*/
//
//	*p=20;//*p����*p������num������20���Ǹ�num��ֵΪ20
//	return 0;
//}
//



//����3 ָ���С

#include<stdio.h>
int main ()
{
	printf("%d\n",sizeof(int*));//4
	printf("%d\n",sizeof(char*));//4
	printf("%d\n",sizeof(double*));//4
	//ָ���С��32λ��4���ֽڣ�64λ8���ֽڣ��������޹�

	return 0;
}

//3 9.25 zuoye3�����������Ӵ�С������Ż�������ָ��