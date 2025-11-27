#include"stud.h"
#include<string.h>
Student::Student(int roll,char* nm,int c,int m,int e,int t,int p):s1(c,m,e),t1(t,p){
	this->rollNo=roll;
	strcpy(this->name,nm);
}
void Student::setRoll(int r){
	this->rollNo=r;
}
int Student::getRoll(){
	return this->rollNo;
}
void Student::setName(char* nm){
	strcpy(this->name,nm);
}
char* Student::getName(){
	return this->name;
}
char Student::calGrade(){
	char ch;
	int total=s1.getCom()+t1.getPract()+t1.getTheory();
	total=(total*100)/250;
	cout<<"Total          :   "<<total;
	if(total>=70){
		
		ch='A';
	}
	else{
		if(total>=60){
			ch='B';	
		}
		else{
			if(total>=50){
				ch='C';
			}
			else{
				if(total>=40){
					ch='P';		
				}
				else{
					ch='F';	
		
				}
			}
		}
		
	}
	
	return ch;
}
void Student::display(){
	cout<<"\n\n---------+ Student Details +---------\n\n";
	cout<<"Roll Number    :   "<<this->getRoll()<<endl;
	cout<<"Name           :   "<<this->getName()<<endl;
	cout<<"Computer Total :   "<<s1.getCom()<<endl;
	cout<<"Math Total     :   "<<s1.getMath()<<endl;
	cout<<"Electro. Total :   "<<s1.getEle()<<endl;
	cout<<"Theory Marks   :   "<<t1.getTheory()<<endl;
	cout<<"Practical Marks:   "<<t1.getPract()<<endl;
	cout<<"\nGRADE          :   "<<this->calGrade()<<endl;
}
