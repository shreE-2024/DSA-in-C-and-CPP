#include"Friend.h"

/*--------------------------------------------------------------------------------------*/
int Time::count=0;
int Time::getcount(){
	cout<<"Count :"<<count<<endl;
}

/*--------------------------------------------------------------------------------------*/

Time::Time(int h,int m,int s){
		this->hr=h;
		this->min=m;
		this->sec=s;
		count++;
		
	}
	
/*--------------------------------------------------------------------------------------*/

void Time::setHr(int h){
		this->hr=h;
	}
void Time::setMin(int m){
		this->min=m;
	}
void Time::setSec(int s){
		this->sec=s;
	}


/*--------------------------------------------------------------------------------------*/
	
int Time::getHr(){
		return this->hr;
	}
int Time::getMin(){
		return this->min;
	}
int Time::getSec(){
		return this->sec;
	}


/*--------------------------------------------------------------------------------------*/

void Time::display(){
	cout<<getHr()<<" : "<<getMin()<<" : "<<getSec()<<endl;
	}


/*--------------------------------------------------------------------------------------*/

	ostream& operator<<(ostream& o,Time& t){
		o<<t.getHr()<<" : "<<t.getMin()<<" : "<<t.getSec()<<endl;
		return o;
	}
	istream& operator>>(istream& i,Time& t){
		int a,b,c;
		i>>a;
		t.setHr(a);
		i>>b;
		t.setMin(b);
		i>>c;
		t.setSec(c);
		return i;
	}
/*--------------------------------------------------------------------------------------*/	


