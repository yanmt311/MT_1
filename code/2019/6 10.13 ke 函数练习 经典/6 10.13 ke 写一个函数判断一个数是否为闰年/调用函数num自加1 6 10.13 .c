#define _CRT_SECURE_NO_WARNINGS 1

//����4 дһ��������ÿ����һ������������ͻὫnum��ֵ����1


//Ҫ�ı�num ����Ҫ��ַ����

#include <stdio.h>
void Inc(int *p)
{
	(*p)++;//*p++ ������*��p++��
}
int main()
{
	int num = 0;

	Inc(&num);//�ص�

	printf("%d\n",num);
	return 0; 
}