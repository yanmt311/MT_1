#define _CRT_SECURE_NO_WARNINGS 1
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����
//������1��forѭ��ʵ���������������
//     2���������������ַ�����ȣ����½�ɹ������򣬵�½ʧ��
//     3���ַ����Ƚϣ���strcmp,������== -----string compare---����ͷ�ļ�#include <string.h>
//     4������---��ַ������scanfʱ����д&����
//֪ʶ�㣺
//����������Լ�������ͷ�ļ�����ʹ��""
//#include "test.h"
////���������⺯����ͷ�ļ�����ʹ��<>
//#include <stdio.h>

#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i=0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s",password);

		if (0 == strcmp(password, "123456"))
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("��½ʧ��\n");
	}
	return 0;
}

