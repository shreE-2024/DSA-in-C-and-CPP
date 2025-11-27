#include"dll.h"

DLL::DLL(){
	start=NULL;
}
void DLL::insertPos(int data,int pos){
	Node* temp = new Node(data);
	if(start==NULL){
		start=temp;
		return;
	} 
	if(pos==1){
		temp->setNext(start);
		start->setPrev(temp);
		start=temp;
		return
	}
	Node* p= start;
	int i=1;
	while()
}
void DLL::display()
void DLL::deletePos()
