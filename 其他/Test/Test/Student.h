#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED


class Student
{
private:
	char Name[20];	       //学生姓名
	double Chinese;	       //语文成绩
	double Math;		   //数学成绩
public:
	double Average();                          //计算平均成绩
	double Sum();	                           //计算总分
	void Show();	                           //打印信息

	//重载（形参列表个数不同构成重载）
	void SetStudentdent(char*, double);//为对象置姓名、语文成绩
	void SetStudentdent(char*, double, double);//为对象置姓名、语文成绩，数学成绩
};

#endif // STUDENT_H_INCLUDED