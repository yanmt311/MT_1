//#include "class.h"

//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}


#include <iostream>
using namespace std;

#include "Person.h"

int Person::Add(int left, int right)
{
	return left + right;
}

double Person::Add(double left, double right)
{
	return left + right;
}


//void Person::InitPerson(char name[], char gender[], int age)
//{
//	strcpy(_name, name);
//	strcpy(_gender, gender);
//	_age = age;
//}
//
//void Person::Eat()
//{
//	cout << "Eat()" << endl;
//}
//
//void Person::Sleep()
//{
//	cout << "Sleep()" << endl;
//}
//
//void Person::PrintPersonInfo()
//{
//	cout << _name << "-" << _gender << "-" << _age << endl;
//}