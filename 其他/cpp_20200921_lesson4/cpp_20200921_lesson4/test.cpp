#include <iostream>
using namespace std;

//1.1
//编译错误：“初始化”: 从“double”转换到“const int”，可能丢失数据
//从代码层看，代码可以通过编译。
//可以通过编译，说明rd是d的引用（别名）
//如果修改的d，rd中的内容也会生改变，因为他们共用一块内存空间。

int main()
{
	double d = 12.34;
	const int& rd = d;//类型不一致，必须加const

	d = 56.78;
	cout << rd << endl;
	return 0;
}

//1.2
//ra是a的别名，ra和a在底层使用的时候是同一块内存空间。
//修改a，ra也被修改了;但是不能通过ra来修改a空间中存储的内容---因为ra被const限制了

int main()
{
	int a = 10;
	const int& ra = a;
	// ra = 100;
	a = 200;
	return 0;
}

//1.3