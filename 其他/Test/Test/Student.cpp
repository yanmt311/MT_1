#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;

//平均成绩
double Student::Average()
{
	return (Chinese + Math) / 2;
}

//总分
double Student::Sum()
{
	return Chinese + Math;
}        

//打印信息
void Student::Show()	
{
	cout << "Name:  " << Name << endl << "Score:  " << Chinese << '\t' <<
		Math << '\t' << "average:  " << Average() << '\t' << "Sum:   " << Sum() << endl;
}

//重载定义
void Student::SetStudentdent(char *name, double chinese, double math)
{
	strcpy(Name, name);	//置姓名
	Chinese = chinese;	//置语文成绩
	Math = math;	    //置数学成绩
}

void Student::SetStudentdent(char *name, double chinese)
{
	strcpy(Name, name);	//置姓名
	Chinese = chinese;	//置语文成绩
}