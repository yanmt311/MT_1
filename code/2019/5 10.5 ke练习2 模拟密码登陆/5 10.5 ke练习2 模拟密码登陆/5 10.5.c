#define _CRT_SECURE_NO_WARNINGS 1


//���� ģ���½����
#include <stdio.h>
int main()
{
	int i = 0;
	char password[20] = {0};//������һ���Ŀռ�


	for(i=0; i<3; i++)
	{
		printf("����������->:");
		scanf("%s",password);
		if(0 == strcmp(password,"123456"))//strcmp�Ƚ������ַ����Ĵ�С
		{
			break;
		}
		else 
		{
			printf("������������������������룡\n");
		}
	}
	

	if(i<3)
		printf("��½�ɹ�!");
	else 
		printf("�˳�����!");

	return 0;

}