#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED


class Student
{
private:
	char Name[20];	       //ѧ������
	double Chinese;	       //���ĳɼ�
	double Math;		   //��ѧ�ɼ�
public:
	double Average();                          //����ƽ���ɼ�
	double Sum();	                           //�����ܷ�
	void Show();	                           //��ӡ��Ϣ

	//���أ��β��б������ͬ�������أ�
	void SetStudentdent(char*, double);//Ϊ���������������ĳɼ�
	void SetStudentdent(char*, double, double);//Ϊ���������������ĳɼ�����ѧ�ɼ�
};

#endif // STUDENT_H_INCLUDED