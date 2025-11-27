#include"Linklist.h"

int main(){
	Linklist l1;
	int ch,ele,pos;
	do{
		cout<<"\n\n\t Insert at Begining :   01";
		cout<<"\n\t Insert at End      :   02";
		cout<<"\n\t Insert at Position :   03";
		cout<<"\n\t Delate at Begining :   04";
		cout<<"\n\t Delate at End      :   05";
		cout<<"\n\t Delate at Position :   06";
		cout<<"\n\t Display            :   07";
		cout<<"\n\t Exit               :   00";
		cout<<"\n\n Enter Your Choise : ";
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"\n\n Enter Your Element you want insert : ";
				cin>>ele;
				l1.insertBeg(ele);
				break;
			}
			case 2:{
				cout<<"\n\n Enter Your Element you want insert : ";
				cin>>ele;
				l1.insertEnd(ele);
				break;
			}
			case 3:{
				cout<<"\n\n Enter Your Element Position : ";
				cin>>pos;
				cout<<"\n\n Enter Your Element you want insert : ";
				cin>>ele;
				l1.insertPos(pos,ele);
				break;
			}
			case 4:{
				l1.delateBeg();
				break;
			}
			case 5:{
				l1.deleteEnd();
				break;
			}
			case 6:{
				cout<<"\n\n Enter Your Element Position : ";
				cin>>pos;
				l1.deletePos(pos);
				break;
			}
			case 7:{
				l1.display();
				break;
			}
			default:{
				cout<<"\n\t Exit.....\n";
				break;
			}
		}
	}while(ch!=0);
}
