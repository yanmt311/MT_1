#define _CRT_SECURE_NO_WARNINGS 1


//结构体
#include<stdio.h>

struct Student
{
	char name[20];
	int  age;
	char sex[5];
	char id[15];
};//注意分号不能少

int main()
{
	struct Student s1={"张三",20,"男","20181111"};
	struct Student s2={"李四",12,"女","22222222"};
	printf("%s %d %s %s\n",s1.name,s1.age,s1.sex,s1.id);
	printf("%s %d %s %s\n",s2.name,s2.age,s2.sex,s2.id);
	return 0;
}