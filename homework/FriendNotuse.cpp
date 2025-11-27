#include<iostream>
using namespace std;
class Time{
	int hr,min,sec;
	public:
	Time(int h,int m,int s){
		this->hr=h;
		this->min=m;
		this->sec=s;
	}
	void setHr(int h){
		this->hr=h;
	}
	void setMin(int m){
		this->min=m;
	}
	void setSec(int s){
		this->sec=s;
	}
	int getHr(){
		return this->hr;
	}
	int getMin(){
		return this->min;
	}
	int getSec(){
		return this->sec;
	}
	
};

ostream& operator<<(ostream& o,Time& t){
		o<<t.getHr()<<" : "<<t.getMin()<<" : "<<t.getSec()<<endl;
		return o;
	}
int main(){
	Time t1(10,20,30);
	Time t2(12,34,05);
	cout<<t1<<t2;
}
