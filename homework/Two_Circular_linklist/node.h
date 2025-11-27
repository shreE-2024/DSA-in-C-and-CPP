#include<iostream>
using namespace std;

class Node{
	int data;
	Node* next,*prev;
	public:
		Node(int);
		int getData();
		Node* getNext();
		void setData(int);
		void setNext(Node*);
		void setPrev(Node*);
		Node* getPrev();
};
