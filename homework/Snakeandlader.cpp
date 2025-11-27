#include<iostream>
using namespace std;
int main(){
	int i=0,j;
	while(i<100){
		j=1;
		while(j<=10){
			
			if((j+i)<10){
				cout<<"0";
			}
			cout<<j+i<<" ";
			j++;
		}
		cout<<endl;
		j=j+9;
		while(j>10){
			
			cout<<j+i<<" ";
			j--;
		}
		i=i+10;
		cout<<endl;
			
	}
	
}
