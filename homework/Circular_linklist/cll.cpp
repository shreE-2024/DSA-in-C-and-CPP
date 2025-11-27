#include"cll.h"

CLL::CLL(){
	last = NULL;
}
void CLL::insertPos(int data,int pos){
	Node* temp = new Node(data);
	if(last==NULL){
		last = temp;
		last->setNext(last);
		return;
	}
	if(pos==1){
		temp->setNext(last->getNext());
		last->setNext(temp);
		return;
	}
	int i=1;
	Node* p= last->getNext();
	while(i<pos-1 && p!=last){
		i++;
		p=p->getNext();
}	
	p->setNext(temp);
	temp->setNext(p);
	last=temp;
}
void CLL::display(){
	if(last==NULL){
		cout<<"\n No Node yo display...";
	}
	
	Node* p= last->getNext();
	cout<<endl;
	while(p!=last){
		//cout<<"\n in Display function..";
		cout<<"\t\t\t"<<p->getData()<<"-->";
		p=p->getNext();
		
	}
	cout<<p->getData();
}
void CLL::deletePos(int pos){
	if(last==NULL){
		cout<<"\n\t No Node to delete...";
		return;
	}
	Node* p=last->getNext();
	if(pos==1){
		if(p==last){
			cout<<"\n\t"<<p->getData()<<" is deleted...";
			delete last;
			last=NULL;
			return;
		}
		last->setNext(p->getNext());
		delete p;
		return;
		
	}
	else{
		int i=1;
		while(i<pos-1 && p!= last){
			p=p->getNext();
			i++;
		}
		Node* q= p->getNext();
		p->setNext(q->getNext());
		if(q==last){
			last=p;
		}
		cout<<"\n\t"<<q->getData()<<" is deleted...";
		delete q;
	}
}
CLL::~CLL(){
	
}
