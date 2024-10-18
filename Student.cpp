#include "Student.h"
#include<iostream>
using namespace std;

Student::Student():Human()
{
	vuz = nullptr;
}
Student::Student(const char *n,int a,const char *v) : Human(n, a)
{
	cout << "Student construct\n";
	vuz = new char[strlen(v) + 1];
	strcpy_s(vuz, strlen(v) + 1, v);
}

Student::~Student()
{
	cout << "Student destruct\n";	
    delete[] vuz;	
}
void Student::Output()
{
	cout << "Student Output\n";
	Human::Output();
	cout << "Vuz: " << vuz << endl << endl;
}
