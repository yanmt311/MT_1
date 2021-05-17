#pragma once

class Person
{
	void InitPerson(char name[],char gendar[],int age);
	void Eat();
	void Sleep();
	void PrintpersonInfo();

	char _name[20];
	char _gendar[3];
	int _age;
};    