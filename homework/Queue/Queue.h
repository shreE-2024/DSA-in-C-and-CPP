#include<iostream>
using namespace std;

class Queue{
	int front,real,size;
	int* ptr;
	public:
		Queue(int);
		bool isEmpty();
		bool isFull();
		void nQueue(int);
		void dQueue();
		void display();
};
