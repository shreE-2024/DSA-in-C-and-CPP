#include"namespace.h"
#include"TY.h"
class Student{
	int rollNo;
	char name[20];
	public:
	SY::SYMARK s1;
	TY::TYMARK t1;
	Student(int,char*,int,int,int,int,int);
	void setRoll(int);
	int getRoll();
	void setName(char*);
	char* getName();
	char calGrade();
	void display();
};
