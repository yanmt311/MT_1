#include<iostream>
#include "Student.h"
#include <windows.h>
using namespace std;


int main()
{
	Student  p1, p2;

	//���ص���
	p1.SetStudentdent("Li qing", 98); //�����ó�ֵ
	p2.SetStudentdent("Wang Gang", 90, 88); //�����ó�ֵ

	p1.Show();//��ӡ��Ϣ
	p2.Show();//��ӡ��Ϣ
	system("pause");
	return 0;
}