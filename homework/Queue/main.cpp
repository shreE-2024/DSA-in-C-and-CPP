#include"Queue.h"
int main(){
	Queue q1(5);
	int ele,ch;
	
	do{
		cout<<"\n\n-------------------------------------\n\n";
		cout<<"\nAdd     :  1"<<endl;
		cout<<"Remove  :  2"<<endl;
		cout<<"Display :  3"<<endl;
		cout<<"Exit    :  0"<<endl;
		cout<<"\n\n-------------------------------------\n\n";
		cout<<"Enter your Choise :";
		cin>>ch;
		cout<<"\n\n-------------------------------------\n\n";
		switch(ch){
			case 1:{
				cout<<"Enter the Element you Add :";
				cin>>ele;
				q1.nQueue(ele);
				break;
			}
			case 2:{
				q1.dQueue();
				break;
			}
			case 3:{
				q1.display();
				break;
			}
		}
	}while(ch!=0);
	
}
