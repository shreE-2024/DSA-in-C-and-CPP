#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		k=1;
		for(j=6-i;j>0;j--){
			cout<<"  ";
		}
		cout<<k<<" ";
		for(j=k+1,k=5-i;k<4;k++,j++){
			if(i==5){
				cout<<j<<" ";
			}
			else{
				cout<<"  ";
			}
			
		}
		j-=2;
		for(k=5-i;k<4;k++,j--){
			if(i==5||k==1){
				cout<<j<<" ";
			}
			else{
				cout<<"  ";
			}
			
		}
		
		
		cout<<endl;
	}
}
