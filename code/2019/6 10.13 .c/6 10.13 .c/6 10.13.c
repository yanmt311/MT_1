#define _CRT_SECURE_NO_WARNINGS 1

//��ʽ����
//����1 
//#include <stdio.h>
//int main ()
//{
//	int len = strlen("abc");//�󳤶�
//	//printf("%d\n",len);
//	//�滻Ϊ
//	printf("%d\n",strlen("abc"));
//	return 0;
//}

//����2 
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = {0};
//
//	strcpy(arr2,arr1);
//	//printf("%s\n",arr2);
//
//	//�滻Ϊ
//	printf("%s\n",strcpy(arr2,arr1));
//	return 0;
//}

//����3  ������
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = {0};
//
//	strcpy(arr2,arr1);
//	//printf("%s\n",arr2);
//
//	//�滻Ϊ
//	printf("%d\n",strlen(strcpy(arr2,arr1)));
//	return 0;
//}

//����4 ��Ȥ������ ����printf�ķ���ֵ
#include <stdio.h>
int main()
{
	printf("%d",printf("%d",printf("%d",43)));

	//printf���ص����ַ�����
	//����ӡ���Ϊ4321
	//���ɣ�printf("%d",43)   ���43  ����2
	//      printf��"%d",2��  ���2  ����1
	//      printf��"%d",1��  ���1 


	return 0;
}

