#include"cll.h"

int main(){
	CLL c1;
	int ch=0,ele,pos;
	do{
		cout<<"\n\n\t Insert  :   01";
		cout<<"\n\t Delate  :   02";
		cout<<"\n\t Display :   03";
		cout<<"\n\t Exit    :   00";
		cout<<"\n\n Enter Your Choise : ";
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"\n\n Enter Your Element you want insert : ";
				cin>>ele;
				cout<<"\n\n Enter Your Element Position : ";
				cin>>pos;
				
				c1.insertPos(ele,pos);
				break;
			}
			case 2:{
				cout<<"\n\n Enter Your Element Position : ";
				cin>>pos;
				c1.deletePos(pos);
				break;
			}
			case 3:{
				c1.display();
				break;
			}
			default:{
				cout<<"\n\t Exit.....\n";
				break;
			}
		}
	}while(ch!=0);
}
