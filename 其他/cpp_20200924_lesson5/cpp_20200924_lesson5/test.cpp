//c语言的宏：宏常量和宏函数
//宏常量-->const修饰的内容已经是常量
//宏函数-->内联函数
#include <iostream>
using namespace std;
#include <string.h>

//1 c++11特性
//1.1 auto
//使用场景1：代替长的变量名
//使用场景2：基于范围的for循环

//1.2 空值指针nullptr
#if 0
#include <iostream>
using namespace std;

void TestNullPtr(int a)
{
	cout << "TestNullPtr(int)" << endl;
}

void TestNullPtr(int* a)
{
	cout << "TestNullPtr(int*)" << endl;
}
int main()
{
	TestNullPtr(0);
	TestNullPtr(NULL);
	TestNullPtr(nullptr);//使用nullptr代替NULL
	cout << sizeof(nullptr) << endl;//nullptr类型是nullptr_t
	return 0;
}
#endif

//2 类和对象
//2.1
//c是面向过程的；
//c++是基于面向对象的（既有面向对象、又有面向过程，c++兼容c语言）;
//java是面向对象的。

//面向过程和面向对象不是编程语言、而是一种解决问题的思路。
//面向过程：对一个问题而言，解决问题的步骤和过程，一步一步进行下次。可以将每一个步骤封装成一个函数，这个函数按照一定的次序来进行调用，最终完成额所需要做的事情。
//面向对象：通过对象之间的相互协作和交互来完成的。每个对象完成一定的功能。
//	-----在c++中，把现实中能看到的物体（包括也有看不到的物体），称为对象。对象是实实在在存在的实体。
//面试1：面向对象和面向过程的区别？

//2.2 c++中是实现面向对象编程思想---class类
//问题1：c语言中，可以使用struct定义一种新的类型，c语言中结构体struct中可以写函数吗？ --- 不行，编译错误
//问题2：c++呢？ --- 可以写函数
//      在c++中，struct定义的类型就可以看成一个类了。
//c语言结构体中，只能放一些数据；
//c++结构体类中，可以写数据，也可以写函数。
//why？ --- 符合人对事物的认知。
struct Student
{
	char _name[20];
	char _gendar[3];
	int _age;
	int _stuId;

	void InitStudent(char name[], char gender[], int age,int stuId)
	{
		strcpy(_name, name);
		strcpy(_gendar, name);
		_age = age;
		_stuId = stuId;
	}
	void PrintStructStuent()
	{
		cout << _name << " - " << _gendar << " - " << _age << " - " << _stuId << endl;
	}
	void SetAge(int age)
	{
		_age = age;
	}
};
int main()
{
	//c语言中
	Student s1;
	s1._age = 10;
	s._gendar = "女";
	s1._name = "heihei";


	//c++中
	Student s2;
	s2.InitStudent("Peter", "男",19,123456);

	return 0;
}

//2.2 类就是对实体进行描述
//实体有哪些属性---称为类的成员变量
//实体有哪些功能---称为类的成员函数
//抽象：对复杂事物的认知过程。
//方式1：将成员函数的声明和定义全部放在类中
//方式2：类在.h的头文件中进行声明，在.cpp的源文件中进行定义 ---建议使用这中方式

//类:是对对象实体进行米爱哦书的，但时类不是对象实体。
//学生类别 --> 不等于某个具体的学生。
//类也可以看成是新定义的一种数据类型
int main()
{
	//Student是类 --- 可以看成是学生的一个群体
	//s是用Student类定义出来的对象 -- 对象才有属性和功能

	Student s;
	//Student.InitStudent("Peter", "男", 12); ---编译错误，Student不是一个具体的学生，不能将名字，年龄，性别放到Student

	s.InitStudent("Peter", "男",12);
	//s是一个具体存在的学生，能将名字，年龄，性别放到具体的学生对象中
	//报错：
	//面向对象三大特性：封装、继承、多态
	//类和对象模块主要处理：封装特性
	//封装：
	//why？ ---将数据和操作数据的方法进行有机结合（class）；
	//         隐藏对象的属性和实现细节（访问限定符：限定类中哪些成员可以再类外来进行使用。 ）；
	//             ---- private：
	//             ---- protected：
	//             ---- public：
	//         仅对外公开接口来和对象进行交互。
	//what？ --- 
	//函数：实际是将一些语句包装在一起。
	//c语言：数据+操作数据的函数 = 程序
	//c++：各种不同的对象，对象之间相互交互完成事情
	//	   对象：有对象的属性，对象的多有功能
	//             数据          方法
	return 0;
}