#define _CRT_SECURE_NO_WARNINGS 1


//�ṹ��
#include<stdio.h>

struct Student
{
	char name[20];
	int  age;
	char sex[5];
	char id[15];
};//ע��ֺŲ�����

int main()
{
	struct Student s1={"����",20,"��","20181111"};
	struct Student s2={"����",12,"Ů","22222222"};
	printf("%s %d %s %s\n",s1.name,s1.age,s1.sex,s1.id);
	printf("%s %d %s %s\n",s2.name,s2.age,s2.sex,s2.id);
	return 0;
}