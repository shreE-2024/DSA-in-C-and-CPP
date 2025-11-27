#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			if(i==1){
				cout<<j<<" ";	
			}
			else{
				if(i==j && j!=5){
					cout<<j<<" ";
				}
				
				if( j==5){
					cout<<j<<" ";
				}
				else{
					cout<<"  ";
				}
			}
			
		}
		cout<<endl;
	}
}
