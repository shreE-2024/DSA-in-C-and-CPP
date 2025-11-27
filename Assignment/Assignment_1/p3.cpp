#include<iostream>
using namespace std;
int main(){
	int i,j,k=1;
	for(i=1;i<5;i++){
		for(j=5-i;j>0;j--){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
				if(j==1||j==i){
					cout<<k<<" ";
				}
				else{
					cout<<k+(i-2)<<" ";
				}
				
		}
		cout<<endl;
	}
}
