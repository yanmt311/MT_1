#define _CRT_SECURE_NO_WARNINGS 1

//goto ���:�����ת�ı�š�
//������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ������
//�����ٵ�ʹ��goto��䣬������������滻

//for ()
//{
//	for ()
//	{
//		for ()
//		{
//			for ()
//			{
//              if��disester��
//				goto error;//����break����ֻ�ܴ��ڲ�ѭ���˳�����һ��ѭ��
//			}
//		}
//	}
//}
//error��


//Demo1:
//#include <stdio.h>
//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}

//Demo2:�ػ�����
//    1���ػ���shutdown -s -t 60    -------60��֮��ػ�
//    2��ȡ���ػ���shutdown -a
//    3���������������һ����ַ---��scanf�в�������&��ַ����
//    4��0 == strcmp���ַ���1���ַ���2��----�Ƚ��ַ����Ƿ����

//������1���ȹػ�
//     2��ͨ���Ƚ��ַ����Ƿ���ȣ�ȡ���ػ�
//     3��goto���ִ��

//����һ��goto���
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char input[200] = { 0 };//�����ַ���ʱ�����飬��������Ϊchar
//	system("shutdown -s -t 60");//�ػ�
//again:
//	printf("��ĵ��Խ���һ����֮�ڹػ��������룺MTMT��ȡ���ػ�");
//	printf("������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "MTMT"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input[200] = { 0 };//�����ַ���ʱ�����飬��������Ϊchar
	system("shutdown -s -t 60");//�ػ�
	printf("��ĵ��Խ���һ����֮�ڹػ��������룺MTMT��ȡ���ػ�");
	printf("������:>");
	scanf("%s", input);
	while (1)//���Ϊ�棬��ִ��ѭ�����
	{
		if (0 == strcmp(input, "MTMT"))
		{
			system("shutdown -a");
			break;//���������ȷ������ѭ��
		}
	}
	return 0;
}