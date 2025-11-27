#include"Stack.h"

Stack::Stack(int s){
			size=s-1;
			top=-1;
			ptr	=new int[size];
		}
bool Stack::isEmpty(){
			if(top==-1){
				return true;
			}
			else {
				return false;
			}
		}
bool Stack::isFull(){
			if(top==size){
				return true;
			}
			else {
				return false;
			}
		}
void Stack::push(int ele){
			if(isFull()){
				cout<<"\n Stack is Full....";
			}
			else{
				ptr[++top]=ele;
				cout<<endl<<ele<<"  is Added is stack...";
			}
		}
void Stack::pop(){
			if(isEmpty()){
				cout<<"\n Stack is Empty....";
			}
			else{
				cout<<endl<<ptr[top--]<<"is removed from stack...";
			}
		}
void Stack::peek(){
			if(isEmpty()){
				cout<<endl<<"Stack is EMpty....";
			}
			else{
				cout<<endl<<ptr[top]<<"  is peek of Stack... ";
			}
		}
void Stack::display(){
			if(isEmpty()){
				cout<<endl<<"Stack is EMpty to SHow...";
			}
			else{
				int i;
				cout<<"\n\n\n";
				for(i=top;i>=0;i--){
					cout<<endl<<"       |   "<<ptr[i]<<"   |";
				}
				cout<<"\n       +-------+";
			}
		}


