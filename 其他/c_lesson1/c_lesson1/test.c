#include <stdio.h>  
#include <windows.h>
#pragma warning(disable:4996)//scanf������

//1�������ܵ���ʶ
#if 0
int main() //��ں���,���ҽ���һ��
{
	printf("helloworld\n");
	system("pause");
	return 0;//Ĭ��д��
}
#endif


//���룺����windows��������
//      ���ɽ�����������벻����
//      �������ɽ�����������±��뵫������
//      ���ص��ԣ����벢����



//2����������
//����Ҫ��cpu���õ����ݣ���cpu�����У����ڴ��п���һ��ռ�
//sizeof
#if 0
int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	system("pause");
	return 0;
}
#endif

//������ô������ͣ���ʵ��Ϊ�˸��ӷḻ�ı�������еĸ���ֵ��
//�������Ϊ�˽���˵����⣬���˵ļ��㳡���Ƿǳ���ġ�


//3����ӡ��д��ĸ
#if 0
int main()
{
	char c = 'a';
	for (; c <= 'z'; c++){
		printf("%c ", c);
	}
	printf("\n");
	system("pause");
	return 0;
}
#endif
//������ע�ͣ�ctrl+k+c
//������ȥע�ͣ�ctrl+k+u

//4��
//������ֵ�ǿɱ�ģ����磺���䣬���أ�н�ʣ���
//������ֵ�ǲ���ģ����磺Բ���ʣ��Ա𣨣��������֤���룬Ѫ�͵ȵȣ�
#if 0
//ȫ�ֱ������ڴ������ⲿ
double weight = 160.5;
void fun()
{
	printf("%f\n", weight);
	//printf("%f\n", high); //---�ֲ����� error
}
int main()
{
	//�ֲ�����:�ڴ�����ڲ�
	float high = 111.f;
	printf("%f\n", weight);
	printf("%f\n", high);
	fun();
	system("pause");
	return 0;
}
#endif

#if 0
int global = 2019;//ȫ�ֱ���
int main()
{
	int local = 2018;//�ֲ�����
	int global = 2020;//�ֲ�����
	printf("global = %d\n", global);
	system("pause");
	return 0;
}
#endif

//5���������ļӷ�
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("��������������:>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
