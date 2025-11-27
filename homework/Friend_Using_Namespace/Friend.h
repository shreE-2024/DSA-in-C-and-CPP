#include<iostream>
using namespace std;
class Time{
	int hr,min,sec;
	int static count;
	public:
	Time(int,int,int);
	void setHr(int);
	void setMin(int);
	void setSec(int);
	int static getcount();
	int getHr();
	int getMin();
	int getSec();
	void display();
	
};
ostream& operator<<(ostream&,Time&);
istream& operator>>(istream&,Time&);
