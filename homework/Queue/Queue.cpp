#include"Queue.h"

Queue::Queue(int s){
	this->size=s-1;
	this->front=-1;
	this->real=-1;
	this->ptr=new int(size);
}
bool Queue::isEmpty(){
	if(front==-1&&real==-1){
		return true;
	}
	else{
		return false;
	}
}
bool Queue::isFull(){
	if(front==size&&real==-1){
		return true;
	}
	else{
		return false;
	}
}
void Queue::nQueue(int ele){
	if(this->isFull()){
		cout<<"\n Queue is Full...";
	}
	else{
		ptr[++front]=ele;
		cout<<endl<<ele<<" is successfully added in queue....";
	}
}
void Queue::dQueue(){
	if(this->isEmpty()){
		cout<<"\n Queue is Empty...";
	}
	else{
		int i,ele;
		ele=ptr[1+real];
		cout<<endl<<ele<<" is Element is removed...";
		for(i=real;i<front;i++){
			ptr[i]=ptr[i+1];
		}
		ptr[i]=0;
		front--;
	}
	
}
void Queue::display(){
	int i;
	cout<<endl<<"    ";
	for(i=front;i>=0;i--){
		cout<<"| "<<ptr[i]<<" ";
	}
}

