#pragma once
#include "Human.h"

class Student :	public Human
{
	char * vuz;
public:
	Student();
	Student(const char *n, int a, const char*v);
	 void Output();

     ~Student() ;
};


