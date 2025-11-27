#include"Stack.h"
int main(){
	int s,ch;
	int ele;
	cout<<"\n Enter the Size of Stack";
	cin>>s;
	Stack s1(s);
	do{
		cout<<"\n\n-------------------------------------------\n\n";
		cout<<"\n Display      :1";
		cout<<"\n Push         :2";
		cout<<"\n Pop          :3";
		cout<<"\n Peek         :4";
		cout<<"\n Exit         :0";
		cout<<"\n\n-------------------------------------------\n\n";
		cout<<endl<<"Enter your choise :";
		cin>>ch;
		switch(ch){
			case 1:{
				s1.display();
				break;
			}
			case 2:{
				
				cout<<endl<<"Enter the Element :";
				cin>>ele;
				s1.push(ele);
				break;
			}
			case 3:{
				s1.pop();
				break;
			}
			case 4:{
				s1.peek();
				break;
			}
			default:{
				cout<<endl<<"Exit....";
				break;
			}
		}
	}while(ch!=0);
}
