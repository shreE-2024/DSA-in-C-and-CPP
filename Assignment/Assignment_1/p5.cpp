#include<iostream>
using namespace std;
int main(){
	int i,j,k=0;
	for(i=1;i<=5;i++){
		
		for(j=5-i;j>0;j--){
			cout<<"  ";
		}
		for(j=1;j<=i+k;j+=2){
				
					cout<<"*"<<" ";
				
				
		}
		k=k+3;
		cout<<endl;
	}
}
