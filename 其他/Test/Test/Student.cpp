#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;

//ƽ���ɼ�
double Student::Average()
{
	return (Chinese + Math) / 2;
}

//�ܷ�
double Student::Sum()
{
	return Chinese + Math;
}        

//��ӡ��Ϣ
void Student::Show()	
{
	cout << "Name:  " << Name << endl << "Score:  " << Chinese << '\t' <<
		Math << '\t' << "average:  " << Average() << '\t' << "Sum:   " << Sum() << endl;
}

//���ض���
void Student::SetStudentdent(char *name, double chinese, double math)
{
	strcpy(Name, name);	//������
	Chinese = chinese;	//�����ĳɼ�
	Math = math;	    //����ѧ�ɼ�
}

void Student::SetStudentdent(char *name, double chinese)
{
	strcpy(Name, name);	//������
	Chinese = chinese;	//�����ĳɼ�
}