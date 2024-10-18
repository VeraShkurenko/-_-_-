#include "Student.h"
#include "Teacher.h"
#include<iostream>
using namespace std;

void main()
{
	
	/*Student * ptr = new Student("Ivan", 23, "Politex");

	ptr->Output();
	delete ptr;*/


	//Human * ptr = new Student("Ivan", 23, "Politex");

	//ptr->Output();
	//delete ptr;

	Human* ptr = nullptr;

	int choice = 0;

	cout << "1. Student" << endl;
	cout << "2. Teacher" << endl;
	cout << "Make your choice" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		ptr = new Student("Ivan", 22, "ItStep");
		break;

	case 2:
		ptr = new Teacher("VV", 43, "Liceum#1", "biology");
		break;
	}
	ptr->Output();
	ptr->~Human();


	system("pause");
}