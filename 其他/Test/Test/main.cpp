#include<iostream>
#include "Student.h"
#include <windows.h>
using namespace std;


int main()
{
	Student  p1, p2;

	//重载调用
	p1.SetStudentdent("Li qing", 98); //对象置初值
	p2.SetStudentdent("Wang Gang", 90, 88); //对象置初值

	p1.Show();//打印信息
	p2.Show();//打印信息
	system("pause");
	return 0;
}