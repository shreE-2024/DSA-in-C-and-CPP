#include"Linklist.h"

Linklist::Linklist(){
	start=NULL;
}


/*-----------------------------------------------------------------------------------------*/

void Linklist::insertBeg(Player d){
	Node* temp= new Node(d);
	temp->setNext(start);
	start = temp;
}
void Linklist::insertEnd(Player d){
	Node* temp = new Node(d);
	if(start==NULL){
		start=temp;
		return;
	}
	else{
		Node* p=start;
		while(p->getNext()!=NULL){
			p=p->getNext();
		}
		p->setNext(temp);
	}
}


void Linklist::insertPos(int pos,Player d){
	Node* temp = new Node(d);
	if(start==NULL){
		start=temp;
		return;
	}
	if(pos ==1){
		temp->setNext(start);
		start=temp;
		return;
	}
	Node* p=start;
	int i=1;
	while(i<pos-1 && p->getNext() != NULL){
		i++;
		p=p->getNext();
	}
	temp->setNext(p->getNext());
	p->setNext(temp);
}

/*------------------------------------------------------------------------------------------*/

void Linklist::delateBeg(){
	if(start==NULL){
		cout<<"\n No node to delate....";
		return;
	}
	else{
		Node* p=start;
		start = start->getNext();
		cout<<p->getData()<<" is deleted...";
		delete p;
		return;
	}
}

void Linklist::deleteEnd(){
	if(start==NULL){
		cout<<"\n No node to delate....";
		return;
	}
	if(start->getNext()==NULL){
		cout<<"\n"<<start->getData()<<" is deleted...";
		delete start;
		start=NULL;
		return;
	}
	Node* p = start;
	while(p->getNext()->getNext()!=NULL){
		p=p->getNext();
	} 
	cout<<"\n"<<p->getNext()->getData()<<" is delated...";
	delete p->getNext();
	p->setNext(NULL);
}

void Linklist::deletePos(int pos){
	if(start==NULL){
		cout<<"\n No node to delate....";
		return;
	}
	Node* p = start;
	if(pos == 1){
		start=start->getNext();
		cout<<"\n"<<p->getData()<<" is Delated...";
		delete p;
		return;
	}
	
	int i=1;
	while(i<pos-1 && p->getNext() != NULL){
		i++;
		p=p->getNext();
	}
	Node* q =p->getNext();
	p->setNext(q->getNext());
	cout<<"\n"<<q->getData()<<" is deleted...";
	delete q;
}
/*------------------------------------------------------------------------------------------*/
void Linklist::display(){
	if(start==NULL){
		cout<<"\n No node to display...";
		return;
	}
	else{
		Node* p=start;
		cout<<"\n\n";
		while(p->getNext()!=NULL){
			cout<<p->getData()<<"----->";
			p=p->getNext();
		}
		cout<<p->getData()<<endl;
	}
}
/*-----------------------------------------------------------------------------------------*/
