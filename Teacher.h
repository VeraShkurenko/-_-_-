#pragma once
#include "Human.h"
class Teacher :public Human
{
	char* school;
	char* subject;
public:
	Teacher();
	Teacher(const char* n, int a, const char* sch, const char* sub);
    void Output();
	~Teacher();
};

