#include<iostream>
using namespace std;

class Stack{
	int top,size;
	int* ptr;
	public:
		Stack(int );
		bool isEmpty();
		bool isFull();
		void push(int);
		void pop();
		void peek();
		void display();
};

