#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		
			for(j=5-i;j>0;j--){
				cout<<"  ";
			}
			for(j=1;j<=i;j++){
				if(j==1||j==i){
					cout<<"*   ";
				}
				else{
					cout<<"    ";
				}
		}
		cout<<endl;
	}
	for(i=5;i>0;i--){
		
		for(j=0;j<5-i;j++){
			cout<<"  ";
		}
		for(j=(i*2)-1;j>0;j--){
			if(j==10-(6-i)){
				cout<<"* ";
			}
			else{
				cout<<"    ";
			}
				
			
						
		}
		cout<<endl;
	}
}
