#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int age;
	cout<<"Enter Your Age :";
	cin>>age;
	try{
		if(age<0||age>150){
			throw "invallid Age! Enter the age between 0 to 150";
		throw age;	
		}
	}
	catch(const char* e){
		cout<<"Error"<<endl<<e;
	}
		catch(...){
		cout<<"Error gen"<<endl;
	}


}
