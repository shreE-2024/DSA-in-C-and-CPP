#include"node.h"

class Linklist{
	Node* start;
	public:
		Linklist();
		void insertBeg(int);
		void insertEnd(int);
		void insertPos(int,int);
		void delateBeg();
		void deleteEnd();
		void deletePos(int);		
		void display();
		void bubbleSort();
};
