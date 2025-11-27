#include<iostream>
using namespace std;

class Array{
	int index,size;
	int* pArr;
	public:
		
		Array(int);
		bool isEmpty();
		bool isFull();
		bool addElement(int);
		bool removeElement(int);
		void display();
		
};
