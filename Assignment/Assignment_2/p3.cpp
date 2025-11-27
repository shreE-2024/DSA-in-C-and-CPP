#include<iostream>
using namespace std;
int main(){
	int i,j,k=1;
	for(i=1;i<=5;i++){
		k=1;
		for(j=1;j<=5;j++){
			if(i!=5&&j==1&&i>1){
				cout<<k;
			}
			if(j==i||i==5){
				cout<<j<<" ";
				
			}
			else{
				cout<<"  ";
			}
			
			
			
		}
		cout<<endl;
	}
	
}
