#include <iostream>
using namespace std;

//1.1
//������󣺡���ʼ����: �ӡ�double��ת������const int�������ܶ�ʧ����
//�Ӵ���㿴���������ͨ�����롣
//����ͨ�����룬˵��rd��d�����ã�������
//����޸ĵ�d��rd�е�����Ҳ�����ı䣬��Ϊ���ǹ���һ���ڴ�ռ䡣

int main()
{
	double d = 12.34;
	const int& rd = d;//���Ͳ�һ�£������const

	d = 56.78;
	cout << rd << endl;
	return 0;
}

//1.2
//ra��a�ı�����ra��a�ڵײ�ʹ�õ�ʱ����ͬһ���ڴ�ռ䡣
//�޸�a��raҲ���޸���;���ǲ���ͨ��ra���޸�a�ռ��д洢������---��Ϊra��const������

int main()
{
	int a = 10;
	const int& ra = a;
	// ra = 100;
	a = 200;
	return 0;
}

//1.3