#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//知识点1:函数重载
//1.1 两个函数能形成函数重载吗？

//1.2
//1.3
//1.4

//汇编可以，但是编译错误  --- F7编译快捷键 ---ok
#if 0
int Add(int left, int right);
int main()
{
	return 0;
}
#endif


#if 0
int Add(int left, int right)
{
	return left + right;
}

double Add(double left, double right)
{
	return left + right;
}

int main()
{
	int ret = Add(1, 2);
	int ret2 = Add(3.4, 5.6);
	cout << ret << ret2 << endl;
}
#endif
int main()
{
	int ret = 13;
	int ret2 = 14;
	cout << ret << ret2 << endl;
}
//知识点2：引用
//2.1 引用概念

//2.2 引用特点
//	a、
//  b、
//  c、

//2.3 常引用 --- const类型的引用

