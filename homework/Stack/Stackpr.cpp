#include<iostream>
using namespace std;

class Stack{
	int top,size;
	int* ptr;
	public:
		Stack(int s){
			size=s-1;
			top=-1;
			ptr	=new int[size];
		}
		bool isEmpty(){
			if(top==-1){
				return true;
			}
			else {
				return false;
			}
		}
		bool isFull(){
			if(top==size){
				return true;
			}
			else {
				return false;
			}
		}
		void push(int ele){
			if(isFull()){
				cout<<"\n Stack is Full....";
			}
			else{
				ptr[++top]=ele;
				cout<<endl<<ele<<"  is Added is stack...";
			}
		}
		void pop(){
			if(isEmpty()){
				cout<<"\n Stack is Empty....";
			}
			else{
				cout<<endl<<ptr[top--]<<"is removed from stack...";
			}
		}
		void peek(){
			if(isEmpty()){
				cout<<endl<<"Stack is EMpty....";
			}
			else{
				cout<<endl<<ptr[top]<<"  is peek of Stack... ";
			}
		}
		void display(){
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
};
int main(){
	Stack s1(5);
//	s1.display();
//	s1.pop();
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.display();
	s1.push(6);
	s1.display();
	s1.peek();
}
