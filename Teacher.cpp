#include "Teacher.h"
#include<iostream>
using namespace std;

Teacher::Teacher()
{
	school = nullptr;
	subject = nullptr;
}

Teacher::Teacher(const char* n, int a, const char* sch, const char* sub) : Human(n, a)
{
	cout << "Teacher construct\n";
	school = new char[strlen(sch) + 1];
	strcpy_s(school, strlen(sch) + 1, sch);
	subject = new char[strlen(sub) + 1];
	strcpy_s(subject, strlen(sub) + 1, sub);
}

void Teacher::Output()
{
	cout << "Teacher Output\n";
	Human::Output();
	cout << "school: " << school << endl << endl;
	cout << "subject: " << subject << endl << endl;
}

Teacher::~Teacher()
{
	cout << "Teacher destruct\n";
	delete[] school;
	delete[] subject;

}
